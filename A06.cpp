#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  int a, l, r;
  int i;
  vector<int> x;

  cin >> n >> q;

  for (i = 0; i < n; i++) {
    cin >> a;
    if (i != 0) {
      x.push_back(a + x[i - 1]);
    } else {
      x.push_back(a);
    }
  }

  for (i = 0; i < q; i++) {
    cin >> l >> r;
    if (l != 1) {
      cout << x.at(r - 1) - x.at(l - 2) << endl;
    } else {
      cout << x.at(r - 1) << endl;
    }
  }
}
