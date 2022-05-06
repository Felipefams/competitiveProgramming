#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626433832795
#define sqr(a) a*a
#define ll long long
#define ld long double
#define sz(x) ((int)x.size())

typedef pair<int,int> pair_int;

string solve(int k){
    if(k >= 1900)
        return "Division 1";
    else if(k >= 1600 && k <= 1899)
        return "Division 2";
    else if(k >= 1400 && k <= 1599)
        return "Division 3";

    return "Division 4";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
    cout.tie(0);
	int t = 0;
	cin >> t;
	while(t--){
        int k = 0;
        cin >> k;
        cout << solve(k) << "\n";
	}
	return (0);
}
