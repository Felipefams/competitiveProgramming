#include <stdio.h>
#include <stdlib.h>

int r_binarySearch(int *arr, int left, int right, int value){
	int mid = left + (right - left)/2;
	if(arr[mid] < value)
		return r_binarySearch(arr, mid + 1, right, value);
	else if(arr[mid] > value)
		return r_binarySearch(arr,left, mid - 1, value);
	else if(arr[mid] == value)
		return mid;

	return -1;
}

int binarySearch(int *arr, int left, int right, int value){
	while(left < right){
		int mid = left + (right - left)/2;
		if(arr[mid] < value)
			left = mid;
		else if(arr[mid] > value)
			right = mid + 1;
		else if(arr[mid] == value)
			return mid;
	}
	return -1;
}

int main(void){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	size_t size = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n", r_binarySearch(arr, 0, (int) sizeof(arr)-1, 6));
	return 0;
}
