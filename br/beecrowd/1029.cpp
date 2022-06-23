#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626433832795
#define sqr(a) a*a
#define ll long long
#define ld long double
#define sz(x) ((int)x.size())

typedef pair<int,int> pair_int;

int tracker = 0;

int fib(int n){
	if(n == 0 || n == 1){
		tracker = tracker + 1;
		return n;
	}
	tracker = tracker + 1;
	return fib(n-1) + fib(n-2);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 0;
	cin >> t;
	while(t--){
		int n = 0; 
		tracker = 0;
		cin >> n;
		int ans = fib(n);
		printf("fib(%d) = %d calls = %d\n", n, tracker - 1, ans);
	}
	return (0);
}


