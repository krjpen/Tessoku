#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  int k = 0;
  int i;

  cin >> n;
  reverse(n.begin(), n.end());
  
  for (i = 0; i < n.size(); i++) {
    if (n[i] == '1') {
      k += (1 << i);
    }
  }

  cout << k << endl;
}
