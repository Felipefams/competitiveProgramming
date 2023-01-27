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

int mergeSet(vector<uset<ll>> &v){
	vector<uset<ll>> nv;
	sort(v.begin(), v.end());
		for(int j = i; j < v.size(); ++j){
			int b = false;
			for(auto &x : v[i]){
				if(v[j].count(x)) b = true;
			}
			
		}
	for(int i = 0, j = v.size() - 1; i < v.size() || j >= 0 || j != i;){
		bool b = false;
		for(auto &x : v[i]){
			if(v[j].count(x)) b= true;
		}
		if(!b){	
				uset<ll> st;
				set_union(v[i].begin(), v[i].end(),
						v[j].begin(), v[j].end(),
						inserter(st, st.begin()));
				nv.pb(st);
				j--;
				i++;
		}
	}
	for(auto &x : nv){
		for(auto &y : x){
			cout << y << " ";
		}
		cout << endl;
	}
	return nv.size();
}

void solve(){
	int n; cin >> n;
	vector<ll> v(n);
	vector<uset<ll>> vl;
	for(int i = 0; i < n; ++i) cin >> v[i];
	sort(v.begin(), v.end());
	int ans = 1;
	for(int i = 1; i < n; ++i){
		uset<ll> tmp;
		while(v[i] != v[i-1]){
			tmp.insert(v[i-1]);
			i++;
		}
		vl.pb(tmp);
	}
	ans = mergeSet(vl);
	cout << ans << endl;	
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	int t = 0;
	cin >> t;
	while(t--){
		solve();
	}
	return (0);
}
