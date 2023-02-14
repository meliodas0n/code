#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> v, int l, int h, int search) {
  if (h >= l) {
    int mid = l + (h - l) / 2;
    if (v[mid] == search) {
      return mid;
    }
    if (v[mid] > search) {
      return binarySearch(v, l, mid - 1, search);
    }
    return binarySearch(v, mid + 1, h, search);
  }
  return -1;
}

void call_iterative(vector<int> v, int n, int search) {
  int result = binarySearch(v, 0, n - 1, search);
  if (result == -1) {
    cout << "Element is not present in the array" << "\n";
  } else {
    cout << "Element is present at the index " << result << "\n";
  }
}

void call_recursive(vector<int> v, int n, int search) {
  int l = 0;
  int h = v.size() - 1;
  int mid;
  while (h - l > 1) {
    int mid = (h + l) / 2;
    if (v[mid] < search) {
      l = mid + 1;
    } else {
      h = mid;
    }
  }
  if (v[l] == search) {
    cout << "Found" << " At Index " << l << endl;
  } else if (v[h] == search) {
    cout << "Found " << " At Index " << h << endl;
  } else {
    cout << "Not Found" << endl;
  }
}

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
    cout << x << " ";
  }
  cout << "\n";
  int search;
  cout << "Enter the search element : ";
  cin >> search;
  call_iterative(v, n, search);
  call_recursive(v, n, search);
  return 0;
}
