#include <iostream>

using namespace std;

void insertion_sort(int a[], int n) {
  int i, key, j;
  for (i = 1; i < n; i++) {
    key = a[i];
    j = i - 1;
    while (j >= 0 and a[j] > key) {
      a[j + 1] = a[j];
      j = j - 1;
    }
    a[j + 1] = key;
  }
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  insertion_sort(a, n);
  return 0;
}