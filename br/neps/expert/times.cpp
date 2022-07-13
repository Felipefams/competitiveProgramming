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


void solve(){
	//solution
}
bool sortbysec(const pair<int, string> &a,
              const pair<int, string> &b)
{
    return (a.second < b.second);
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	int n, t; cin >> n >> t;
	priority_queue<pair<int, string>> pq;
	for(int i = 0; i < n; ++i){
		string s; int k;
		cin >> s >> k;
		pq.push(mk(k, s));
	}
	vector<vector<pair<int, string>>> vvp(t);
	int i = 0;
	while(!pq.empty()){
		vvp[i].pb(pq.top());
		pq.pop();
		++i;
		i = i % t;
	}
	for(int x = 0; x < t; ++x){
		cout << "Time " << x + 1 << endl;
		sort(vvp[x].begin(), vvp[x].end(), sortbysec);
		for(int y = 0; y < vvp[x].size(); ++y){
			cout << vvp[x][y].sc << endl;
		}
		cout << endl;
	}
	return (0);
}

