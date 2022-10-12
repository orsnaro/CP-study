// sheet : sort 1  prob: C
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
int arr[N];

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while (t--) {
        int n;
        cin >> n;
        multiset<int> mst;
        for (size_t i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            mst.insert(tmp);
        }

        int mx = *(--mst.end());
        int mn = *mst.begin();
        auto eitr = --mst.end();
        auto bitr = ++mst.begin();
        cout << mx << ' ';
        for (; bitr != eitr; bitr++) 
            cout << *bitr << ' ';
        
        cout << mn << ' ';
    }
    return 0;
}
