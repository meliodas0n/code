#include <iostream>
#include <vector>

int main() {
  int n;
  cout << "Enter the number of elements : ";
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  cout << "\n";
  cout << "elements in the array : ";
  for (auto x : v) {
    cout << x << " ";
  }
  cout << "\n";
  return 0;
} 
