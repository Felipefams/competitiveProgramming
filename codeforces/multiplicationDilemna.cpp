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


string solve(){
	ll a, b; cin >> a >> b;
	int da = 0, db = 0;
	if(a == 0 || b == 0){
		string tmp = to_string(a);
		string x = tmp + " x 1" + " - " + tmp + " x 1";
		return x;
	}
	while(a % 10 != 0){
		a++;
		da++;
	}
	while(b % 10 != 0){
		b++;
		db++;
	}
	string str_a = to_string(a);
	string str_b = to_string(b);
	string str_da = to_string(da);
	string str_db = to_string(db);
	string ans = str_a + " x " + str_b + " - " + ((da > db)?str_da:str_db) + " x " + ((da < db)?str_a:str_b);
	return ans;
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	int t = 0;
	cin >> t;
	while(t--){
		cout << solve() << "\n";
	}
	return (0);
}
