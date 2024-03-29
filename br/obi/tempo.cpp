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

int vt[101];
vector<bool> emEspera(101, false);

void increment(int n){
	for(int i = 0; i < 101; ++i){	
		if(emEspera[i])
			vt[i] += n;
	}
}

void solve(){
	int n; cin >> n;
	umap<int,int> countMsg;
	for(int i = 0; i < n; ++i){
		char c; cin >> c;
		int t; cin >> t;
		increment(1);
		if(c == 'W'){
			increment(t - 2);
		}	
		else if(c == 'R'){
			emEspera[t] = true;
			countMsg[t]++;
		}
		else if(c == 'S'){
			emEspera[t] = false;
			countMsg[t]--;
		}
//		watch(vt[t]);
	}
	for(int i = 0; i < 101; ++i){
		if(countMsg[i] != 0)
			vt[i] = -1;
		if(vt[i] != 0)
			cout << i << " " << vt[i] << endl;
	}
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	solve();
	return (0);
}
