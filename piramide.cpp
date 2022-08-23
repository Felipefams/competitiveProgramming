#include <bits/stdc++.h>
using namespace std;
//vrum vrum
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
//types
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;
//constants
#define endl "\n"
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define exp 1e9
#define imax INT_MAX
#define imin INT_MIN
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
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
bool prime(ll a) { if (a==1) return 0; for (int i=2;i*i<=a;++i) if (a%i==0) return 0; return 1; }

void makeBordas(vector<vector<int>> &v, int n, int pos, int k){
	for(int j = pos; j < n-pos; ++j){
		v[pos][j] = k;
	}
	for(int i = pos; i < n-pos; ++i){
		v[i][pos] = k;
	}
	for(int j = pos; j < n-pos; ++j){
		v[n-k][j] = k;
	}
	for(int i = pos; i < n-pos; ++i){
		v[i][n-k] = k;
	}
}

void solve(){
	int n; cin >> n;
	vector<vector<int>> v(n, vector<int>(n));
	/*
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	*/
	/*
	makeBordas(v, n, 0, 1);
	makeBordas(v, n, 1, 2);
	makeBordas(v, n, 2, 3);
	makeBordas(v, n, 3, 4);
	makeBordas(v, n, 5, 6);
	makeBordas(v, n, 6, 7);
	makeBordas(v, n, 7, 8);
	makeBordas(v, n, 8, 9);
	makeBordas(v, n, 9, 10);
	*/
	for(int i = 0; i < n; ++i){
		makeBordas(v,n,i,i+1);
	}
//	makeBordas(v, n, 4, 5);
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	solve();
	return (0);
}
