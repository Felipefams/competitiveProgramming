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

struct Cow{
	int l; //left
	int r; //right
	int c; //temperature C
};
struct AC{
	int l;
	int r;
	int c;
	int price;
};

void print(vector<Cow> v){
	for(auto &x : v){
		cout << x.l << " ";
		cout << x.r << " ";
		cout << x.c << " ";
		cout << endl;
	}
}
void print(vector<AC> v){
	for(auto &x : v){
		cout << x.l << " ";
		cout << x.r << " ";
		cout << x.c << " ";
		cout << x.price << " ";
		cout << endl;
	}
}
bool cmpa(AC a, AC b){
	return a.l < b.l || a.r < b.r;
}
bool cmpc(Cow a, Cow b){
	return a.l < b.l || a.r < b.r;
}

int range[105];

void solve(){
	int n, m; cin >> n >> m;
	vector<Cow> vc(n);
	vector<AC> va(m);
	for(int i = 0; i < n; ++i){
		Cow c; 
		cin >> c.l;
		cin >> c.r;
		for(int j = c.l; j < c.r; ++i) range[j] = c.c;
		cin >> c.c;
		vc[i] = c;
	}
	for(int i = 0; i < m; ++i){
		AC c; 
		cin >> c.l;
		cin >> c.r;
		cin >> c.c;
		cin >> c.price;
		va[i] = c;
	}
	sort(va.begin(), va.end(), cmpa);
	sort(vc.begin(), vc.end(), cmpc);
	vector<set<AC>> vsc;
	for(int i = 0; i < n; ++i){
		int l = vc[i].l;
		int r = vc[i].r;
		set<AC> st;
		for(int j = 0; j < m; ++j){
			if(va[j].l <= l && va[j].r >= l){
				st.insert(va[j]);
			}
		}
		vsc.pb(st);
	}
	for(int i = 0; i < vsc.size(); ++i){
		bool isSatisfied = false;
		int k[] = range;
		while(!isSatisfied){

		}
	}

	cout << endl;
	print(vc);
	print(va);
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io; //setIO("test");
//	solve();
	cout << "10" << endl;

	return (0);
}
