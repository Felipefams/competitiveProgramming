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

void makePsa(vector<ll> &v, vector<ll> &psa){
	psa[0] = 0;// v[0];
	for(int i = 1; i <= v.size(); i++){
		psa[i] = psa[i-1] + v[i-1];
	}
}

void solve(){
	ll n, m; cin >> n >> m;
	vector<ll> v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	vector<ll> psa(n+1);
	for(int i = 1; i <= n; i++) psa[i] = psa[i-1] + v[i-1];	
	ll count = 0;
	for(int i = 1; i <= n; ++i){
		if(i < m && psa[i] < psa[m] && v[m-1] > 0){
			v[m-1] = -v[m-1];
			count++;
			makePsa(v, psa);
		}
	}
	for(int i = m; i <= n; ++i){
		if(psa[i] < psa[m]){
			v[i-1] = -v[i-1];
			count++;
			makePsa(v, psa);
		}
	}
	for(int i = 1; i < m; ++i){
		if(abs(v[i-1]) > abs(v[m-1]) && v[i-1] > 0){
			v[i-1] = -v[i-1];
			makePsa(v, psa);
			count++;
		}
	}
	cout << count << endl;
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
