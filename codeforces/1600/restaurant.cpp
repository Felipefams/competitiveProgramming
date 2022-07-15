//greedy
//https://codeforces.com/contest/597/problem/B
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

bool cmp (pii &a, pii &b){
	return a.sc < b.sc;//ordenando pelo final
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	int n; cin >> n;
	vector<pii> v;
	for(int i = 0; i < n; ++i){
		int a, b; cin >> a >> b;
		v.pb({a, b});
	}
	sort(v.begin(), v.end(), cmp);
	int ans = 0;
	int fim = -1;
	for(int i = 0; i < n; ++i){
		if(v[i].fi > fim){	
			fim = v[i].sc;
			ans++;
		}
	}
	cout << ans << endl;

	return (0);
}
