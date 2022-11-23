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
	for(int i = 0, j = s.size() - 1; i <= j; ++i, --j){
		if(s[i] != s[j]) return false;
	}
	return true;
}

void solve(){
	string s; cin >> s;
	vector<int> mp(26, 0);
	vector<char> vc(s.size());
	vector<char> vc2(s.size());
	for(int i = 0; i < s.size(); ++i){
		mp[s[i] - 'A']++;
	}	
	vector<int> cp = mp;
	int ptr = 0;	
	int p1 = 0;
	int p2 = vc.size() - 1;
	int p3 = 0, p4 = vc.size() - 1;
	for(int i = 0; i < 26; ++i){
		while(mp[i] > 0){
			if(mp[i] % 2 == 0){
				vc[p1++] = 'A' + i;
			}
			else{
				vc[p2--] = 'A' + i;
			}	
			mp[i]--;
		}
	}
	for(int i = 25; i >= 0; --i){
		while(cp[i] > 0){
			if(cp[i] % 2 == 0){
				vc2[p3++] = 'A' + i;
			}
			else{
				vc2[p4--] = 'A' + i;
			}	
			cp[i]--;
		}
	}
	string ans(vc.begin(), vc.end());
	string ans2(vc2.begin(), vc2.end());
	//cout << ptr;
	if(isPalindrome(ans)){
		cout << ans << endl;
	}else{
		if(isPalindrome(ans2))
			cout << ans2 << endl;
		else
			cout << "NO SOLUTION" << endl;
	}
	//cout << vc;
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	solve();
	return (0);
}
