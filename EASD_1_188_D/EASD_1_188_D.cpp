#include <iostream>
using namespace std;

int Deni[88];
int n;

void selectionSort(int arr[88], int n) {
	for (int j = 0; j < n - 1; j++) {
		int min_index = j;
		for (int i = j + 1; i < n; i++) {
			if (arr[i] < arr[min_index]) {
				min_index = i;
			}
		}
		int temp = arr[j];
		arr[j] = arr[min_index];
		arr[min_index] = temp;
	}
}

int main() {
	int arr[88] = { 64, 25, 12, 22, 11 };
	int n = sizeof(arr) / sizeof(arr[0]);
}