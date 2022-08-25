#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 25;
int arr[N];

void ans(){
  int n, p;
    scanf("%d %d",&n , &p);

    for (int i = 0; i < p; ++i) {
      scanf("%d", &arr[i]);
    }
    bool valid = 0;
    for (int msk = 0; msk < (1 << p); ++msk) {
      int sum = 0;
      for (int i = 0; i < p; ++i) {
        if (msk & (1 << i))  // or (msk>>i) & 1
          sum += arr[i];
      }
      valid |= (sum == n); //nice bit-wise technique 1st time using this;
    }
      if (valid) 
        printf("YES\n");
      else
        printf("NO\n");
  }


// bitmasks  prob : C
int main() {
  int t;
  // cin >> t;
  scanf("%d",&t);
  while (t--) ans();
    

  return 0;
}