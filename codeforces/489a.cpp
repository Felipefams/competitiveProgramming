//https://codeforces.com/contest/489/problem/A
#include <bits/stdc++.h>
using namespace std;
//vrum vrum
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
//constants
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

bool isSorted(vector<ll> &v){
	for(int i = 1; i < v.size(); ++i)
		if(v[i-1] > v[i])
			return false;
	return true;
}

void solve(){
	//compare the sorted vector with the non-sorted vector
	//and track the swaps
	int n; cin >> n;
	vector<ll> v(n);
	for(int i = 0; i < n; ++i) cin >> v[i];
	vector<ll> srtd = v;
	sort(srtd.begin(), srtd.end());
	vector<pii> pos;//vector to save the elements positions, max size will be N
	do{
	for(int i = 0; i < n; ++i){
		if(v[i] != srtd[i]){
			for(int j = i; j < n; ++j){
				if(v[j] == srtd[i]){
					swap(v[i],v[j]);
					pos.pb({i, j});
				}
			}
		}
	}
	}while(!isSorted(v));
	cout << pos.size() << "\n";
	for(auto &x : pos){
		cout << x.fi << " " << x.sc << "\n";
	}
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;	
	solve();
	return (0);
}
