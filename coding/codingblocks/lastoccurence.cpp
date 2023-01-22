#include <iostream>

using namespace std;

int lastOccurence(int *a, int n, int i, int key) {
	if (n == i) {
		return -1;
	}
	if (a[i] == key) {
		int bi = lastOccurence(a, n, i + 1, key);
		if (bi != -1) {
			return bi;
		} else {
			return i;
		}
	}
	int j = lastOccurence(a, n, i + 1, key);
	return j;
}

int main() {
	int a[] = {1, 1, 6, 3, 4, 3, 3, 7};
	int n = sizeof(a) / sizeof(int);
	cout << lastOccurence(a, n, 0, 1) << endl;
	return 0;
}