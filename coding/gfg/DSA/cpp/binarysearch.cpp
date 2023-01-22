#include <iostream>
#include <vector>

using namespace std;

int binary_search(int n, int x, vector<int> v, int low, int high) {
  int mid = (low + (high - low)) / 2; 
  if (v[mid] == x) {
    return mid;
  }
  if (v[mid] > x) {
    return binary_search(n, x, v, mid + 1, high); 
  } else {
    return binary_search(n, x, v, low, mid - 1);
  }
}

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> v(n);
  for (auto &i : v) {
    cin >> i;
  }
  int low = 0, high = v.size();
  int pos = binary_search(n, x, v, low, high);
  cout << "pos : " << pos << "\n";
  return 0;
}