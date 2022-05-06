#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626433832795
#define sqr(a) a*a
#define ll long long
#define ld long double
#define sz(x) ((int)x.size())

typedef pair<int,int> pair_int;

void solve(){
	ll a, b, c, x, y;
	cin >> a >> b >> c >> x >> y;
	x = x - a;
	if(x < 0){x = 0;}
	y = y - b;
	if(y < 0){y = 0;}
	ll tmp = x + y;
	if(tmp - c <= 0)
		cout << "YES\n";
	else
		cout << "NO\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 0;
	cin >> t;
	while(t--){
		solve();
	}
	return (0);
}
