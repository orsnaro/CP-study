// sheet : sort 1  prob: G
#include <bits/stdc++.h>
#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

#define F first
#define S second
using namespace std;
using ll = long long int;
const int N = 1e6 + 5, M = 1e8;
// int arr[N];

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        deque<int> a;
        deque<int> b;
        for (int i = 0; i < n; ++i){
            int tmp; cin >> tmp;
            a.push_back(tmp);
        }
        for (int i = 0; i < k; ++i){
            int tmp; cin >> tmp;
            b.push_back(tmp);
        }

        sort(a.begin(), a.end());   // from smallest
        sort(b.rbegin(), b.rend()); // from biggest

        ll ans = 0;
        while (!b.empty() and b.back() == 1) {
            ans += 2ll * a.back();
            a.pop_back();
            b.pop_back();
        }
        for (size_t i = 0; i < b.size(); i++) {
            ans += a.back();
            a.pop_back();
            ans += a.front();
            a.pop_front();

            for (int j = 0; j < b[i] - 2; j++)
                a.pop_front();
        }
        cout << ans << '\n';
    }
    return 0;
}
