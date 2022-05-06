#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626433832795
#define sqr(a) a*a
#define ll long long
#define ld long double
#define sz(x) ((int)x.size())

typedef pair<int,int> pair_int;

bool solve(int k){
    const int length = k+1;
    int arr[length];
    bool x = true;
    for(int i = 1; i < length; i++){
        cin >> arr[i];
    }
    int cacheEven = arr[2];
    int cacheOdd = arr[1];
    for(int i = 1; i < length; i++){
        if(i % 2 == 0){
            x = (arr[i] % 2 == cacheEven % 2)?true:false;
            if(!x)
            break;
        }else if(i % 2 != 0){
            x = (arr[i] % 2 == cacheOdd % 2)?true:false;
            if(!x)
            break;
        }
    }
    return x;
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
        bool b = solve(k);
        if(b)
        cout << "YES\n";
        else if(!b)
        cout << "NO\n";
	}
	return (0);
}
