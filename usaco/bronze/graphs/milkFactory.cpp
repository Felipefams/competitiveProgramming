#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("factory.in", "r", stdin);
	freopen("factory.out", "w", stdout);

	int N;
	cin >> N;
	vector<int> outgoing(N);
	// N - 1 walkways
	for (int i = 0; i < N - 1; i++) {
		int a, b;
		cin >> a >> b;
		// count the outdegree of this station (zero-index)
		outgoing[a - 1]++;

	}

	int ans = -1;
	for (int i = 0; i < N; i++) {
		// only stations with outdegree 0 could be the sink
		if (outgoing[i] == 0) {
			if (ans == -1) {
				// found the sink
				ans = i + 1;
			} else {
				// found two sinks so it is impossible to get from one to another
				ans = -1;
				break;
			}
		}
	}

	cout << ans << endl;
}
