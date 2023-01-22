#include <iostream>

using namespace std;

bool isArraySorted(int *a, int n, int i) {
  if (i == n - 1) {
    return true;
  }
  bool isSmallerSorted = isArraySorted(a, n, i + 1);
  if (isSmallerSorted and a[i] < a[i + 1]) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int a[] = {1, 4, 8, 19, 10};
  int n = sizeof(a) / sizeof(a[0]);

  if (isArraySorted(a, n, 0)) {
    cout << "Sorted" << "\n";
  } else {
    cout << "Not Sorted" << "\n";
  }
  return 0;
}