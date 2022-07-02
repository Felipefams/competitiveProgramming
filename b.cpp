//https://codeforces.com/contest/1339/problem/B
#include <bits/stdc++.h>
using namespace std;
//vrum vrum
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
//constants
#define endl "\n"
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define exp 1e9
#define imax INT_MAX
#define imin INT_MIN
//functions
#define sqr(a) (a)*(a)
#define sz(x) ((int)x.size())
#define watch(x) cout << (#x) << " is " << (x) << endl
//utils
#define umap unordered_map
#define uset unordered_set
#define pb push_back
#define mk make_pair
#define fi first
#define sc second
//types
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;
bool prime(ll a) { if (a==1) return 0; for (int i=2;i*i<=a;++i) if (a%i==0) return 0; return 1; }

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	string s;cin >> s;
	int count = 0;
	int n = s.length();
	for(int i = 1; i < n; ++i){
		if(s[i] == s[i-1]){
			count++;
			int p1 = i-1; //erase lower bound
			int p2 = i;//erase upper bound
			if(i > 1 && i < s.length() - 2){
				int back = i - 2;
				int front = i + 1;
				while(s[back] == s[front]){
					count++;
					p1 = back;
					p2 = front;
					back--;
					front++;
					if(back < 1 || front < s.length() - 1) break;
				}
			}
			s.erase(p1, p2);
		}
		watch(count);
		watch(s);
	}	
	if(count % 2 == 0) cout << "No\n";
	else cout << "Yes\n";

	return (0);
}
