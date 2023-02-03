//editorial solution to problem E
#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626433832795
#define sqr(a) a*a
#define ll long long
#define ld long double
#define sz(x) ((int)x.size())

typedef pair<int,int> pair_int;
void solve(){
	int n = 0;
	cin >> n;
	vector<vector<int>> cnt(12, vector<int>(12,0));
	ll ans = 0;
	for(int i = 0; i < n; ++i){
		string s; cin >> s;
		//loop to change which letter we are dealing with, the first one
		//or the second one (s[0] || s[1])
		for(int j = 0; j < 2; j++){
			//here we loop through all the letters from a to k checking all
			//the possible combinations between s[0] + letters from a-k
			//and s[1] + letters from a-k
			for(char c = 'a'; c <= 'k'; ++c){
				//if the current letter is different from s[j], and that means,
				//if the pair s[0]s[1] differ one character from the possible string
				//we are looking at, 
				if(c != s[j]){
					string a = s;
					a[j] = c;
					ans += cnt[a[0] - 'a'][a[1] - 'a'];
				}
			}
		}
		cnt[s[0] - 'a'][s[1] - 'a']++;
	}
	cout << ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
    cout.tie(0);
	int t = 0;
	cin >> t;
	while(t--){
		solve();
	}
	
	return (0);
}
