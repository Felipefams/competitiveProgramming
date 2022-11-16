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

//O(n^2) solutions study: 
//my implementation 
int ml(string &a, string &b){
	int n = a.size() + 1;
	int m = b.size() + 1;
	int v[n][m];	
	for(int i = 0; i < n; ++i){
		v[i][0] = i;
	}
	for(int i = 1; i < m; ++i){
		v[0][i] = i;
	}
	for(int i = 1; i < n; ++i){
		for(int j = 1; j < m; ++j){
			int k = min({v[i][j-1], v[i-1][j], v[i-1][j-1]});
			if(a[i-1] == b[j-1]) v[i][j] = k;
			else v[i][j] = k+1;
		}
	}
	return v[n-1][m-1];
}

//copilot implementation
int levenshtein(string &a, string &b){
	vector<vector<int>> dp(a.size()+1, vector<int>(b.size()+1, 0));
	for(int i = 0; i <= a.size(); i++){
		for(int j = 0; j <= b.size(); j++){
			if(i == 0) dp[i][j] = j;
			else if(j == 0) dp[i][j] = i;
			else if(a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1];
			else dp[i][j] = 1 + min({dp[i][j-1], dp[i-1][j], dp[i-1][j-1]});
		}
	}
	return dp[a.size()][b.size()];
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	string s1, s2; cin >> s1 >> s2;
	cout << levenshtein(s1, s2) << endl;
	cout << ml(s1, s2) << endl;
	return (0);
}
