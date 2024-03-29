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

ifstream fin ("guess.in");
ofstream fout ("guess.out");	
template <typename T>
set<T> intersection(const set<T>& s1, const set<T>& s2) {
	set<T> ret;
	for (const T& i : s1) {
		if (s2.count(i)) {
			ret.insert(i);
		}
	}
	return ret;
}

int main() {
	int animal_num;
	fin >> animal_num;
	vector<set<string>> animals(animal_num);
	for (int a = 0; a < animal_num; a++) {
		string name;
		int attr_num;
		fin >> name >> attr_num;
		for (int ai = 0; ai < attr_num; ai++) {
			string attr;
			fin >> attr;
			animals[a].insert(attr);
		}
	}

	int max_yes = 0;
	for (int a1 = 0; a1 < animal_num; a1++) {
		for (int a2 = a1 + 1; a2 < animal_num; a2++) {
			/*
			 * If there's 2 animals that have a bunch of traits in common,
			 * Elsie can ask about all those traits.
			 * Then she can ask for the "defining" trait,
			 * resutling in the # of common traits + 1 "yes"es.
			 */
			set<string> common = intersection(animals[a1], animals[a2]);
			max_yes = max(max_yes, (int) common.size() + 1);
		}
	}

	fout << max_yes << endl;
}
//old solution
/*
struct animal{
	string name;
	uset<string> food;
};
//compares by the second element
auto cmp = [](const pair<string,int> &a, const pair<string,int> &b){
	return a.second < b.second;
};


void solve(){
	int n; cin >> n;
	vector<animal> v(n);
	//vector<string> animals(n);
	priority_queue<pair<string,int>, vector<pair<string,int>>, decltype(cmp)> pq(cmp);
	pair<string, int> p;
	map<string,int> mp;
	for(int i = 0; i <n; ++i){
		animal a;
		string name; cin >> name;
		a.name = name;
		int k; cin >> k;
		while(k--){
			string s; cin >> s;
			mp[s]++;
			a.food.insert(s);
		}
		v[i] = a;
	}	
	for(int i = 0; i < n; ++i) cout << v[i].name << " ";
	//cout << ans;
}


// cout << "Case #" << t << ": ";
int main(){fast_io;
	solve();
	return (0);
}*/
