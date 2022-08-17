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

int numbers[3][100010]; 
void solve(){
	ofstream fout ("bcount.out");
    ifstream fin ("bcount.in");

	int n, m; fin >> n >> m;
	int psa[3][n];
	for(int i = 0; i < n; ++i){
		int k; fin >> k;
		numbers[k-1][i]++;
	}
	for(int i = 0; i < 3; ++i){
		psa[i][0] = numbers[i][0];
		for(int j = 1; j < n; ++j){
			psa[i][j] = numbers[i][j] + psa[i][j-1];
		}
	}
	for(int i = 0; i < m; ++i){
		int l, h; fin >> l >> h;
		l--, h--;
		for(int j = 0; j < 3; ++j){
			if(l != 0)
				fout << psa[j][h] - psa[j][l-1];// << " ";
			else fout << psa[j][h];// << " ";
			if(j != 2)
				fout << " ";
		}
		fout << endl;
	}
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;	
	solve();
	return (0);
}
