// sheet : general  (13)  prob: D
#include <bits/stdc++.h>
#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

#define f first
#define s second
using namespace std;
using ll = long long;
const int N = 1e6, M = 1e7;
int arr[N];
bitset<20100> bst;
vector<int> primes;

void sieve() {
    // 0 means a prime
    bst[0] = bst[1] = 1;

    for (size_t i = 2; i < 20100 / i; i++)
        if (!bst[i])
            for (size_t j = i * i; j < 20100; j += i)
                bst[j] = 1;

    for (int i = 0; i < 20100; i++)
        if (bst[i] == 0)
            primes.push_back(i);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;

    sieve();
    while (t--) {
        int d;
        cin >> d;
        int p = *upper_bound(primes.begin(), primes.end(), d);
        int q = *lower_bound(primes.begin(), primes.end(), p + d);
        ll ans = 1ll * p * q;
        cout << ans << '\n';
    }
    return 0;
}