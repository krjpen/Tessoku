#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, p, q;
  int i;
  vector<int> a;
  set<int> b;
  cin >> n >> k;

  for (i = 0; i < n; i++) {
    cin >> p;
    a.push_back(p);
  }

  for (i = 0; i < n; i++) {
    cin >> q;
    b.insert(q);
  }

  for (i = 0; i < n; i++) {
    if (b.count(k - a[i])) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}
