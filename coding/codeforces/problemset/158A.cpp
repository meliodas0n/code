#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int a[n];
  int e;
  for (int i = 1; i <= n; i++) {
    cin >> e;
    a[i] = e; 
  }
  int count = 0;
  for (int i = 1; i <= n; i++) {
    if (a[i] >= a[k] and a[i] > 0) {
      count++;
    }
  }
  cout << count << "\n";
  return 0;
}