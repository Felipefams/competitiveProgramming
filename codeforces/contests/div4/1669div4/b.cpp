#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626433832795
#define sqr(a) a*a
#define ll long long
#define ld long double
#define sz(x) ((int)x.size())

typedef pair<int,int> pair_int;

int solve(int k){
    int arr[k];
    for(int i = 0; i < k; i++){
        cin >> arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n);
    for(int i = 2; i < k; i++){ 
        if(arr[i - 1] == arr[i] && arr[i - 2] == arr[i]){
            return arr[i];
        }
    }
    return -1;
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
        cout << solve(k) << '\n';
	}
	return (0);
}
