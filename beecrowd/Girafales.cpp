#include <bits/stdc++.h>
using namespace std;

bool solve(string &s1, string &s2){
    int count = 0;
    for(int i = 0; i < s1.length(); ++i){
        if(s1[i] != s2[i]){
            count++;
        }
        if(count > 1){
            return false;
        }
    }
    return true;
}

int main(void){
    while(true){
        int t = 0;
        cin >> t;
        if(t == 0){
            break;
        }
        int count = 0;
        while(t--){
            string s1;
            string s2;
            cin >> s1;
            cin >> s2;
            if(!solve(s1,s2))
                count++;
        }
        if(count > 0)
            cout << count << '\n';
    }
    return (0);
}