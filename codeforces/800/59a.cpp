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
	string s; cin >> s;
	int countU = 0;
	int countL = 0;
	for(int i = 0; i < s.length(); ++i){
		if(s[i] >= 'A' && s[i] <= 'Z') countU++;
		else if(s[i] >= 'a' && s[i] <= 'z') countL++;	
	}
	if(countL < countU)
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	else 
		transform(s.begin(), s.end(), s.begin(), ::tolower);

	cout << s << endl;
	return (0);
}
