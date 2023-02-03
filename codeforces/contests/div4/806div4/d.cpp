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
	vector<string> v(n);
	for(auto &x : v) cin >> x;
	set<string> st;
	for(auto &x : v) st.insert(x);
	string ans(n, '*');
	for(int i = 0; i < n; ++i){
		set<pair<string,string>> sbs;
		for(int k = 0; k < v[i].size(); ++k){
			string s1 = v[i].substr(0, k);
			string s2 = v[i].substr(k, v[i].size());
			sbs.insert(mk(s1,s2));
		}
		for(auto &x : sbs){
			if(st.count(x.fi) != 0 && st.count(x.sc)){
				ans[i] = '1';
				break;
			}else{
				ans[i] = '0';
			}
		}
	}


	cout << ans << endl;
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
