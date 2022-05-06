#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isSorted(ll *array, ll n){
	for(ll i = 1; i < n; i++){
		if(array[i-1] > array[i]){
			return false;
		}
	}
	return (true);
}

bool solve(ll n){
	bool b = true;
	ll array[n];
	for(ll i = 0; i < n; ++i){
		cin >> array[i];
	}
	if(isSorted(array,n)){
		return true;
	}
	for(ll i = 1; i < n; ++i){
		if(array[i-1] > array[i]){
			if((array[i] + array[i-1]) % 2 == 0){
					return false;
			}else{
				swap(array[i-1],array[i]);
				if(isSorted(array,n)){return true;}
			}
		}
	}
	return (b);
}

int main (void){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	ll t = 0; 
	cin >> t;
	while(t--){
		ll n = 0; 
		cin >> n;
		if(solve(n)){
			cout << "\nYES";
		}
		else{cout << "\nNO";}
	}
	return (0);
}

