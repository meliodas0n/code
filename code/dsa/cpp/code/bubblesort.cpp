#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cout << "Enter number of elements : ";
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  cout << "\n";
  cout << "Before bubblesort : ";
  for (auto x : v) {
    cout << x << " ";
  }
  cout << "\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (v[i] <= v[j]) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
      }
    }
  }
  cout << "\n";
  cout << "After Bubblesort : ";
  for (auto e : v) {
    cout << e << " ";
  }
  cout << "\n";
  cout << "bubble sort done!!" << "\n";
  return 0;
}
