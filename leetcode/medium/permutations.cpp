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

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;

    function<void(int, vector<int>&)> solve = [&](int i, vector<int>& v) {
        if (i == nums.size()) {
            ans.push_back(v);
            return;
        }

        for (int j = i; j < nums.size(); j++) {
            if (j != i && nums[j] == nums[i]) continue;
            swap(v[i], v[j]);
            solve(i + 1, v);
            swap(v[i], v[j]);
        }
    };
    vector<int> v = nums;

    solve(0, v);
    return ans;
}

// cout << "Case #" << t << ": ";
int main() {
    fast_io;
    vector<int> nums = {2, 3, 6, 7};
    int target = 7;
    auto ans = combinationSum(nums, target);
    cout << "[";
    for (int i = 0; i < ans.size(); ++i) {
        cout << "[";
        for (int j = 0; j < ans[i].size(); ++j) {
            cout << ans[i][j];
            if (j < ans[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < ans.size() - 1) cout << ",";
    }
    cout << "]";

    return (0);
}
