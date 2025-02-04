#include <bits/stdc++.h>
using namespace std;
//vrum vrum
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
//constants
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




int adj[1001][1001];
bool visited[1001];

void DFS(int s){
	if(visited[s]) {
		return;	
	}
	visited[s] = true;
	for(auto &x : adj[s]){
		DFS(x);
	}
}
// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	int n, m;
	cin >> n >> m;
	while(m--){
		int x, y;
		cin >> x >> y;
		adj[x][y] = x;//.pb(y);
		adj[y][x] = y;//.pb(x);
	}

	int ans = 0;
	for(int i = 1; i <= n; ++i){
		if(!visited[i]){
			DFS(i);
			ans++;
		}
	}	
	
	cout << ans << endl;
	return (0);
}
