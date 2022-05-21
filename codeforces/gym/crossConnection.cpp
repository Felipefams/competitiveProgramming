//problem link
//https://codeforces.com/gym/382640/problem/A1
#include <bits/stdc++.h>
using namespace std;
//constants
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define exp 1e9
#define imax INT_MAX
#define imin INT_MIN
//types
#define ll long long
#define ld long double
//functions
#define sqr(a) a*a
#define sz(x) ((int)x.size())
#define watch(x) cout << (#x) << " is " << (x) << endl
#define max3(a, b, c) max(a, max(b, c)) 
#define min3(a, b, c) min(a, min(b, c)) 
//utils
#define vi vector<int>
#define umap unordered_map
#define uset unordered_set
#define pb push_back
#define mk make_pair
#define fi first
#define sc second
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
typedef pair<int,int> pii;

void solve(){
	int n; cin >> n;
	vi a; vi b; 
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}
	for(int i = 0; i < n; ++i){
		cin >> b[i];
	}
	int count = 0;
	for(int i = 0; i < n-1; ++i){
		for(int j = i+1; j < n; ++j){
			bool f1 = false, f2 = false;
			for(int k = 0; k < n; ++k){
				if(b[k] == a[i])
					f1 = true;
				if(b[k] == a[j])
					f2 = true;
				if(f2 && !f1)
					break;
				if(f1 && f2){
					count++;
					break;
				}
			}
		}
	}
	cout << count << '\n';
}

// cout << "Case #" << t << ": ";
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);// cout.tie(0);
	int t = 0;
	cin >> t;
	while(t--){
		solve();
	}
	return (0);
}
