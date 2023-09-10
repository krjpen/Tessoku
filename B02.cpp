#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int i;
  vector<int> x;
  bool y = false;

  for (i = a; i <= b; i++) {
    x.push_back(i);
  }
  for (i = 0; i <= b - a; i++) {
    if (100 % x[i] == 0) {
      y = true;
      break;
    }
  }

  if (y == true) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
