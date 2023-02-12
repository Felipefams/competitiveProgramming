#include <iostream>
#include <iomanip>
using namespace std;
void prefixSum(int arr[3][3], int n);
void print(int arr[3][3], int n);
int main()
{
	int n = 3;
	int arr[3][3] = {{10,20,30},
					{5, 10, 20},
					{2, 4, 6}
					};
	prefixSum(arr, n);
	print(arr, n);

}
void prefixSum(int arr[3][3], int n) {
	//vertical prefixsum
	for (int j = 0; j < n; j++) {
		for (int i = 1; i < n; i++) {
			arr[i][j] += arr[i-1][j];
		}
	}
	//horizontal prefixsum
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n; j++) {
			arr[i][j] += arr[i][j-1];
		}
	}
}


void print(int arr[3][3], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(3) << left << arr[i][j] << " ";
		}
		cout << '\n';
	}
}

