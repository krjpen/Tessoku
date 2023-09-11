#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int k;
  int i;

  cin >> n;

  for (i = 9; i >= 0; i--) {
    k = (1 << i);
    cout << (n / k) % 2;
  }
}
