#include <bits/stdc++.h>
#include <chrono>
#define fastio                                                                 \
  (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));
using namespace std;
using ll = long long;

const int N = 1e6;
int arr[N];

int main() { // this will count runtime for ur code
  fastio;
  auto start = std::chrono::duration_cast<std::chrono::milliseconds>(
                   chrono::system_clock::now().time_since_epoch()).count();
                   
  // WRITE YOUR CODE HERE
  int t = 1;
  // cin >> t;
  while (t--) {
    int n; cin >> n;
    for( int i = 0; i < n; ++i)
      cin >> arr[i];
    sort (arr, arr + n);

    int mx= 1;

    for(int i = 0; i < n-1; ++i){
      for ( int j = n-1; j > i; j--)
        if ( arr[j] - arr[i] <= 5)
          mx = max (mx , j - i + 1);
    }
    cout << mx << '\n';
  }
  auto stop = std::chrono::duration_cast<std::chrono::milliseconds>(
                  chrono::system_clock::now().time_since_epoch())
                  .count();
  cerr << "Took " << stop - start << "ms" << endl;
  return 0;
}