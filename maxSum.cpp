#include <bits/stdc++.h>
using namespace std;
//vrum vrum
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
//types
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;
//constants
#define endl "\n"
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define exp 1e9
#define imax INT_MAX
#define imin INT_MIN
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
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
bool prime(ll a) { if (a==1) return 0; for (int i=2;i*i<=a;++i) if (a%i==0) return 0; return 1; }


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
/*
 * #include <iostream>
using namespace std;

const int MAXN = 1000010;
const int INF = 1000000010;

int main()
{
    int n;
    int v[MAXN], dp[MAXN], opt[MAXN]; // opt[i] = índice mais a direita menor ou igual a i tal que s( opt(i) , i ) = dp(i)

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    dp[0] = v[0];
    opt[0] = 0;

    for (int i = 1; i < n; i++)
    {
        // Calculando opt[i]
        if (v[i] >= dp[i - 1] + v[i])
            opt[i] = i;
        else
            opt[i] = opt[i - 1];

        dp[i] = max(v[i], dp[i - 1] + v[i]);
    }

    int answer = -INF;
    int indexMaxDp = 0;

    for (int i = 0; i < n; i++)
    {
        if (dp[i] > answer)
        {
            answer = dp[i]; // Pegando a maior dp
            indexMaxDp = i; // Pegando o índice da maior dp
        }
    }

    cout << "Soma: " << answer;
    cout << "Intervalo: " << opt[indexMaxDp] << ", " << indexMaxDp;
}
*/
/* binarySearch.cpp
 * int binarySearch(vector<ll> &arr, ll i){
	int l = 0, r = arr.size()-1;
	while(l <= r){
		int mid = l + (r - l) / 2;
		if(arr[mid] == i)
			return mid;
		else if(arr[mid] > i)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return -1;
}*/
