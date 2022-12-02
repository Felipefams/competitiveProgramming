/*
ID: augusto15
TASK: test
LANG: C++                 
*/
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

void solve(){
	int n; cin >> n;
	vector<ll> gv;
	vector<ll> lv;
	for(int i = 0; i < n; ++i){
		char c; cin >> c;
		ll k; cin >> k;
		if(c == 'G') gv.pb(k);
		else lv.pb(k);
	}
	sort(gv.begin(), gv.end());
	sort(lv.begin(), lv.end());
	vector<int> a;
	for(int i = 0; i < lv.size(); ++i){
		int ans = 0;
		for(int j = 0; j < gv.size(); ++j){
			if(gv[j] > lv[i]) ans++;
		}
		a.pb(ans + i);
	}
	for(int i = 0; i < gv.size(); ++i){
		int ans = 0;
		for(int j = 0; j < lv.size(); ++j){
			if(lv[j] < gv[i]) ans++;
		}
		a.pb(ans + gv.size() - i);
	}
	int ans = a[0];
	for(int i = 0; i < a.size(); ++i) ans = min(ans, a[i]);
	cout << ans;
}

// cout << "Case #" << t << ": ";
int main(){fast_io;
	solve();
	return (0);
}
