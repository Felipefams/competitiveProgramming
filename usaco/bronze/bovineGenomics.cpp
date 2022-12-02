/*
ID: augusto15
TASK: test
LANG: C++                 
*/
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

template<typename T>
std::ostream & operator << (std::ostream &os ,std::vector<T> &v){
	for(auto& x : v) os << x << " ";
	os << endl;
	return os;
}   

void solve(){
#define cin fin
#define fout cout
	ifstream fin ("cownomics.in");
	ofstream fout ("cownomics.out");	int n, m; cin >> n >> m;
	vector<string> s(n);
	vector<string> p(n);
	for(int i = 0; i < n; ++i) cin >> s[i];
	for(int i = 0; i < n; ++i) cin >> p[i];
	vector<uset<char>> vs;
	vector<uset<char>> vp;
	for(int i = 0; i < m; ++i){
		uset<char> tmp;
		for(int j = 0; j < n; ++j){
			tmp.insert(s[j][i]);
		}
		vs.pb(tmp);
	}
	for(int i = 0; i < m; ++i){
		uset<char> tmp;
		for(int j = 0; j < n; ++j){
			tmp.insert(p[j][i]);
		}
		vp.pb(tmp);
	}
	int ans = 0;
	for(int i = 0; i < m; ++i){
		bool b = false;
		for(auto &x : vp[i]){
			if(vs[i].count(x)){
				b = true;
				break;
			}
		}
		if(!b) ans++;
	}
	cout << ans;
#undef cin
#undef cout
}

// cout << "Case #" << t << ": ";
int main(){fast_io;
//   ifstream fin ("cownomics.in");
//	ofstream fout ("cownomics.out");
	solve();
	return (0);
}
