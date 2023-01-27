#include <bits/stdc++.h>
using namespace std;
//vrum vrum
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
//constants
//#define endl "\n"
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define exp 1e9
#define imax INT_MAX
#define imin INT_MIN
//functions
#define sqr(a) (a)*(a)
#define sz(x) ((int)x.size())
#define watch(x) cout << (#x) << " is " << (x) << endl
//utils
#define umap unordered_map
#define uset unordered_set
#define pb push_back
#define mk make_pair
#define fi first
#define sc second
//types
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;
bool prime(ll a) { if (a==1) return 0; for (int i=2;i*i<=a;++i) if (a%i==0) return 0; return 1; }
template<typename T>
std::ostream & operator << (std::ostream &os ,std::vector<T> &v){
	for(auto& x : v) os << x << " ";	
	os << endl;
	return os;
}

class Aho {
    
    // A vertex from the trie
    struct Vertex {
        std::unordered_map<char, int> children {}; // Links to the child vertexes in the trie
        int        parent = -1; // Link to the parent vertex
        int   suffix_link = -1; // Suffix link from current vertex (the equivalent of P[i] from the KMP algorithm)
        int end_word_link = -1; // Link to the leaf vertex of the maximum-length word we can make from the current prefix
        int       word_ID = -1; // If the vertex is the leaf, we store the ID of the word
        char parent_char;       // Char which moves us from the parent vertex to the current vertex
        bool leaf = false;      // Flag that some word from the dictionary ends in this vertex
    };

    std::vector<Vertex> trie;
    std::vector<int> words_length;
    int size;
    int root;
    int wordID; // id of the last inserted word
    
public:
    
    Aho()
        : trie{}, words_length{}, size{0}, root{0}, wordID{0}
    {
        // Add root node
        trie.push_back(Vertex{});
        ++size;
    }
    
    void add_string(const std::string& s)
    {
        int curVertex = root;
        
        for (char c : s) // Iterating over the string's characters
        {
            // Checking if a vertex with this edge exists in the trie:
            if (trie[curVertex].children.find(c) == trie[curVertex].children.end())
            {
                trie.push_back(Vertex{});

                trie[size].parent = curVertex;
                trie[size].parent_char = c;
                trie[curVertex].children[c] = size;
                size++;
            }
            
            curVertex = trie[curVertex].children[c]; // Move to the new vertex in the trie
        }

        // Mark the end of the word and store its ID
        trie[curVertex].leaf = true;
        trie[curVertex].word_ID = wordID;
        words_length.push_back(s.size());
        
        ++wordID;
    }
    
    void prepare()
    {
        std::queue<int> vertexQueue {};
        vertexQueue.push(root);
	
        while (!vertexQueue.empty())
        {
            int curVertex = vertexQueue.front();
            vertexQueue.pop();
            
            CalcSuffLink(curVertex);

            for (const auto& p : trie[curVertex].children)
                vertexQueue.push(trie[curVertex].children[p.first]);
        }
    }
    
    int process(const std::string& text)
    {
        // Current state value
        int currentState = root;

        // Targeted result value
        int result = 0;

        for (int j = 0; j < text.size(); j++)
        {
            // Calculating new state in the trie
            while (true)
            {
                // If we have the edge, then use it
                if (trie[currentState].children.find(text[j]) != trie[currentState].children.end())
                {
                    currentState = trie[currentState].children[text[j]];
                    break;
                }
                
                // Otherwise, jump by suffix links and try to find the edge with
                // this char

                // If there aren't any possible edges we will eventually ascend to
                // the root, and at this point we stop checking.
                if (currentState == root) break;
                
                currentState = trie[currentState].suffix_link;
            }

            int checkState = currentState;

            // Trying to find all possible words from this prefix
            while (true)
            { 
                // Checking all words that we can get from the current prefix
                checkState = trie[checkState].end_word_link;

                // If we are in the root vertex, there are no more matches
                if (checkState == root) break;			

                // If the algorithm arrived at this row, it means we have found a
                // pattern match. And we can make additional calculations like find
                // the index of the found match in the text. Or check that the found
                // pattern is a separate word and not just, e.g., a substring.
                result++;
                int indexOfMatch = j + 1 - words_length[trie[checkState].word_ID];

                std::cout << "There was a match at index " << indexOfMatch << ": ";
                std::cout << text.substr(indexOfMatch, words_length[trie[checkState].word_ID]) << std::endl;
                
                // Trying to find all matched patterns of smaller length
                checkState = trie[checkState].suffix_link;
            }
        }

        return result;
    }
    
private:
    
