#include <iostream>

using namespace std;

void allOccurence(int *a, int n, int i, int key) {
	if (n == i) {
		return;
	}
	if (a[i] == key) {
		cout << i << " ";
	}
	allOccurence(a, n, i + 1, key);
}

int main() {
	int a[] = {1, 1, 6, 3, 4, 3, 3, 7};
	int n = sizeof(a) / sizeof(int);
	allOccurence(a, n, 0, 3);
	return 0;
}



/*
#include <iostream>

using namespace std;

int main() {
	int a[] = {1, 1, 6, 3, 4, 3, 3, 7};
	int n = sizeof(a) / sizeof(int);
	int key = 3;
	for (int i = 0; i < n; i++) {
		if (a[i] == key) {
			cout << i << " "; 
		}
	}
	return 0;
}
*/