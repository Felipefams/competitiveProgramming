#include <bits/stdc++.h>
using namespace std;
//vrum vrum
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
//constants
#define endl "\n"
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
	for(auto& x : v){
		os << x << " ";
	}
	os << endl;
	return os;
}
/*
class kmp{
	public:
		kmp(){}
		vector<int>
}*/

void computeLPSArray(string pat, vector<int> &lps){
    // length of the previous longest prefix suffix
    int len = 0;
	int M = lps.size();

    lps[0] = 0; // lps[0] is always 0

    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }else{ // (pat[i] != pat[len])
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar
            // to search step.
            if (len != 0) {
                len = lps[len - 1];

                // Also, note that we do not increment
                // i here
            }else{// if (len == 0) 
                lps[i] = 0;
                i++;
            }
        }
    }
}

vector<pair<int,int>> kmp(const string f, string s){
	vector<int> lps(f.size());
	computeLPSArray(f, lps);
	cout << lps;

//	return b;
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	string s; //cin >> s;
	getline(cin,s);
	cout << s << endl;
	kmp(s, "abxababxab");
	return (0);
}

