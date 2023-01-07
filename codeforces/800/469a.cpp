//wrong, maybe there's a problem on the website
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


bool solve(){
	int n; cin >> n;
	vector<bool> b(n+1);
	uset<int> v;
	int x; cin >> x;
	while(x--){
		int k; cin >> k;
		b[k] = 1;
		v.insert(k);
	}	
	cin >> x;
	while(x--){
		int k; cin >> k;
		b[k] = 1;
		v.insert(k);
	}
//	for(auto &x : v) b[x] = 1;	
	for(int i = 1; i <= n; ++i){
		if(!b[i]) return false;	
	}
	return true;
}

int main(){
	fast_io;
	if(solve()) cout << "I become the guy.\n" << endl;
	else cout << "Oh, my keyboard!\n" << endl;
	return (0);
}
