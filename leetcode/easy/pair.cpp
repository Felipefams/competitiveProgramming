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

vector<int> twoSum(vector<int>& nums, int target) {
        umap<int, int> mp;
	    int n = nums.size();
	    for(int i = 0; i < n; ++i){
	        mp[nums[i]] = i;
	    }
	    vector<int> ans(2);
	    for(int i = 0; i < n; ++i){
	    	int k = target - nums[i];
	    	if(mp.count(k) != 0 && mp[k] != i){
	    		ans[0] = i;
	    		ans[1] = mp[k];
	    		break;
	    	}
	    }
        for(int i = nums.size() - 1; i >= 0; --i){
	    	int k = target - nums[i];
	    	if(mp.count(k) != 0 && mp[k] != i){
	    		ans[0] = i;
	    		ans[1] = mp[k];
	    		break;
	    	}
	    }
	    return ans;
    }

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	
	return (0);
}
