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

int EditDistDP(string str1, string str2)
{
    int len1 = str1.length();
    int len2 = str2.length();
 
    int DP[2][len1 + 1]; 
    memset(DP, 0, sizeof DP);
    for (int i = 0; i <= len1; i++)
        DP[0][i] = i;
    for (int i = 1; i <= len2; i++) {
        for (int j = 0; j <= len1; j++) {
            if (j == 0)
                DP[i % 2][j] = i;
            else if (str1[j - 1] == str2[i - 1]) {
                DP[i % 2][j] = DP[(i - 1) % 2][j - 1];
            }
            else {
                DP[i % 2][j] = 1 + min(DP[(i - 1) % 2][j],
                                       min(DP[i % 2][j - 1],
                                           DP[(i - 1) % 2][j - 1]));
            }
        }
    }
    return DP[len2 % 2][len1];
}
vector<int> v;
void solve(){
	int n; cin >> n;
	if(n % 7 == 0){
		cout << n << endl;
		return;
	}
	int k1, k2;
	for(int i = 0; i < v.size(); ++i){
		if(v[i] > n){
			k1 = v[i];
			k2 = v[i-1];
			break;
		}
	}
	EditDistDP(to_string(k1), to_string(n)) < EditDistDP(to_string(k2), to_string(n))? cout << k1 << endl: cout << k2 << endl;
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	int t = 0;
	for(int i = 7; i < 1000; i += 7) v.pb(i);
	
	cin >> t;	
	while(t--){
		solve();
	}
	return (0);
}
