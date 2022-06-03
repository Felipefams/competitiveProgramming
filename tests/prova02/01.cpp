#include <bits/stdc++.h>
using namespace std;
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
#define max3(a, b, c) max(a, max(b, c)) 
#define min3(a, b, c) min(a, min(b, c)) 
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
	//solution
}

// cout << "Case #" << t << ": ";
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);// cout.tie(0);
	vector<pii> vp;
	int copy;
	while(true){
		int t; 
		if(!(cin >> t)) break;
		copy = t;
		while(t--){
			int a; int b;
			cin >> a >> b ;
			pair<int,int> tmp = {a,b};
			vp.pb(tmp);
		}
		ll sum = 0;
		for(int i = 0; i < vp.size(); ++i){
			sum += vp[i].second;
		}
		if(copy == 1) cout << 0 << endl;
		else cout << sum - 5 << "\n";
	}
	return (0);
}
