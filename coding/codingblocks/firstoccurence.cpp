#include <iostream>

using namespace std;

int FirstOccurence(int *a, int n, int key) {
	if (n == 0) {
		return -1;
	}
	if (a[0] == key) {
		return 0;
	}
	int i = FirstOccurence(a + 1, n - 1, key);
	if (i == -1) {
		return -1;
	}
	return i + 1;
}

int firstOccurence(int *a, int n, int i, int key) {
	if (i == n) {
		return -1;
	}
	if (a[i] == key) {
		return i;
	}
	return firstOccurence(a, n, i + 1, key);
}

int mani() {
	int a[] = {1, 1, 6, 3, 4, 3, 3, 7};
	int n = sizeof(a) / sizeof(int);
	cout << FirstOccurence(a, n , 3) << endl;
	cout << firstOccurence(a, n, 0, 3) << endl;
	return 0;
}