#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626433832795
#define sqr(a) a*a
#define ll long long
#define ld long double
#define sz(x) ((int)x.size())

typedef pair<int,int> pair_int;

/*int solve(){
	int x, y, z;
	cin >> x >> y >> z;
	return x + y + z;
}*/

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 0;
	cin >> t;
	int sX = 0;
	int sY = 0;
	int sZ = 0;
	while(t--){
		int x1, y1, z1; 
		cin >> x1 >>  y1 >> z1;
		sX += x1;
		sY += y1;
		sZ += z1;	
	}	
	printf((sX == 0 && sY == 0 && sZ == 0)?"YES\n":"NO\n");


	return (0);
}
