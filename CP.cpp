// sheet : 10  prob: H
#include <bits/stdc++.h>
#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

#define F first
#define S second
using namespace std;
using ll = long long;
const int N = 1e6, M = 1e7;
int arr[N];
ll fact(int x) {

    if (x == 1)
        return 1;
    return x * fact(x - 1);
}
ll nCr(int z_cnt) {
    if (z_cnt == 0)
        return 1;

    ll nfact = fact(z_cnt + 1);
    ll rfact = fact(z_cnt);
    int dnrfact = 1;

    ll _ncr = nfact / (rfact * dnrfact);

    return _ncr;
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while (t--) {
        bool cnt_on = 0, fnd1 = 0;
        int cnt_0 = 0;
        int n;
        ll ans = 1;
        cin >> n;
        int tmp, prev;
        for (size_t i = 0; i < n; i++) {
            prev = tmp;
            cin >> tmp;
            if (i == 0)
                prev = tmp;

            if (tmp == 1) {
                fnd1 = 1;
                ans *= 1ll * nCr(cnt_0);
                cnt_0 = 0;
            } else if (!tmp and fnd1)
                cnt_0++;
        }
        if (!fnd1)
            cout << "0\n";
        else
        cout << ans << '\n';
    }

    return 0;
}
