//https://codeforces.com/contest/1703/problem/F
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

void solve(){
	int n; cin >> n;
	vector<ll> v(n+1);
	for(int i = 1; i <= n; ++i){
		ll k; cin >> k;
//		if(k >= n) v[i] = -1;
//		else v[i] = k;	
		v[i] = k;
	}
	multiset<ll> st;
	for(int i = 1; i <= n; ++i){
		if(v[i] < i){
			st.insert(v[i]);
		}
	}
//	for(auto &x : st) cout << x << " "; 
//	cout << endl;
	int k = st.size();
	int ans = ((k*(k-1))/2);
	cout << k << endl;
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
