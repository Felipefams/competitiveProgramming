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

void solve(){
	//solution
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	int a, b; cin >> a >> b;
	uset<int>sta;
	uset<int>stb;
	int c1 = 0;
	int c2 = 0;
	for(int i = 0; i < a; ++i){
		int k; cin >> k;
		sta.insert(k);
	}
	for(int i = 0; i < b; ++i){
		int k; cin >> k;
		stb.insert(k);
	}	
	for(auto &x : sta){
		if(stb.find(x) == stb.end()){
			c1++;
		}
	}
	for(auto &x : stb){
		if(sta.find(x) == sta.end()){
			c2++;
		}
	}
	cout << min(c1,c2);
	return (0);
}

