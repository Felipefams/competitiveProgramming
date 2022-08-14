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

// cout << "Case #" << t << ": ";
int main(){
	fast_io;	
	int l, r; cin >> l >> r;
//	cout << endl << s[r] - s[l];	
	vector<int> v = {10,20,30,40,50,60};//vetor original
	cout << "V: ";
	for(int i = 0; i < v.size(); ++i) cout << v[i] << " ";	
	cout << endl;
	vector<ll> s(v.size());//vetor com as somas 
	s[0] = v[0];
	for(int i = 1; i < v.size(); ++i){
		s[i] = s[i-1] + v[i];
	}
	cout << "S: ";
	for(int i = 0; i < v.size(); ++i) cout << s[i] << " ";	
	cout << endl;
	return (0);
}




