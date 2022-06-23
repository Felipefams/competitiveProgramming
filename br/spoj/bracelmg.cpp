//https://br.spoj.com/problems/BRACELMG/
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


bool solve(){
	//nesse inicio bizarro aqui, o que a gente ta fazendo eh 
	//basicamente garantindo que de pra ler a string ao contrario
	//e que nao tenha problema na hora
	string a; cin >> a;
	string b; cin >> b;
	//vai ficar uma string duplicada, entao a string "av" vai virar "avav"
	string s = b; s.append(b);
	string c = b; //string ao contrario
	for(int i = b.size() - 1, j = 0; i >= 0; --i){
		c[j] = b[i];
		j++;
	}	
	c.append(c);
	for(int i = 0; i < s.size(); ++i){
		if(s[i] == a[0] || c[i] == a[0]){
			int count = i;
			bool c1 = true;
			bool c2 = true;
			for(int j = 0; j < a.size(); ++j, ++count){
				if(s[count] != a[j]) c1 = false;
				if(c[count] != a[j]) c2 = false;	
				if(!c1 && !c2) break;
			}
			if(c1 || c2) return true;
		}
	}
	return false;
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	int t = 0;
	cin >> t;
	while(t--){
		if(solve()) cout << "S" << endl;
		else cout << "N" << endl;
	}
	return (0);
}
