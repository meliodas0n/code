#include <iostream>

using namespace std;

void swapping(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void merge(int *a, int l, int m, int r) {
  int i, j, k, nl, nr;
  nl = m - l + 1;
  nr = r - m;
  int larr[nl], rarr[nr];
  for (i = 0; i < nl; i++) {
    larr[i] = a[l + i];
  }
  for (i = 0; i < nr; i++) {
    rarr[j] = a[m + 1 + j];
  }
  i = 0; j = 0, k = l;
  while (i < nl and j < nr) {
    if (larr[i] <= rarr[j]) {
      a[k] = larr[i];
      i++;
    } else {
      a[k] = rarr[j];
      j++;
    }
    k++;
  }
  while (i < nl) {
    a[k] = larr[i];
    i++;
    k++;
  }
  while (j < nr) {
    a[k] = rarr[j];
    j++;
    k++;
  }
}

void mergeSort(int *a, int l, int r) {
  int m;
  if (l < r) {
    int m = l + (r - l) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
  } 
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  mergeSort(a, 0, n - 1);
  return 0;
}