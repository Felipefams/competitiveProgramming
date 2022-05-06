#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool contains(string s, char c){
	for(int i = 0; i < s.length(); i++){
		if(s[i] == c){
			return true;
		}
	}
	return false;
}

bool solve(string s, char c){
	if(!contains(s,c)){
		return false;
	}
	if(s.length() > 1){
		for(int i = 0; i < s.length(); i++){
			if(i % 2 == 0){
				if(s[i] == c){
					return true;
				}
			}
		}
		return false; 
	}
	return true;;
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n = 0; 
	cin >> n;
	while(n--){
		string s;
		char c;
		cin >> s >> c;
		if(solve(s,c)){cout<<"YES\n";}
		else{cout<<"NO\n";}
	}
	return (0);
}
