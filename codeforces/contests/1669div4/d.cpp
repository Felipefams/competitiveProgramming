#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626433832795
#define sqr(a) a*a
#define ll long long
#define ld long double
#define sz(x) ((int)x.size())

typedef pair<int,int> pair_int;
//se tiver um numero impar de B's ou R's e em seguida um W, nao vai dar pra pintar, a menos que o W esteja na ultima posicao;
bool solve(int k){
    char s[k];
    int w = 0;
    int r = 0;
    int b = 0;
    for(int i = 0; i < k; i++){
        cin >> s[i];
        if(s[i] == 'B')
            b++;
        else if(s[i] == 'R')
            r++;
        else
            w++;
    }
    if(k == 1)
        return false; 
    else if(r == k || b == k)
        return false; 
    else if(w == k)
        return true; 
    else if(k % 2 == 0 && w == k/2)
        return false;

    for(int i = 2; i < k; i += 2){ 
        if(s[i-1] == 'W' ^ s[i-2] == 'W'){
            return false;
        }
    }
    return true;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
    cout.tie(0);
	int t = 0;
	cin >> t;
	while(t--){
        int k = 0;
        cin >> k;
        bool b = solve(k);
        if(b)
            cout << "YES\n";
        else
            cout << "NO\n";
	}
	return (0);
}
