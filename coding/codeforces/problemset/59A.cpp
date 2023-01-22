#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;
 
// http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0200r0.html
template<class Fun> class y_combinator_result {
    Fun fun_;
public:
    template<class T> explicit y_combinator_result(T &&fun): fun_(std::forward<T>(fun)) {}
    template<class ...Args> decltype(auto) operator()(Args &&...args) { return fun_(std::ref(*this), std::forward<Args>(args)...); }
};
template<class Fun> decltype(auto) y_combinator(Fun &&fun) { return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun)); }
 
 
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
 
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef MELIODAS_DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void run_case() {
    // write your shit code here.
}

int main() {
    ios::sync_with_stdio(false);
#ifndef MELIODS_DEBUG
    cin.tie(nullptr);
#endif

  string s;
  cin >> s;
  int higher_case = 0, lower_case = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] <= 122 and s[i] >= 97) {
      lower_case++;
    } else {
      higher_case++;
    }
  }
  if (higher_case > lower_case) {
    for (int i = 0; i < s.size(); i++) {
      if (s[i] <= 122 and s[i] >= 97) {
        s[i] -= 32;
      }
    }
  } else {
    for (int i = 0; i < s.size(); i++) {
      if (s[i] <= 90 and s[i] >= 65) {
        s[i] += 32;
      }
    }
  }
  cout << s;
  return 0;
}