#include <iostream>

using namespace std;

bool isSorted(int a[], int n) {
  if (n == 0 or n == 1) {
    return true;
  } 
  bool isSmallerSorted = isSorted(a + 1, n - 1);
  if (isSmallerSorted and a[0] < a[1]) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int a[] = {1, 4, 6, 8, 9, 10};
  int n = sizeof(a) / sizeof(a[0]);
  bool ans = isSorted(a, n);
  if (ans == true) {
    cout << "Sorted" << "\n";
  } else {
    cout << "Array not Sorted" << "\n";
  }
  return 0;
}