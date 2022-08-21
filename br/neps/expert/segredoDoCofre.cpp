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

//int arr[10][100000+10];
void solve(){	
	int n, m; cin >> n >> m;
	int psa[10][n];
	vector<vector<int>> arr(10, vector<int>(n));
	vi tmp(n);
	for(int i = 0; i < n; ++i){
		int k; cin >> k;
		tmp[i] = k;
		arr[k][i]++;
	}
	for(int i = 0; i < 10; ++i){
		psa[i][0] = arr[i][0];
		for(int j = 1; j < n; ++j){
			psa[i][j] = psa[i][j-1] + arr[i][j];
		}
	}	
	vector<int> nSums(10);
	int lastPos; cin >> lastPos;
	for(int i = 1; i < m; ++i){
		int currentPos; cin >> currentPos;
		lastPos--, currentPos--;
		for(int j = 0; j < 10; ++j){
			int maior = max(currentPos, lastPos);
			int menor = min(currentPos, lastPos);
			if(menor > 0){
				nSums[j] += psa[j][maior] - psa[j][menor-1];
			}
			else{
				nSums[j] += psa[j][maior] - psa[j][menor];
			}
		}
		lastPos = currentPos;
	}
	for(auto &x : nSums){
		cout << x << " ";
	}
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;	
	solve();
	return (0);
}
