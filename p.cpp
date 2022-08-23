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
	int n; cin >> n;
	string s; cin >> s;	
	vi roots;
	for(int i = 1; i <= n/2; ++i){
		if(n % i == 0){
			roots.pb(i);
		}
	}
	for(int i = 0; i < roots.size(); ++i){
		int k = n/roots[i];
		vector<vector<int>> v1(26, vi(1));
		for(int j = 0; j < k-1; ++j){
			v1[s[j]-'a'][0]++;
		}
		vector<vector<int>> v2(26, vi(1));
		k--;
		bool check = true;
		for(int j = 0; j < n && check; ++j){
			if(j % k == 0 && j != 0){
				for(int x = 0; x < 26; ++x){
					if(v2[x][0] != v1[x][0]){
						check = false;
						break;
					}
				}
				v2.clear();
			}
			v2[s[j] - 'a'][0]++;
		}
		if(check){
			string ans = "";
			for(int z = 0; z < k; ++z){
				ans.pb(s[z]);
			}
			cout << ans;
		}
	}
	
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;	
	solve();
	return (0);
}
