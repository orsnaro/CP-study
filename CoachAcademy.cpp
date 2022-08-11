#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 1e6;
int a[N];

//sheet greedy prob C 
//my 1st solution almost worked stopeed at test 11 
// couldnt find test case that counter my  prev solution :(
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;
  ll moves=0;


  for(int i=1 ; i<=n ; ++i)
    cin >> a[i];
  sort(a+1,a+n+1);

  for (int i=1; i <= n ; ++i)
    moves+=abs(a[i]-i);
  cout << moves << '\n';

  return 0;
}