//https://www.beecrowd.com.br/judge/en/problems/view/2463?origem=1
#include <bits/stdc++.h>
using namespace std;
//vrum vrum
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
//types
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;
//constants
#define endl "\n"
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define exp 1e9
#define imax INT_MAX
#define imin INT_MIN
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
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
bool prime(ll a) { if (a==1) return 0; for (int i=2;i*i<=a;++i) if (a%i==0) return 0; return 1; }

// cout << "Case #" << t << ": ";
int main(){
	fast_io;	
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; ++i) cin >> v[i];
	//solucao com kadane
	int ans = imin, soma_at = imin;
	for(int i = 0; i < n; ++i){
		//muito inteligente isso daqui, com prefix sum da mais trabalho
		if(soma_at < 0) soma_at = v[i];
		else soma_at += v[i];
		ans = max(ans, soma_at);
	}
	cout << ans << endl;
	/* solucao com soma de prefixo
	 * (ta errado, tenho que olhar direito)
	vector<int> s(n);
	for(int i = 1; i < n; ++i) s[i] = v[i] + v[i-1];
	int maior = imin;
	for(int i = 0; i < n; ++i){
		if(s[i] > maior){
			maior = s[i];
		}
	}
	cout << maior << endl;
	*/
	return (0);
}
