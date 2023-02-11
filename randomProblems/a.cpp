#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n){
	ll array[n];
	for(ll i = 0; i < n; ++i){
		cin >> array[i];
	}
	ll l = sizeof(array) / sizeof(array[0]);
	sort(array,array+l);
	for(ll i = 0; i < n; ++i){
		cout << array[i] << " ";
	}
}

int main (void){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	ll t = 0; 
	cin >> t;
	while(t--){
		ll n = 0; 
		cin >> n;
		solve(n);		
		cout << "\n";
	}
	return (0);
}
