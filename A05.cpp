#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  int i, j, t;
  vector<int> a;
  int count = 0;

  cin >> n >> k;

  for (i = 1; i <= n; i++) {
    a.push_back(i);
  }

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      t = k - i - j;
      if (t >= 1 && t <= n) {
        count++;
      }
    }
  }

  cout << count << endl;
}
