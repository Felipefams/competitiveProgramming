#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626433832795
#define sqr(a) a*a
#define ll long long
#define ld long double
#define sz(x) ((int)x.size())
#define watch(x) cout << (#x) << " is " << (x) << endl
#define max3(a, b, c) max(a, max(b, c)) 
#define min3(a, b, c) min(a, min(b, c)) 
#define int long long 
typedef pair<int,int> pair_int;

vector<int> cache;
int solve(int x){
	if(x < 2)
		return 1;
	if(x == 2)
		return 2;
	if(cache.size() >= x)
		return x * cache[x];
	return x * solve(x-1);
}

int solve_i(int x){
//	if(x == 0)
//		return 1;
	int ans = 1;
	for(int i = x; i > 0; --i){
		ans *= i;
	}
	return ans;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 0;
	cin >> t;
	//cout << solve(t) << "\n";
	cout << solve_i(t) << "\n";
	return (0);
}
