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

// void solve(){
// 	//solution
// }

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n = 0;
	cin >> n;
	ll count = 0;
	vector<int> v;
	for(int i = 0; i < n; ++i){
		int k; cin >> k; v.push_back(k);
	}	
	for(int i = 1; i < n; ++i){
		while(v[i-1] > v[i]){
			v[i]++;
			count++;
		}
	}
	cout << count;
	return (0);
}
