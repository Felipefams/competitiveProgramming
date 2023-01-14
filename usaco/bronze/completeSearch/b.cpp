/*
ID: augusto15
TASK: test
LANG: C++                 
*/
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
ifstream fin ("cownomics.in");
ofstream fout ("cownomics.out");	

template<typename T>
bool intersection(uset<T> &a, uset<T> &b){
	for(auto &x : a){//nlogn
		if(b.count(x)){
			return true;
		}
	}
	return false;
}
void solve(){
	int n, m; fin >> n >> m;
	vector<string> s(n);
	vector<string> p(n);
	for(int i = 0; i < n; ++i) fin >> s[i];
	for(int i = 0; i < n; ++i) fin >> p[i];	
	int ans = 0;
	string tmps(3, '0'); 
	string tmpp(3, '0'); 
	for(int i = 0; i < m; ++i){
		for(int j = i+1; j < m; ++j){
			for(int k = j + 1; k < m; ++k){
				uset<string> sts;
				uset<string> stp;
				for(int x = 0; x < n; ++x){
					tmps[0] = s[x][i]; tmps[1] = s[x][j]; tmps[2] = s[x][k];
					tmpp[0] = p[x][i]; tmpp[1] = p[x][j]; tmpp[2] = p[x][k];
					sts.insert(tmps);
					stp.insert(tmpp);
				}
				if(!intersection(sts, stp)) ans++; //this is not the best option
			}
		}
	}
	fout << ans;
}

// cout << "Case #" << t << ": ";
int main(){fast_io;
	solve();
	return (0);
}
