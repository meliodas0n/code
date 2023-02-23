#include <iostream>

using namespace std;

int main() {
  int arr[50], n, idx;
  cout << "Enter the size of array : " << "\n";
  cin >> n;
  cout << "Enter the elements of array : " << "\n";
  for (idx = 0; idx < n; idx++) {
    cin >> arr[idx];
  }
  cout << "Array elements are : " << "\n";
  for (idx = 0; idx < n; idx++) {
    cout << arr[idx] << " ";
  }
  return 0;
}
