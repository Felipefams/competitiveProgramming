//https://leetcode.com/problems/median-of-two-sorted-arrays/description/
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

class Solution {
public:
	double findMedianSortedArrays(vector<int>& x, vector<int>& y) {
        int n = x.size() + y.size();
        vector<int> v(n);
        int p1 = 0, p2 = 0;
		int i = 0;
		while(p1 < x.size() && p2 < y.size()){
			if(x[p1] <= y[p2]){
				v[i] = x[p1];
				p1++;
			}else{
				v[i] = y[p2];
				p2++;
			}
			++i;
		}
		if(p1 >= x.size() && p2 < y.size()){
			while(p2 < y.size()){
				v[i] = y[p2++];
				i++;
			}
		}else if(p2 >= y.size() && p1 < x.size()){
			while(p1 < x.size()){
				v[i] = x[p1++];
				i++;
			}
		}
		double ans = 0.0;
		int f = n/2;
		if(n == 2){
			ans = (double)(v[0] + v[1])/2;
		}else if(n == 1){
			ans = (double) v[0]; 
		}else if(n % 2 == 0){
			f = n/2;
			ans = (double)(v[f-1]+v[f])/2;
		}else{
			ans = v[f];
		}
//		for(auto &z : v) cout << z << " ";
		
		cout << endl;
		return ans;
    }
};

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	int s1, s2;cin >> s1 >> s2;
	vector<int> v1(s1); for(int i = 0; i < s1; ++i) cin >> v1[i];
	vector<int> v2(s2); for(int i = 0; i < s2; ++i) cin >> v2[i];
	Solution s;
	cout << s.findMedianSortedArrays(v1,v2);
	
	return (0);
}
