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
  for (auto x : v) {
    cout << x << " ";
  }
  cout << "\n";
  int search;
  cout << "Enter the element to be searched : ";
  cin >> search;
  int index = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] == search) {
      index = i + 1;
    } else {
      index = -1;
    }
  }
  if (index >= 0) {
    cout << "found the element at : " << index << "\n";
  } else {
    cout << "Element is not found" << "\n";
  }
  cout << "linear search is done!!" << "\n";
  return 0;
}
