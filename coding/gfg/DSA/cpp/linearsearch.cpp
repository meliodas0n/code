#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> v(n);
  for (auto &i : v) {
    cin >> i;
  }
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == x) {
      cout << "pos ; " << i << "\n";
    }
  }
  return 0;
}