#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 1e6;
int arr[N];

int is_multiple (int x ,int target , int cntr){
  if(target <= x){
  if(target*3 == x or target*2 == x)
    return --cntr;
  else if (target == x)
  return cntr;
  else
  return -1;
  }
  


  return is_multiple(x,target/6,cntr+2);
}


// bitmasks  prob : D backtacking
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);

int x,y,cntr = 0; 
cin >> x >> y;

// if (x>y){
//   cout << -1  << endl;
//   reutrn 0;
// }

cout << is_multiple(x,y,cntr) << '\n';

  return 0;
}