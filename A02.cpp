#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  int a;
  int i;
  bool k = false;

  cin >> n >> x;

  for (i = 0; i < n; i++) {
    cin >> a;
    if (a == x) {
      k = true;
      break;
    }
  }

  if (k == true) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
