// sheet : general  (13)  prob: E
#include <bits/stdc++.h>

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

using namespace std;
using ll = long long;

const int N = 1e6;
int arr[N];

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll sum = 0, ans = 0;
        int smdtrc, equal;
        for (size_t i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            sum += tmp;
        }
        smdtrc = sum % n;
        int smdtrc2 = smdtrc;
        equal = (sum - smdtrc) / n;
        ans = 1ll*(n - smdtrc2) * smdtrc2;
        cout << ans << '\n';
    }
    return 0;
}