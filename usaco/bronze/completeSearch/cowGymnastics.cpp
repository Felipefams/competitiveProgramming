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

struct hash_pair {
	template <class T1, class T2>
	size_t operator()(const pair<T1, T2>& p) const
	{
		auto hash1 = hash<T1>{}(p.first);
		auto hash2 = hash<T2>{}(p.second);

		if (hash1 != hash2) {
			return hash1 ^ hash2;			
		}
		
		// If hash1 == hash2, their XOR is zero.
		return hash1;
	}
};

void solve(){
	ofstream fout ("gymnastics.out");
 	ifstream fin ("gymnastics.in");
	int k, n; fin >> k >> n;
	int v[k][n];
	for(int i = 0; i < k; ++i){
		for(int j = 0; j < n; ++j){
			fin >> v[i][j];
		}
	}		
	umap<pair<int,int>,int, hash_pair> mp;
	for(auto&x : v){
		for(int i = 0; i < n; ++i){
			for(int j = i+1; j < n; ++j){
				mp[mk(x[i], x[j])]++;
			}
		}
	}
	int ans = 0;
	for(auto& x: mp){
		if(x.sc == k) ans++;
	}
	fout << ans;
}

// cout << "Case #" << t << ": ";
int main(){fast_io;
//	ofstream fout ("test.out");
//   ifstream fin ("test.in");
	solve();
	return (0);
}
