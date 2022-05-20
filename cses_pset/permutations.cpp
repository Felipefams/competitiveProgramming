#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626433832795
#define sqr(a) a*a
#define pb push_back
#define eb emplace_back
#define ll long long
#define ld long double
#define sz(x) ((int)x.size())
#define watch(x) cout << (#x) << " is " << (x) << endl
#define max3(a, b, c) max(a, max(b, c)) 
#define min3(a, b, c) min(a, min(b, c)) 

typedef pair<int,int> pair_int;

void solve(){
	ll n; cin >> n;
	if(n < 5){
		if(n == 1)
			cout << 1; 
		else if(n == 4)
			cout << "2 4 1 3";
		else
		cout << "NO SOLUTION";
	}else{
		vector<ll> even(n/2 + 1);
		vector<ll> odd(n/2 + 1);
		for(ll i = 1; i <= n; ++i){
			if(i & 1) odd.eb(i);
			else even.eb(i);
		}
		for(auto &x : even){
			if(x != 0)
				cout << x << " ";
		}
		for(auto &x : odd){
			if(x != 0)
				cout << x << " ";
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	solve();
	return (0);
}
