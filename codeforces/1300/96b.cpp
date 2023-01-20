//https://codeforces.com/problemset/problem/96/B
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

vector<ll> v;

void permutate(string s, int n){
	if(s.size() == n){
		int a = 0;
		int b = 0;
		for(int i = 0; i < s.size(); ++i){
			if(s[i] == '4') a++;
			else b++;
		}
		if(a == b) v.pb(stoll(s));
		return;
	}
	permutate(s + "4", n);
	permutate(s + "7", n);
}

void solve(){
	string s; cin >> s;
	permutate("", s.size());
	if(s.size() % 2 != 0){
		string n = "";
		for(int i = 0; i < s.size()+1; ++i){
			if(i < (s.size()+1)/2)n.pb('4');
			else n.pb('7');
		}
		cout << n << endl; return;
	}else if(stoll(s) > v[v.size() - 1]){
		string n = "";
		for(int i = 0; i < s.size()+2; ++i){
			if(i < (s.size()+2)/2)n.pb('4');
			else n.pb('7');
		}
		cout << n << endl; return;
	}
	ll ans = *lower_bound(v.begin(), v.end(), stoll(s));
	cout << ans << endl;
//	cout << v;
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	solve();
	return (0);
}
