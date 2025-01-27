#include <bits/stdc++.h>
using namespace std;
// vrum vrum
#define fast_io                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
// constants
#define endl "\n"
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define exp 1e9
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
    if (a == 1) return 0;
    for (int i = 2; i * i <= a; ++i)
        if (a % i == 0) return 0;
    return 1;
}
template <typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T>& v) {
    for (auto& x : v) os << x << " ";
    os << endl;
    return os;
}

long long gridGame(vector<vector<int>>& grid) {
    vector<vector<long long>> psm = grid;
    auto psa = psm[0];
    auto ps = psm[1];
    for (int i = 1; i < grid[0].size(); ++i) {
        psa[i] = psa[i - 1] + psa[i];
        ps[i] = ps[i - 1] + ps[i];
    }

    int index_to_zero = -1;
    long long best_sum = 0;
    const int n = psa.size();
    for(int i = 1; i < n; ++i){
        long long calc = psa[n-1] - psa[i-1] + ps[i-1]; 
        if(calc > best_sum){
            best_sum = calc;
            index_to_zero = i;
        }
    }
}

// long long pass_once(vector<vector<int>> &grid){
//     long long sum = grid[0][0];
//     grid[0][0] = 0;
//     int cur_grid = 0;
//     int i = 0;
//     while(i < grid[0].size() + 1){
//         if(cur_grid == 0){

//         }
//     }
// }

// cout << "Case #" << t << ": ";
int main() {
    fast_io;
    int t = 0;
    cin >> t;
    while (t--) {
    }
    return (0);
}
