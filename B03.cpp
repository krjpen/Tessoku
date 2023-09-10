#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a;
  int i, j, k;
  vector<int> x;

  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a;
    x.push_back(a);
  }

  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      for (k = j + 1; k < n; k++) {
        if (x[i] + x[j] + x[k] == 1000) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }

  cout << "No" << endl;
}
