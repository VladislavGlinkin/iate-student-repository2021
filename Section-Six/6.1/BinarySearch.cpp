#include <iostream>

using namespace std;

int BinarySearch(int *arr, int x, int n) {
	int l = 0;
	int r = n;
	int m = 0;
	while (1) {
		int m = l + (r - l) / 2;
		if (x > arr[m])
			l = m + 1;
		else if (x < arr[m])
			r = m - 1;
		else if (x == arr[m])
			return m + 1;
		if (l > r)
			return -1;
	}
}

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int k, x;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> x;
		cout << BinarySearch(arr, x, n) << " ";
	}
}