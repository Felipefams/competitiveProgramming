#include <bits/stdc++.h>
using namespace std;
//vrum vrum
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);

template<typename T>
std::ostream & operator << (std::ostream &os ,std::vector<T> &v){
	for(auto& x : v) os << x << " ";	
	os << endl;
	return os;
}
void setIO(string name = ""){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	if (!name.empty()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

vector<vector<double>> values(4, vector<double>(12));

vector<double> mean(){
	vector<double> ans(4);
	for(int i = 0; i < 4; ++i){
		double m = 0;
		for(int j = 0; j < 12; ++j){
			m += values[i][j];
		}
		ans[i] = m / 12;
	}
	return ans;
}
vector<double> median(){
	vector<double> ans(4);
	for(int i = 0; i < 4; ++i){
		sort(values[i].begin(), values[i].end());
		ans[i] = ((values[i][6] + values[i][5])/2);
	}
	return ans;
}
vector<double> mode(){
	vector<double> ans(4);
	for(int i = 0; i < 4; ++i){
		double max = 0;
		double maxval = 0;
		for(int j = 0; j < 12; ++j){
			int count = 0;
			for(int k = 0; k < 12; ++k){
				if(values[i][j] == values[i][k]){
					count++;
				}
			}
			if(count > max){
				max = count;
				maxval = values[i][j];
			}
		}
		ans[i] = maxval;
	}
	return ans;
}

vector<double> amplitude(){
	vector<double> ans(4);
	for(int i = 0; i < 4; ++i){
		sort(values[i].begin(), values[i].end());
		ans[i] = values[i][11] - values[i][0];
	}
	return ans;
}

vector<double> variance(){
	vector<double> ans(4);
	for(int i = 0; i < 4; ++i){
		double m = 0;
		for(int j = 0; j < 12; ++j){
			m += values[i][j];
		}
		m /= 12;
		double var = 0;
		for(int j = 0; j < 12; ++j){
			var += pow(values[i][j] - m, 2);
		}
		var /= 12;
		ans[i] = var;
	}
	return ans;
}

vector<double> standardDeviation(){
	vector<double> ans(4);
	for(int i = 0; i < 4; ++i){
		double m = 0.0;
		for(int j = 0; j < 12; ++j){
			m += values[i][j];
		}
		m /= 12;
		double var = 0;
		for(int j = 0; j < 12; ++j){
			var += pow(values[i][j] - m, 2);
		}
		var /= 12;
		ans[i] = sqrt(var);
	}
	return ans;
}

vector<double> cv(){
	vector<double> ans(4);
	for(int i = 0; i < 4; ++i){
		int m = 0;
		for(int j = 0; j < 12; ++j){
			m += values[i][j];
		}
		m /= 12;
		double var = 0;
		for(int j = 0; j < 12; ++j){
			var += sqrt(values[i][j] - m);
		}
		var /= 12;
		ans[i] = sqrt(var) / m;
	}
	return ans;
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	setIO("table");
	for(int i = 0; i < 4; ++i){
		for(int j = 0; j < 12; ++j){
			cin >> values[i][j];
		}
	}

	vector<vector<double>> ans;
	ans.push_back(mean());
	ans.push_back(median());
	ans.push_back(mode());
	ans.push_back(amplitude());
	ans.push_back(variance());
	ans.push_back(standardDeviation());
	ans.push_back(cv());

	for(int i = 0; i < 7; ++i){
		switch(i){
			case 0:
				cout << "Mean ";
				break;
			case 1:
				cout << "Median ";
				break;
			case 2:
				cout << "Mode ";
				break;
			case 3:
				cout << "Amplitude ";
				break;
			case 4:
				cout << "Variance ";
				break;
			case 5:
				cout << "Standard Deviation ";
				break;
			case 6:
				cout << "Coefficient of Variation ";
				break;
			}
		for(int j = 0; j < 4; ++j){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}

	return (0);
}
