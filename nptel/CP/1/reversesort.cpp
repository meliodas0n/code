#include <algorithm>
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int reversesort(vector<int> &v) {
  int cost = 0;
  for (int i = 0; i < v.size() - 1; i++) {
    int m = *min_element(v.begin() + i, v.end());
    auto x = find(v.begin(), v.end(), m);
    reverse(v.begin() + i, x + 1);
    cost += distance(v.begin(), x) - i + 1;
  }
  return cost;
}

int main() {
  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
  #endif
  ios::sync_with_stdio(false);
  
  int T;
  cin >> T;
  for (int c = 1; c < T + 1; c++) {
    int N;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++) {
      int n;
      cin >> n;
      v.push_back(n);
    }
    cout << "Case #" << c << ": " << reversesort(v) << "\n";
  }
  return 0;
}