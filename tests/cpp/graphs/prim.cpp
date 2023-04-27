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
// vector<int> adj[N]; 
vector<vector<pair<int,int>>> adj(N); // adj list with both the nodes and the weights
class Compare{
	public:
	bool operator()(pii a, pii b){
		return a.sc > b.sc;
	}	
};
priority_queue<pii, vector<pii>, Compare> q;

int djikstra(int n, int target){
	bool visited[N+1];
	int distance[N+1];
	for(auto &x : distance) x = imax;
	visited[n] = true; //mark as visited
	distance[n] = 0; //distance from source
	q.push(mk(n, distance[n])); //push the first node into the queue
	while(!q.empty()){
		pii s = q.top();//first node in the queue
		q.pop(); //remove the first node from the queue
		for(auto &x : adj[s.fi]){
			if(distance[x.fi] > distance[s.fi] + x.sc){
				distance[x.fi] = distance[s.fi] + x.sc;
				visited[x.fi] = true;
				q.push(x);
			}
		}
	}
	return distance[target];
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	int n,m,w;
	int t; cin >> t;
	while(t--){
		cin >> n >> m >> w;
		adj[n].pb(mk(m,w));	
		// adj[m].pb(mk(n,w));
	}
	cout << "distance from 0 to 3 = "<< djikstra(0, 3) << endl;
	// dfs(0);
	return (0);
}