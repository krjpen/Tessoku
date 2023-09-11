#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, q, l, r;
  int i;
  vector<int> t;

  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a;
    if (i == 0) {
      t.push_back(a);
    }
    else{
      t.push_back(a + t[i-1]);
    }
  }

  cin >> q;
  for(i=0;i<q;i++){
    cin >> l >> r;
    if((t[r-1] - t[l-2])*2 > (r-l+1)){
      cout << "win" << endl;
    }
    else if((t[r-1] - t[l-2])*2 == (r-l+1)){
      cout << "draw" << endl;
    }
    else{
      cout << "lose" << endl;
    }
  }
}
