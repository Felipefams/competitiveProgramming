#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626433832795
#define sqr(a) a*a
#define ll long long
#define ld long double
#define sz(x) ((int)x.size())
#define watch(x) cout << (#x) << " is " << (x) << endl
#define max3(a, b, c) max(a, max(b, c)) 
#define min3(a, b, c) min(a, min(b, c)) 

typedef pair<int,int> pair_int;

void solve(){
	cout << "looooser\n";
}

//falta terminar
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 0;
	cin >> t;
	vector<int> arr;
	list<int> l;
	int count = 0;
	while(t--){
		char c; cin >> c;
		string s; cin >> s;
		const int svalue = stoi(s);
		if(c == 'E')
			cout << svalue << " " << arr[svalue] << '\n';	
		else if(c == 'T')
			count += svalue;
		count++;

	}

	return (0);
}
