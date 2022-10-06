// sheet : 9  prob: j
#include <bits/stdc++.h>
#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

#define F first
#define S second
using namespace std;
using ll = long long int;
const int N = 1e6, M = 1e8, mod = 1e9 + 7;
// int arr[N];
int pfreq[N];

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 1;
        for (size_t i = 1; i <= n; i++) {
            int tmp = i;
            for (int j = 2; j <= n / j; ++j)
                while (tmp % j == 0) {
                    tmp /= j;
                    pfreq[j]++;
                }
            if (tmp > 1)
                pfreq[tmp]++;
        }

        for (size_t i = 2; i <= n; i++)
            ans = (ans * 1ll * (pfreq[i] + 1)) % mod;

        cout << ans << '\n';
    }
    return 0;
}
