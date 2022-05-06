#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626433832795
#define sqr(a) a*a
#define ll long long
#define ld long double
#define sz(x) ((int)x.size())

typedef pair<int,int> pair_int;
//se tiver um numero impar de B's ou R's e em seguida um W, nao vai dar pra pllar, a menos que o W esteja na ultima posicao;
int solve(int k){
    pair<char,char> plist[k];
    char c1;
    char c2;
    for(int i = 0; i < k; i++){
        cin >> c1 >> c2;
        pair<char,char> tmp;
        tmp.first = c1;
        tmp.second = c2; 
        plist[i] = tmp;
    }
    int diff = 0;
    for(int i = 0; i < k-1; i++){
        for(int j = i + 1; j < k; j++){
            if(plist[i].first != plist[j].first ^ plist[i].second != plist[j].second)
                diff++;
        }
    }
    return diff;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
    cout.tie(0);
	int t = 0;
	cin >> t;
	while(t--){
        int n = 0;
        cin >> n; 
        cout << solve(n) << '\n';
	}
	return (0);
}
