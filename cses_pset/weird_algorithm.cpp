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

typedef pair<int,int> pair_int;

void solve(){
	//solution
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll t = 0;
	cin >> t;
	cout << t << ' ';
	while(t != 1){
		if(t % 2 == 0)
			t /= 2;
		else
			t = 3*t + 1;
		cout << t << " ";
	}
	return (0);
}
