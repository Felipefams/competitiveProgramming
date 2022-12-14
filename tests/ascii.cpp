#include <bits/stdc++.h>
using namespace std;
const int MOD = 927;

int myHash(string &s){
	int ans = 0;
	for(int i = 0; i < s.size(); ++i){
		ans += (int) s[i] % MOD;
	}
	return ans % MOD;
}

int main(void){
	vector<int> v;
	string p; getline(cin, p);
	string s; getline(cin, s); 
	const int ph = myHash(p);
	cout << "myHash de P: " << myHash(p) << endl;
	for(int i = 0; i < s.size(); ++i){
		string tmp = "";
		for(int j = i; j < i+p.size() && j < s.size(); ++j) tmp.push_back(s[j]);		
		cout << tmp << endl;
		v.push_back(myHash(tmp));
	}
	cout << "myHash do padrao todo: " << endl;
	for(auto &x : v){
		cout << x << "|";
	}
	cout << endl;
	return 0;
}
