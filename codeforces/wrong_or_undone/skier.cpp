//https://codeforces.com/contest/1351/problem/C
//undone
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

/*
 * we need to look at the edges, the path, not the
 * block itself.
 * [1,1]-[1,2]
 * || ||  | |
 * [2,1]-[2,2]
 * the path you make to go from 1,1 to 2,2 can be different
 * */ 
ll solve(){	
	string a; cin >> a;
	ll ans = 0;
	pii c = {0,0};
	set<pii, ll> v; //set<pair<pii,pii>>; 
	v.emplace(c,1);	
	for(ll i = 0; i < a.length(); ++i){
		if(a[i] == 'N'){
			c.fi--;
			v[c]++;
		}
		else if(a[i] == 'S'){
			c.fi++;
			v[c]++;
		}
		else if(a[i] == 'E'){
			c.sc++;
			v[c]++;
		}
		else if(a[i] == 'W'){
			c.sc--;
			v[c]++;
		}
		if(v[c] == 1)
			ans += 5;
		else
			ans++;
	}	
		// for(auto &x : v){
		// 	cout << "X = " << x.fi.fi << " Y = " << x.fi.sc << " C = " << x.sc <<endl;
		// }
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
