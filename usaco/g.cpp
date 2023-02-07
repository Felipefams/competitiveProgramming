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

void setIO(string name = ""){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	if (!name.empty()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

bool adjm[101][101];
bool m[101][101];

void solve(){
	int n; cin >> n;
	if (n == 1) {
		cout << -1 << endl;
		return;
	}
	for(int i = 0; i < n-1; ++i){
		int e; cin >> e;
		int k; cin >> k;
		adjm[e][k] = true;
	}
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= n; ++j){
			cout << adjm[i][j] << " ";
		}
		cout << endl;
	}
	p(1, 1, n);
	cout << endl;
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= n; ++j){
			cout << m[i][j] << " ";
		}
		cout << endl;
	}

	cout << -1 << endl;
}

// cout << "Case #" << t << ": ";
int main(){
//	setIO("factory");
	fast_io;
	solve();
	return (0);
}
