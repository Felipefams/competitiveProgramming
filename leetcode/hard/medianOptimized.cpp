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
	double nE2or1(vector<int>&x, vector<int>&y){
		double ans = 0;
		for(auto &e : x) ans += e;	
		for(auto &e : y) ans += e;

		return ans;	
	}
	double even(vector<int>&x, vector<int>&y, int f){
		int p1 = 0, p2 = 0;
		double ans = 0.0;
		for(int i = 0; i < f + 2; ++i){	
			if(p2 >= y.size() && p1 < x.size()){
				if(i == f-1 || i == f){
					ans += x[p1];
				}
				p1++;		
			}else if(p1 >= x.size() && p2 < y.size()){
				if(i == f-1 || i == f){
					ans += y[p2];
				}
				p2++;
			}else{
				if(x[p1] <= y[p2]){
					if(i == f-1 || i == f){
						ans += x[p1];
					}
					p1++;
				}else{
					if(i == f-1 || i == f){
						ans += y[p2];
					}
					p2++;
				}
			}
		}
		return ans/2;
	}
	double odd(vector<int>&x, vector<int>&y, int f){
		int p1 = 0, p2 = 0;
		double ans = 0.0;
		for(int i = 0; i < f+2; ++i){	
			if(p2 >= y.size() && p1 < x.size()){
				if(i == f){
//					ans += 
						return x[p1];
				}
				p1++;		
			}else if(p1 >= x.size() && p2 < y.size()){
				if(i == f){
//					ans +=
						return y[p2];
				}
				p2++;
			}else{
				if(x[p1] <= y[p2]){
					if(i == f){
//						ans +=
							return x[p1];
					}
					p1++;
				}else{
					if(i == f){
//						ans += 
							return y[p2];
					}
					p2++;
				}
			}
		}
		return ans;
	}
	double findMedianSortedArrays(vector<int>& x, vector<int>& y) {
        int n = x.size() + y.size();
        int p1 = 0, p2 = 0;
		double ans = 0.0;
		int f = n/2;
		if(n < 3){ 
			ans = nE2or1(x, y);
			if(n == 2) ans /= 2;
		}
		else if(n % 2 == 0) ans = even(x, y, f);
		else ans = odd(x, y, f);
//		for(auto &z : v) cout << z << " ";	
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
