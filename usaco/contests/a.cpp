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

const int N = 100005;
int psg[N];
int psh[N];

template<typename T>
void print(T v[], int len){
	for(int i = 1; i <= len; ++i){
		cout << v[i] << " ";
	}
	cout << endl;
}

void solve(){
	int n; cin >> n;	
	char s[n+1]; 		for(int i = 1; i <= n; ++i) cin >> s[i];
	vector<int> v(n+1); for(int i = 1; i <= n; ++i) cin >> v[i];
	for(int i = 1; i <= n; ++i){
		if(s[i] == 'G'){
			psg[i] = psg[i-1] + 1;
			psh[i] = psh[i-1];
		}else{
			psh[i] = psh[i-1] + 1;
			psg[i] = psg[i-1];
		}
	}
	int allG = psg[n];
	int allH = psh[n];
	int ans = 0;
	for(int i = 1; i <= n; ++i){
		if(s[i] == 'G'){
			if(psg[v[i]] - psg[i-1] == allG){
//				cout << i << " aqui" << endl;
				int j = i - 1;
				while(j >= 1){
					if(v[j] >= i && s[j] != s[i]) ans++;
					j--;
				}
				j = i+1;
				while(j <= n){
					if(s[j] == 'H' && psh[v[j]] - psh[j-1] == allH) ans++;
					j++;
				}
			}
		}else{
			if(psh[v[i]] - psh[i-1] == allH){
//				cout << i << " aqui" << endl;
				int j = i - 1;
				while(j >= 1){
					if(v[j] >= i && s[j] != s[i]) ans++;
					j--;
				}
				j = i+1;
				while(j <= n){
					if(s[j] == 'G' && psg[v[j]] - psg[j-1] == allG) ans++;
					j++;
				}
			}		
		}
	}
//	print(psg, n);
//	print(psh, n);
	cout << ans << endl;
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;//	setIO("test");
	solve();

	return (0);
}
