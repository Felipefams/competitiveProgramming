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


// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	while(true){
		int a, b; cin >> a >> b;
		if(a == 0 || b == 0) break;
		vector<int> v(a);
		for(int i = 0; i < a; ++i) cin >> v[i];
		vector<int> ord = v; sort(ord.begin(), ord.end());
		umap<int,int> mp;
		vector<int> ans;
		for(int i = 0; i < b; ++i) mp[ord[i]]++;
		for(int i = 0; i < a; ++i){
			if(mp[v[i]] > 0){
				mp[v[i]] = 0;
			}
			else if(mp[v[i]] == 0){
				ans.pb(v[i]);
			}
		}
		for(int i = 0; i < ans.size(); ++i){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	return (0);
}
