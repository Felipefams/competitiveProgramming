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

void solve(){
	//solution
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	int t = 0;
	cin >> t;
	while(t--){

	}
	return (0);
}


class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<int> turn(dist.size());
        for (int i = 0; i < dist.size(); ++i) {
            turn[i] = ceil((double)dist[i] / speed[i]);
        }
        // sort(turn.begin(), turn.end());
        turn = count_sort(turn);
        for (int i = 0; i < turn.size(); ++i) {
            if (i >= turn[i])
                return i;
        }
        return turn.size();
    }

    vector<int> count_sort(vector<int>& inputArray){
        int N = inputArray.size();
        int M = 0;

        for (int i = 0; i < N; i++)
            M = max(M, inputArray[i]);

        vector<int> countArray(M + 1, 0);

        for (int i = 0; i < N; i++)
            countArray[inputArray[i]]++;
        for (int i = 1; i <= M; i++)
            countArray[i] += countArray[i - 1];

        vector<int> outputArray(N);

        for (int i = N - 1; i >= 0; i--){
            outputArray[countArray[inputArray[i]] - 1]
                = inputArray[i];

            countArray[inputArray[i]]--;
        }
        return outputArray;
    }

};