    void CalcSuffLink(int vertex)
    {
        // Processing root (empty string)
        if (vertex == root)
        { 
            trie[vertex].suffix_link = root;
            trie[vertex].end_word_link = root;
            return;
        }

        // Processing children of the root (one character substrings)
        if (trie[vertex].parent == root)
        { 
            trie[vertex].suffix_link = root;
            
            if (trie[vertex].leaf) trie[vertex].end_word_link = vertex;
            else trie[vertex].end_word_link = trie[trie[vertex].suffix_link].end_word_link;
            
            return;
        }

        // Cases above are degenerate cases as for prefix function calculation; the
        // value is always 0 and links to the root vertex.

        // To calculate the suffix link for the current vertex, we need the suffix
        // link for the parent of the vertex and the character that moved us to the
        // current vertex.

        int curBetterVertex = trie[trie[vertex].parent].suffix_link;
        char chVertex = trie[vertex].parent_char; 

        // From this vertex and its substring we will start to look for the maximum
        // prefix for the current vertex and its substring.

        while (true)
        {
            // If there is an edge with the needed char, we update our suffix link
            // and leave the cycle
            if (trie[curBetterVertex].children.find(chVertex) != trie[curBetterVertex].children.end())
            {
                trie[vertex].suffix_link = trie[curBetterVertex].children[chVertex];
                break;
            }
            
            // Otherwise, we are jumping by suffix links until we reach the root
            // (equivalent of k == 0 in prefix function calculation) or we find a
            // better prefix for the current substring.
            if (curBetterVertex == root)
            { 
                trie[vertex].suffix_link = root;
                break;
            }
            
            curBetterVertex = trie[curBetterVertex].suffix_link; // Go back by sufflink
        }
        
        // When we complete the calculation of the suffix link for the current
        // vertex, we should update the link to the end of the maximum length word
        // that can be produced from the current substring.
        if (trie[vertex].leaf) trie[vertex].end_word_link = vertex; 
        else trie[vertex].end_word_link = trie[trie[vertex].suffix_link].end_word_link;
    }

}; // end of class Aho

bool v[101];
void solve(){
	int n; cin >> n;
	list<int> l;
	vector<vector<int>> lists;
	vector<string> vs;
	for(int i = 0; i < n; ++i){
		vector<int> vv;
		string s;
		for(int j = 0; j < n-1; ++j){
			int tmp; cin >> tmp;
			vv.pb(tmp);
			s += to_string(tmp);
		}
		vs.pb(s);
		lists.pb(vv);
	}
	vector<int> ol(n-1);
	for(int i = 0; i < n; ++i){
		l.pb(lists[0][i]);
		ol[i] = lists[0][i];
		v[lists[0][i]] = true;
	}
	cout << ol;
	int faltante = 0;
	for(int i = 1; i < n+1; ++i){
		if(!v[i]) faltante = i;
	}
	Aho a1{};
	Aho a2{};
	bool flag = false;
	for(int i = 1; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if(lists[i][j] == faltante){
				int prev, next;
				string s1, s2;
				if(j == 0){ 
					next = j+1;
					prev = -1;
					s2 += to_string(faltante);
					s2 += to_string(next);
					a2.add_string(s2);
				}else if(j == lists[i].size() - 1){
					next = -1;
					prev = j - 1;
					s1 += to_string(prev);
					s1 += to_string(faltante);
					a1.add_string(s1);
				}else{
					next = j + 1;
					prev = j - 1;
					s2 += to_string(faltante);
					s2 += to_string(next);
					s1 += to_string(prev);
					s1 += to_string(faltante);
					a1.add_string(s1);
					a2.add_string(s2);
				}
				flag = true;
				break;
			}
		}
		if(flag) break;
	}
	a1.prepare();
	a2.prepare();

	int m1 = 0;
	for(int i = 1; i < n; ++i){

	}
	/*
	auto z = l.begin();
	advance(z, 1);
	l.insert(z, 3);
	for(auto &x : l){
		cout << x << " ";
	}*/	
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	int t = 0;
	cin >> t;
	while(t--){
		solve();
	}
	return (0);
}
