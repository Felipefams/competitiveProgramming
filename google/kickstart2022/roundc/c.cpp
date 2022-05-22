#include <bits/stdc++.h>
using namespace std;
//constants
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define exp 1e9
#define imax INT_MAX
#define imin INT_MIN
//functions
#define sqr(a) (a)*(a)
#define sz(x) ((int)x.size())
#define watch(x) cout << (#x) << " is " << (x) << endl
#define max3(a, b, c) max(a, max(b, c)) 
#define min3(a, b, c) min(a, min(b, c)) 
#define gcd(a,b) __gcd(a,b)
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
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }

typedef struct{
    int id;
    int position;
    int direction;
}Ant;

void changeDirection(Ant k){
    if(k.direction == 0)
        k.direction = 1;
    else if(k.direction == 1)
        k.direction = 0;
}

void solve(){
    int n; cin >> n; //N ants
    int l; cin >> l; //length of the stick
    queue<Ant> q;
    vector<Ant> stick;
    int id = 1;
    while(n--){
        int p; cin >> p;
        int d; cin >> d;
        Ant k; k.direction = d; k.position = p; k.id = id;
        stick[p] = k;
        id++;
    }
    for(int i = 2; i <= l+1; ++i){
        if(stick[i].position == 0 || stick[i].position == l+1){
            q.emplace(stick[i]);
            Ant tmp;
            stick[i] = tmp;
        }
        if(stick[i-1].position == stick[i].position){
            changeDirection(stick[i-1]);
            changeDirection(stick[i]);
        }
        if(stick[i].direction == 0){
            stick[i].position++;
            int k = stick[i].position;
            stick[k] = stick[i];
        }else if(stick[i].direction == 1){
            stick[i].position--;
            int k = stick[i].position;
            stick[k] = stick[i];
        }
    }

}

// cout << "Case #" << t << ": ";
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);// cout.tie(0);
	int t = 0;
	cin >> t;
	for(int i = 1; i <= t; ++i){
        solve();
        //cout << "Case #" << i << ": " << solve() << '\n';
	}
	return (0);
}
