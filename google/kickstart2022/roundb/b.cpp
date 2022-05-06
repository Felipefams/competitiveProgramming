#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626433832795
#define sqr(a) a*a
#define ll long long
#define ld long double
#define sz(x) ((int)x.size())

typedef pair<int,int> pair_int;

bool checkPalindrome(const string &c){
    string rev = c;
    reverse(rev.begin(), rev.end());
    return c == rev;
}

int solve(){
    int a; 
    cin >> a;
    int count = 0;
    for(int i = 1; i <= a; i++){
        if(a % i == 0){
            auto s = to_string(i);
            if(i < 10){
                count++;
            }else if(checkPalindrome(s)){
                count++;
            }
        }
    }
    return count;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 0;
	cin >> t;
    int count = 1;
	while(t--){
        printf("Case #%d: %d\n", count, solve());
        count++;
	}
	return (0);
}
