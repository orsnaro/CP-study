#include <bits/stdc++.h>
#include <chrono>
#define fastio                                                                 \
  (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));
using namespace std;
using ll = long long;

int main() { // this will count runtime for ur code
  fastio;
  auto start = std::chrono::duration_cast<std::chrono::milliseconds>(
                   chrono::system_clock::now().time_since_epoch()).count();
                   
  // WRITE YOUR CODE HERE

  auto stop = std::chrono::duration_cast<std::chrono::milliseconds>(
                  chrono::system_clock::now().time_since_epoch())
                  .count();
  cerr << "Took " << stop - start << "ms" << endl;
  return 0;
}