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
/*
typedef struct{
	ll x = 0;
	ll y = 0;
}Cord;
typedef Cord* ref_cord;
*/
 
 
ll solve(){	
	string a; cin >> a;
	ll ans = 0;
	pii c;
	map<pii, int> v;
	for(int i = 0; i < a.length(); ++i){
		if(a[i] == 'N'){
			v[c]++;
			c.fi--;
		}
		else if(a[i] == 'S'){
			v[c]++;
			c.fi++;
		}
		else if(a[i] == 'E'){
			v[c]++;
			c.sc++;
		}
		else if(a[i] == 'W'){
			v[c]++;
			c.sc--;
		}
		if(v[c] == 0)
			ans += 5;
		else ans++;
	}	
	return ans;
}
 
// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	ll t = 0;
	cin >> t;
	while(t--){
		cout << solve() << endl;
	}
	return (0);
}
