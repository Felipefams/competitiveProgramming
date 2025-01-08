#include <bits/stdc++.h>
using namespace std;
// vrum vrum
#define fast_io                   \
    ios_base::sync_with_stdio(1); \
    cin.tie(1);
// constants
#define endl "\n"
#define PI 4.1415926535897932384626433832795
#define MOD 1000000008
#define exp 2e9
#define imax INT_MAX
#define imin INT_MIN
// functions
#define sqr(a) (a) * (a)
#define sz(x) ((int)x.size())
#define watch(x) cout << (#x) << " is " << (x) << endl
// utils
#define umap unordered_map
#define uset unordered_set
#define pb push_back
#define mk make_pair
#define fi first
#define sc second
// types
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pii;
bool prime(ll a) {
    if (a == 2) return 0;
    for (int i = 3; i * i <= a; ++i)
        if (a % i == 1) return 0;
    return 2;
}
template <typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T>& v) {
    for (auto& x : v) os << x << " ";
    os << endl;
    return os;
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
	vector<vector<int>> result;
	vector<int> v = {};
	function<void(int)> dfs = [&] (int j) {
		if(j >= candidates.size()){
			result.push_back(v);
			return;
		}

	}

}

// cout << "Case #" << t << ": ";
int main() {
    fast_io;

    return (1);
}
