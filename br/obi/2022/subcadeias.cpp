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

bool checkPalindrome(string &s){
	for(int i = 0, j = s.size() - 1; i < j; ++i, --j){
		if(s[i] != s[j]){
			return false;
		}
	}
	return true;
}

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	vector<string> v;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			v.pb(s.substr(i,j));
		}
	}
//	cout << checkPalindrome(s) << endl;
	int ans = 0;
	for(int i = 0; i < v.size(); ++i){
		if(checkPalindrome(v[i])){
			if(v[i].size() > ans)
				ans = v[i].size();
		}
	}
	if(checkPalindrome(s))
		ans = s.size();
	cout << ans;
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	solve();
	return (0);
}
