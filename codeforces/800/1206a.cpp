//https://codeforces.com/problemset/problem/1206/A
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


void solve(){
	int n; cin >> n;
	set<int> a;
	set<int> b;
	while(n--){
		int tmp; cin >> tmp;
		a.insert(tmp);
	}
	int m; cin >> m;
	while(m--){
		int tmp; cin >> tmp;
		b.insert(tmp);
	}
	pair<int,int> ans;
	bool found = false;
	for(auto &x : a){
		for(auto &y : b){
			int k = x + y;
			if(a.count(k) == 0 && b.count(k) == 0){
				ans.fi = x; ans.sc = y;
				found = true;
				break;
			}
		}
		if(found)break;
	}
	cout << ans.fi << " " << ans.sc << endl;
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	solve();
	return (0);
}
