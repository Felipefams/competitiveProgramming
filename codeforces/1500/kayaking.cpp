#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	N *= 2;

	vector<int> people(N);
	for (int& p : people) {
		cin >> p;
	}
	sort(people.begin(), people.end());

	int min_instability = INT32_MAX;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			vector<int> new_people;
			for (int p = 0; p < N; p++) {
				if (p != i && p != j) {
					new_people.push_back(people[p]);
				}
			}

			int total_instability = 0;
			for (int p = 0; p < N - 2; p += 2) {
				total_instability += new_people[p + 1] - new_people[p];
			}
			min_instability = min(min_instability, total_instability);
		}
	}
	cout << min_instability << endl;
	return 0;
}
