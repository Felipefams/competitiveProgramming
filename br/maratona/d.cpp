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

int editDistance(string &str1, string &str2)
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

double a[5];
string s;
void solve(){
	cin >> s;
	string v[5];
	for(int i = 0; i < 5; ++i) cin >> v[i];
	bool b = false;
	for(int i = 0; i < 5; ++i){
		if(v[i] == s){
			a[i]++;
			b = true;
		}		
	}
	if(b) return;
	int menor = INT_MAX;
	int dp[5];
	for(int i = 0; i < 5; ++i){
		int k = editDistance(v[i], s);
		dp[i] = k;
		if(k < menor) menor = k;
	}
	for(int i = 0; i < 5; ++i){
		if(dp[i] == menor) a[i] += 0.5;	
	}
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	int t = 0;
	cin >> t;
	while(t--){
		solve();
	}
	//ahhhhhhhhhhhh eu tava usando int e tava dando errado ahhhhhhhhhhhhhh
	double k = max({a[0], a[1], a[2], a[3], a[4]});
	cout << k << endl;
	for(int i = 0; i < 5; ++i){
		if(a[i] == k){
			cout << i+1 << " ";
		}
	}
	cout << endl;
	return (0);
}
