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
	//O(N) solution
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string s; cin >> s;
	ll gt = 1;  //greatest substring length();
	int count = 1;
	for(int i = 1; i < s.length(); ++i){
		if(s[i-1] != s[i]) count = 1;
		else count++;
		if(count > gt) gt = count;
	}
	cout << gt;
	return (0);
}
