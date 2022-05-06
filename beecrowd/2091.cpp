#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626433832795
#define sqr(a) a*a
#define ll long long
#define ld long double
#define sz(x) ((int)x.size())

typedef pair<int,int> pair_int;

int solve(int l){
	int array[l];
	int ans = array[0];
	for(int i = 1; i < l; ++i){
		cin >> array[i]; 
		ans = ans ^ array[i];
	}
	return ans;
}

int main(void){
	ios_base::sync_with_stdio(0);
	//5 in binary ==0000 0101
	//9 in binary ==0000 1001
	//5 ^ 9 == 0000 1100 == 12
	cin.tie(0);
	bool b = true;
	while(b){
		int l = 0;
		cin >> l;
		if(l == 0){b = false; break;}
		cout << solve(l) << '\n';
	}
	return (0);
}
