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
ifstream fin ("balancing.in");
ofstream fout ("balancing.out");	

void solve(){
	int n, m;
	fin >> n >> m;
	vector<pair<int,int>> vp(n);
	priority_queue<int> xs;
	priority_queue<int> ys;
	pair<int,int> tmp;
	int minx = m, miny = m;
	for(int i = 0; i < n; ++i){
		int x, y; fin >> x >> y;
		tmp.fi = x; tmp.sc = y; 
		vp[i] = tmp;
		minx = min(minx, x);
		miny = min(miny, y);
		xs.push(x);
		ys.push(y);
	}
	int ans = n;
	int pos[4];
	priority_queue ptmp = xs;
	/*
	 * we only check the positions between the positions between
	 * the points. so if we have a point at (3001, 3003), there's
	 * no need to check all the points up to 3003
	 * */
	for(int y = miny - 1; !ys.empty(); y = ys.top() - 1, ys.pop()){
		xs = ptmp;
		for(int x = minx - 1; !xs.empty(); x = xs.top() - 1, xs.pop()){
//			vector<int> pos(4);
			pos[0] = 0, pos[1] = 0, pos[2] = 0, pos[3] = 0;
			for(auto& p : vp){
				if(p.fi < x && p.sc > y) pos[0]++;
				else if(p.fi < x && p.sc < y) pos[2]++;
				else if(p.fi > x && p.sc > y) pos[1]++;
				else pos[3]++;
			}
			ans = min(ans,max({pos[0], pos[1], pos[2], pos[3]}));
		//	pos.clear();
		}	
	}
	fout << ans;
}

// cout << "Case #" << t << ": ";
int main(){fast_io;
	solve();
	return (0);
}
