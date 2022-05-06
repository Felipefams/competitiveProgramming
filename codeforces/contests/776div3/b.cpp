#include <bits/stdc++.h>
using namespace std; 
#define ll long long

ll solveFormula(ll x, ll a){
	return (x/a + (x % a));
}

ll solve(ll l, ll r, const ll a){
	//a is always > 0
	//there is a way to do without calculating all the values from l to r
	//since you get TLE if you try to do it that way
	ll ans = 0;
	ll array[r-a];
	ll count = 0;
	for(ll i = l; i <= r; ++i){
		if(i > a){
			array[count] = i;
		}
		count++;
	}
	for(ll k = 0; k < count; ++k){
		if(solveFormula(array[k], a) > ans){
			ans = solveFormula(array[k], a);
		}
	}

	return ans;
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t = 0; 
	cin >> t;
	while(t--){
		ll l; //lower bound 
		ll r; //upper bound 
		ll a; //divisor
		cin >> l >> r >> a;
		cout << solve(l,r,a) << "\n";
	}
	return (0);
}
