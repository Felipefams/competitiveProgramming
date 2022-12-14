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

bool isEqual(vector<int> &v, int offset){
	for(int i = offset + 1; i < v.size(); ++i)
		if(v[i] != v[i-1]) 
			return false;
	return true;
}

// it works, but not for this problem
// here we can only operate over values who are side by side
void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; ++i) cin >> v[i];	
	sort(v.begin(), v.end());
	const int gt = v[n-1];
	/*
	int mm = v[0]; */
	int i = 0, j = n-1;
	int ans = 0;
	while(i != j){
//		cout << v;
		if(v[j] + v[i] <= gt){
			v[j] += v[i];
			v[i] = 0;
			if(isEqual(v, i)) break;
			ans++; i++;	
		}else j--;	
	}
	if(!isEqual(v, i)) ans += (n-1) - i;

	cout << ans << endl;
}

// cout << "Case #" << t << ": ";
int main(){fast_io;
	int t; cin >> t;
	while(t--){
		solve();
	}
	return (0);
}
