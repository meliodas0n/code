#include <iostream>

using namespace std;

void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void selectionSort(int a[], int n) {
  int i, j, min_idx;
  for (i = 0; i < n - 1; i++) {
    min_idx = i;
    for (j = i + 1; j < n; j++) {
      if (a[j] < a[min_idx]) {
        min_idx = j;
      }
    }
    if (min_idx != i) {
      swap(&a[min_idx], &a[i]);
    }
  }
}

void printArray(int a[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    cout << a[i] << " ";
  }
  cout << "\n";
}

int main() {
  int a[] = {64, 25, 12, 22, 12};
  int n = sizeof(a) / sizeof(a[0]);
  selectionSort(a, n);
  cout << "Sorted array : ";
  printArray(a, n);
  return 0;
}