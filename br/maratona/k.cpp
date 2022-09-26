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


int to_time(string &s){
	int a = s[0] - '0';
	int b = stoi(s.substr(2,3)); 
	int c = stoi(s.substr(5,7));

	return (a * 60 * 1000) + (b*1000) + c; 
}

bool comp(const pii &a, const pii &b){
	return a.sc < b.sc;
}
int psa[101][101];
int voltas[101][101];

void solve(){
	int k, n; cin >> k >> n;
	pii bv = {-1, INT_MAX};
	int qf = 0;
	vector<pii> vp(k+1);
	for(int i = 1; i < k; ++i){
		int x; cin >> x;
		vector<string> tmp(n);
		int ft = 0;
		for(int j = 1; j < n; ++j){
			cin >> tmp[j];
			int y = to_time(tmp[j]);
			if(y < bv.sc){
				//best time
				bv.fi = x;
				bv.sc = to_time(tmp[j]);
				qf = j;
			}
			voltas[i][j] = y;
			ft += y;
		}
		vp[i] = (mk(x,ft));
	}	
	for(int i = 1; i < k; ++i){
		psa[i][0] = voltas[i][0];
		for(int j = 1; j < n; j++){
			if(n > 1)
				psa[i][j] = psa[i][j-1] + voltas[i][j];
			else 
				psa[i][j] = psa[i][j] + voltas[i][j];
		}
	}
	umap<int,int> mp;
	sort(vp.begin(), vp.end(), comp);
	for(int i = 0; i < 10; ++i){
		mp[vp[i].fi] = vp[i].sc;
	}
	int win = bv.fi;
	for(int i = 1; i < 10; ++i){
		if(vp[i-1].sc == vp[i].sc){
			if(psa[vp[i-1].fi][qf] < psa[vp[i].fi][qf])
				win = vp[i-1].fi;
			else
				win = vp[i].fi;
		}
	}
	if(mp.find(bv.fi) != mp.end())
		cout << win << endl;
	else
		cout << "NENHUM" << endl;
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	solve();
	return (0);
}
