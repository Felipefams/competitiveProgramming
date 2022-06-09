#include <bits/stdc++.h>
using namespace std;
//constants
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define exp 1e9
#define imax INT_MAX
#define imin INT_MIN
//functions
#define sqr(a) (a)*(a)
#define sz(x) ((int)x.size())
#define watch(x) cout << (#x) << " is " << (x) << endl
#define max3(a, b, c) max(a, max(b, c)) 
#define min3(a, b, c) min(a, min(b, c)) 
//utils
#define umap unordered_map
#define uset unordered_set
#define pb push_back
#define mk make_pair
#define fi first
#define sc second
#define endl "\n"
//types
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;
bool prime(ll a) { if (a==1) return 0; for (int i=2;i*i<=a;++i) if (a%i==0) return 0; return 1; }


int solve(){
	//so pode somar impar e subtrair par
	int a,b;
	cin >> a >> b;
	bool aa = (a%2 == 0)?true:false;
	bool bb = (b%2 == 0)?true:false;
	if(a == b)
		return 0;
	if(a > b && aa == bb)
		return 1;
	if(a < b && aa != bb)
		return 1;
	return 2;	
}

// cout << "Case #" << t << ": ";
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);// cout.tie(0);
	int t = 0;
	cin >> t;
	while(t--){
		cout << solve() << endl;
	}
	return (0);
}
	//tentativa 01
	/*
	bool aa = (a%2 == 0)?true:false;
	bool bb = (b%2 == 0)?true:false;
	if(a == b) return 0;
	if(a < b){
		//se for 1 par e outro impar retorna 1
		if(aa != bb) return 1;
		if(aa == bb) return 2;
	}
	//se forem os dois impares subtrai um par e ta feito
	//se forem os dois pares subtrai um par e soma um impar
	//se for um impar e um par subtrai o par e soma o impar
	if(aa && bb || aa != bb)
		return 2;
	return 1;
	*/
	