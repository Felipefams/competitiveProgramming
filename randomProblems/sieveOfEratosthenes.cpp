#include <bits/stdc++.h>
#define ll long long
#define sqr(a) a*a
using namespace std;

vector<bool> sieve(int n){
	vector<bool> arr(n+2, true);
	for(int i = 2; i < sqrt(n); i++)
		if(arr[i])
			for(int j = sqr(i); j < n; j += i)
				arr[j] = false;
	return arr;
}

int main (void){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	vector<bool>tmp = sieve(1000);
	for(int i = 2; i < tmp.size(); ++i)
		if(tmp[i])
			cout << i << "\n";
	return (0);
}

