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
template<typename T>
std::ostream & operator << (std::ostream &os ,std::vector<T> &v){
	for(auto& x : v) os << x << " ";	
	os << endl;
	return os;
}

bool isPalindrome(string &s){
	for(int i = 0, j = s.size() - 1; i != j; ++i, --j){
		if(s[i] != s[j]) return false;
	}
	return true;
}

void solve(){
	string s; cin >> s;
	string ans = "";
	vector<int> mp(26, 0);
	//int mp[26];
	sort(mp.begin(), mp.end());
	for(int i = 0; i < s.size(); ++i){
		mp[s[i] - 'A']++;
	}
	int count = 0;
	int ptr = 0;
	for(int i = 0; i < 26; ++i){
const		int k = mp[i];
		if(mp[i] == 1){
	//		count++;
			ptr = i;
			continue;
		}	
		while(mp[i] > k/2){
			ans += 'A'+ i;
			mp[i]--;
		}
	}
	/*
	if(count > 1){
		cout << "NO SOLUTION" << endl;
		return;
	}
	*/
	ans += 'A' + ptr;
	mp[ptr]--;
	for(int i = 25; i >= 0; --i){
		while(mp[i] > 0){
			ans += 'A'+ i;
			mp[i]--;
		}
	}
	/*
	if(isPalindrome(ans)){
		cout << ans << endl;
	}else{
		cout << "NO SOLUTION" << endl;
	}*/
	cout << ans << endl;
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	solve();
	return (0);
}
