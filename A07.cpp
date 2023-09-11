#include <bits/stdc++.h>
using namespace std;

int main() {
  int d, n, l, r;
  int i, j;
  vector<int> a;

  cin >> d >> n;

  for (i = 0; i < d; i++) {
    a.push_back(0);
  }

  for (i = 0; i < n; i++) {
    cin >> l >> r;
    for (j = l - 1; j <= r - 1; j++) {
      a.at(j)++;
    }
  }

  for(i=0;i<d;i++){
    cout << a.at(i) << endl;
  }
}
