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


void solve(){
	string s;
	cin >> s;
	int ans = 0;
	for(int i = s.length() - 1; i >= 0; --i){
		if(s[i] == 'I') ans++;
		else if(s[i] == 'V') ans += 5;
		else if(s[i] == 'X') ans += 10;
		else if(s[i] == 'L') ans += 50;
		else if(s[i] == 'C') ans += 100;
		else if(s[i] == 'D') ans += 500;
		else ans += 1000;
	}
	for(int i = 1; i < s.length(); ++i){
		string tmp = "";
		tmp.pb(s[i-1]); tmp.pb(s[i]);
		if(tmp == "IV" || tmp == "IX") ans -= 2;
		else if(tmp == "XL" || tmp == "XC") ans -= 20;
		else if(tmp == "CD" || tmp == "CM") ans -= 200;
	}
	cout << ans << endl;
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	solve();
	return (0);
}
