/*
ID: augusto15
TASK: test
LANG: C++                 
*/
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
// FastIO: see General -> Fast Input and Output
void setIO(string name = ""){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	if (!name.empty()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}
//ifstream fin ("test.in");
//ofstream fout ("test.out");	
void LPSArray(string pattern, int M, int* lps);

int KMPSearch(string pattern, string txt){
	int M = pattern.size(); //strlen(pattern);
	int N = txt.size(); //strlen(txt);
	int lps[M];

	LPSArray(pattern, M, lps);

	int i = 0; 
	int j = 0; 
	while ((N - i) >= (M - j)) {
		if (pattern[j] == txt[i]) {
			j++;
			i++;
		}

		if (j == M) {
			return i - j;
			j = lps[j - 1];
		}

		else if (i < N && pattern[j] != txt[i]) {
			if (j != 0)
				j = lps[j - 1];
			else
				i = i + 1;
		}
	}
	return -1;
}

void LPSArray(string pattern, int M, int* lps){
	int len = 0;
	lps[0] = 0; 
	int i = 1;
	while (i < M) {
		if (pattern[i] == pattern[len]) {
			len++;
			lps[i] = len;
			i++;
		}else {	
			if (len != 0) {
				len = lps[len - 1];
			}else{
				lps[i] = 0;
				i++;
			}
		}
	}
}

int solve(){
	const string moo = "MOO";
	const string mom = "MOM";
	const string oom = "OOM";
	const string ooo = "OOO";
	string pattern; cin >> pattern;
	int k = KMPSearch(moo, pattern);
	int c = KMPSearch(mom, pattern);
	int a = KMPSearch(oom, pattern);
	int b = KMPSearch(ooo, pattern);
	int ans = -1;
	if(k != -1){
		ans = pattern.size() - 3; 
	}else if(c != -1 || b != -1){
		ans = pattern.size() - 2;
	}else if(a != -1){
		ans = pattern.size() - 1;
	}
	return ans;
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io; //setIO("test");
	int t; cin >> t;
	while(t--)
	cout << solve() << endl;
	return (0);
}
