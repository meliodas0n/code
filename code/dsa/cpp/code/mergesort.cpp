#include <iostream>

using namespace std;

void merge(int ar[], int p, int q, int r) {
  int n1 = q - p + 1;
  int n2 = r - q;
  int L[n1], M[n2];
  for (int i = 0; i < n1; i++) {
    L[i] = arr[p + i];
  }
}


void mergesort(int arr[], int l, int r) {
  if (l < h) {
    int m = l + (r - l) / 2;
    mergesort(arr, l, m);
    mergesort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  mergeSort(arr, 0, size - 1);
  cout << "Sorted array : \n";
  printArray(arr, size);
  return 0;
}
