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
bool b[26][26];
bool c[26];
void solve(){
    ifstream fin ("circlecross.in");
	ofstream fout ("circlecross.out");	
	string s; fin >> s;
	const int n = 52;
	int ans = 0;
	for(int i = 0; i < n; ++i){
		vector<int> dp(26);
		if(c[s[i] - 'A']) continue;
		for(int j = i+1; s[j] != s[i] && j < n; ++j){
//			if(b[s[i]- 'A'][s[j] - 'A'])
			dp[s[j] - 'A']++;
		}
		for(int j = 0; j < dp.size(); ++j){
			if(dp[j] == 1 && !b[s[i]-'A'][j] && !b[j][s[i]-'A']){
				b[s[i]-'A'][j] = 1;
				b[j][s[i]-'A'] = 1;
				ans++;
			}
		}	
		c[s[i] - 'A'] = 1;
	}
	fout << ans;
}

// cout << "Case #" << t << ": ";
int main(){fast_io;
	solve();
	return (0);
}
