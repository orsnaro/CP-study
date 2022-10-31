#include <bits/stdc++.h>
#include <chrono>
#define fastio                                                                 \
    (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));
using namespace std;
using ll = long long;

const int N = 1e6;
int arr[N];

int main() { // this will count runtime for ur code. better use input.txt for
             // accuracy
    auto start = std::chrono::duration_cast<std::chrono::milliseconds>(
                     chrono::system_clock::now().time_since_epoch())
                     .count();
    fastio;
    // WRITE YOUR CODE HERE


    auto stop = std::chrono::duration_cast<std::chrono::milliseconds>(
                    chrono::system_clock::now().time_since_epoch())
                    .count();
    cerr << "Took " << stop - start << "ms" << endl;
    return 0;
}