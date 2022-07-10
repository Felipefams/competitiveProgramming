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

vector<pii> cpy(vector<pii> &v, int n){
	vector<pii> nv((v.size() - n) + 1);
	for(int i = n, j = 0; i < v.size(); ++i, ++j)
		nv[j] = v[i];
	return nv;
}

char solve(vector<pii> r, vector<char> teams){
	if(teams.size() == 1)
		return teams[0];
	int size = teams.size()/2;
	vector<char> nt(size);
	for(int i = 0, k = 1; i < size; ++i, k += 2){
		if(r[i].fi > r[i].sc)
			nt[i] = (teams[k-1]);
		else
			nt[i] = (teams[k]);
	}
	vector<pii> k = cpy(r, size);
	return solve(k, nt);
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;	
	vector<pii> results;
	vector<char> teams(16);
	char c = 'A';
	for(int i = 0; i < 15; ++i){
		int k, q; cin >> k >> q;
		results.pb(mk(k,q));
	}
	for(int i = 0; i < 16; ++i) teams[i] = c++;	
	cout << solve(results,teams);
	return (0);
}
/*
 * old solution
void solve(){
	vector<pair<int,int>> results;
	vector<char> v;
	for(int i = 0; i < 15; ++i){
		int k, c; cin >> k >> c;
		results.pb(mk(k,c));
	}
	int n = results.size();
	char c = 'A';
	for(int i = 0; i < 8; ++i){
		if(results[i].fi > results[i].sc){
			v.pb(c);
		}else{
			v.pb(c+1);
		}
		c += 2;
	}
}*/
