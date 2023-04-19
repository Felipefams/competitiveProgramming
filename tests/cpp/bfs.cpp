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
	for(auto& x : v) os << x << " ";	
	os << endl;
	return os;
}

const int N = 100005;
vector<int> adj[N]; 
queue<int> q;

void bfs(int n){
	bool visited[N+1];
	int distance[N+1];

	visited[n] = true; //mark as visited
	distance[n] = 0; //distance from source
	q.push(n); //push the first node into the queue
	while(!q.empty()){
		int s = q.front();//first node in the queue
		q.pop(); //remove the first node from the queue
		cout << s << endl;
		//process node s
		for(auto &x : adj[s]){
			if(visited[x]) continue;
			visited[x] = true;
			distance[x] = distance[s] + 1;
			q.push(x);
		}
	}

}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	int n,m;
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		adj[n].pb(m);	
		adj[m].pb(n);
	}
	bfs(0);
	// dfs(0);
	return (0);
}