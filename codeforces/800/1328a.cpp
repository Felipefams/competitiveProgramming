#include <bits/stdc++.h>
using namespace std;
//constants
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define exp 1e9
#define imax INT_MAX
#define imin INT_MIN
//types
#define ll long long
#define ld long double
//functions
#define sqr(a) a*a
#define sz(x) ((int)x.size())
#define watch(x) cout << (#x) << " is " << (x) << endl
#define max3(a, b, c) max(a, max(b, c)) 
#define min3(a, b, c) min(a, min(b, c)) 
//utils
#define umap unordered_map
#define uset unordered_set
#define pb push_back
#define mk make_pair
#define fi first
#define sc second
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
typedef pair<int,int> pii;

void solve(){
	ll a; cin >> a;
	ll b; cin >> b;
	if(a % b == 0) cout << 0 << '\n';
	else cout << b - a % b << '\n';
}

// cout << "Case #" << t << ": ";
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);// cout.tie(0);
	int t = 0;
	cin >> t;
	while(t--){
		solve();
	}
	return (0);
}
