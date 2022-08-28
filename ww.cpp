//TLE on testset 2
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

void verify(vector<char> &v, pii &p, const int i){
	if(v[i] == 'E')
		p.sc++;		
	else if(v[i] == 'S')
		p.fi++;
	else if(v[i] == 'W')
		p.sc--;
	else
		p.fi--;
}

void solve(){
	int n, r, c, sr, scc; cin >> n >> r >> c >> sr >> scc;
	vector<char> v(n);
	for(int i = 0; i < n; ++i) cin >> v[i];
	set<pair<int,int>> st; //E = (#,+), S = (+,#), N = (-,#) W = (#,-);
	pii p = {sr, scc};
	st.insert(p);
	for(int i = 0; i < n; ++i){
		verify(v, p, i);
		// last = s[i];
		while(st.count(p) != 0){
			verify(v, p, i);
		}
		st.insert(p);
	}
	cout << p.fi <<  " " << p.sc;
}

int main(){
	fast_io;
	int t = 0;
	cin >> t;
	for(int i = 1; i <= t; ++i){
		cout << "Case #" << i << ": ";
		solve();
		cout << endl;
	}
	return (0);
}
