#include <bits/stdc++.h>
using namespace std;
//vrum vrum
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
//constants
#define endl "\n"
#define imax INT_MAX
#define imin INT_MIN
//functions
#define watch(x) cout << (#x) << " is " << (x) << endl
//utils
#define umap unordered_map
#define uset unordered_set
#define pb push_back
#define mk make_pair
#define fi first
#define sc second

long m;//tamanho do array

/*
 * insertionSort pra um intervalo [b,e];
 * */
void insertionSort(vector<int> &arr, int b, int e){
	int i, key, j;
	for (i = b; i < e; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int partition(vector<int> &arr, int start, int end){ 
    int pivot = arr[start]; 
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    } 
    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]); 
    // Sorting left and right parts of the pivot element
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex) { 
		while (arr[i] <= pivot){
			i++;
		} 
		while (arr[j] > pivot){
			j--;
		}   
        if (i < pivotIndex && j > pivotIndex) swap(arr[i++], arr[j--]);     
    }
 
    return pivotIndex;
}
 
void m_quickSort(vector<int> &arr, int start, int end){
    // base case
    if (start >= end) return;
    // partitioning the array
    int p = partition(arr, start, end);	
	if(p <= m){
		insertionSort(arr, start, end);
	}else{
   		// Sorting the left part
	    m_quickSort(arr, start, p - 1);
	    // Sorting the right part
   		m_quickSort(arr, p + 1, end);	
	}
}

void quickSort(vector<int> &arr, int start, int end){ 
    if (start >= end) return;
    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

// cout << "Case #" << t << ": ";
int main(){
//	fast_io;	
	srand (time(NULL));
	//como 1000 <= n <= 10e5, pode ser int
	cout << "insira o valor de m: ";
	cin >> m; cout << endl;
	cout << "insira o tamanho do vetor:";
	int n; cin >> n; 
	cout << endl;
	vector<int> v1(n);
	vector<int> v2(n);
	//randomiza o vetor
	for(int i = 0; i < n; ++i){
		int k = rand() % m;
		v1[i] = k;
		v2[i] = k;
	}
	auto start = chrono::steady_clock::now();
	m_quickSort(v1, 0, n);//quickSort modificado
	auto end = chrono::steady_clock::now();
	auto diff = end - start;
	cout << "quickSort modificado: "<< chrono::duration <double, milli> (diff).count() << " ms" << endl;
	
	auto start2 = chrono::steady_clock::now();
	quickSort(v2, 0, n);//quickSort modificado
	auto end2 = chrono::steady_clock::now();
	auto diff2 = end2 - start2;
	cout << "quickSort normal: "<< chrono::duration <double, milli> (diff2).count() << " ms" << endl;

//	for(auto &x : v) cout << x << " ";
	return (0);
}

