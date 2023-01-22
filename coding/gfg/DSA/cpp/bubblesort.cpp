#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int temp;
  for (int i = 0; i < n; i++) {
    for (int j = 1; j < n; j++) {
      if (a[i] < a[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << "\n";
  return 0;
}