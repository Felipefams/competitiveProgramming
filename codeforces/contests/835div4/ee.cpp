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

ll cnt (vector<int> &a){
    int n = a.size();
    ll ans = 0, x = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] == 0) ans += x; 
        else x++;
    }
    return ans;
}

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    int lt = -1, rt = -1;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        if (v[i] == 0 && lt == -1) lt = i; 
        else if (v[i] == 1) rt = i; 
    }
    ll ans = cnt(v);
    if (lt != -1){
        auto b = v;
        b[lt] = 1;
        ans = max(ans, cnt(b));
    }if (rt != -1){
        auto b = v;
        b[rt] = 0;
        ans = max(ans, cnt(b));
    }
    cout << ans << '\n';
}

int main(){
	fast_io;
    int t; cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
