#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626433832795
#define sqr(a) a*a
#define ll long long
#define ld long double
#define sz(x) ((int)x.size())

typedef pair<int,int> pair_int;

double solve(){
    int r, a, b;
    cin >> r >> a >> b;
    double ans = 0.0;
    ans = PI*sqr(r);
    ans += PI*sqr(r*a);
    int radius = 0;
    radius = r * a;
    int count = 0;
    while(radius != 0){
        if(count % 2 == 0){
            radius = floor(radius/b);
            ans += PI*sqr(radius);
        }else if(count % 2 != 0){
            radius *= a; 
            ans += PI*sqr(radius);
        }
        count++;
    }
    return ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 0;
	cin >> t;
    int count = 1;
	while(t--){
        printf("Case #%d: %0.6lf\n", count, solve());
        count++;
	}
	return (0);
}
