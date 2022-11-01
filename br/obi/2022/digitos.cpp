#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define watch(x) cout << #x << " = " << x << endl;
#define MOD 1000000007

void nextNumber(string &s){
	int n = s.size();
	for(int i = n-1; i >= 0; --i){
		if(s[i] != '9'){
			int k = s[i] - '0'; k++;
			s[i] = (char) k + '0';
			break;
		}else{
		int j = i;
		while(s[j] == '9'){
			s[j] = '0'; 
			if(j == 0){
				string x = "1";
				x.append(s);
				s = x;
				break;
			}
		}
		}
	}	
}

int main(void){
	cin.tie(NULL);
	cout.tie(NULL);
	/*
	string one = "9989";
	nextNumber(one);
	cout << one << endl;
	*/

	int n; cin >> n;
	int amax = (n % 2 == 0)?(n/2):(n-1)/2;
	int bmax = n - amax;
	vector<char>v(n+1);
	for(int i = 0; i < n; ++i)cin >> v[i];

	int j = amax;
	while(j > 0){
		string s1, s2;
		int x = j;
		for(int i = 0; i < j; ++i, ++x){
			s1.pb(v[i]);
			s2.pb(v[x]);
		}		
		string tmp; tmp += s1;
//		watch(tmp);
		nextNumber(tmp);
		/*
		watch(s1);
		watch(s2);
		watch(tmp);
		*/
		if(s2.size() == s1.size() && s2 != tmp)
			s2.pb(v[x]);
		if(s2 != tmp)j--;
		else{
			cout << s1 << "\n";
			break;
		}
	}
	
	return 0;
}
