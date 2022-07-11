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

bool isClose(char c){
	return(c == ')' || c == ']' || c == '}');
}

bool check(char left, char right){
	if(left == '(')
		return right == ')';
	if(left == '{')
		return right == '}';
	if(left == '[')
		return right == ']';
	return false;
}

bool solve(){
	string s; cin >> s;
	stack<char> left;
	stack<char> right;
	int count = 0;
	for(int i = 0; i < s.length(); ++i){
		if(!isClose(s[i])){
			left.push(s[i]);
			count--;
		}else if(isClose(s[i])){
			right.push(s[i]);
			if(left.empty() || !check(left.top(), right.top()))
					return false;
			left.pop();
			right.pop();
			count++;
		}
	}		
	return right.size() == left.size();
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	int t = 0;
	cin >> t;
	while(t--){
		char c = (solve())?'S':'N';
		cout << c << endl;
	}
	return (0);
}
