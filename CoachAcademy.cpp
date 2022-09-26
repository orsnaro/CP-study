// sheet : genral 4 (15)  prob: E
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
        int grid[n][n] = {0};
        fill(&grid[0][0], &grid[0][0] + (sizeof(grid)/sizeof(int)), 0);
        int i = 0;
        bool is_od = n % 2;
        while (i < n) {
            grid[i][i] = 1;
            grid[i][n - 1 - i] = 1;
            i++;
        }
        i = 0;

        if (is_od) {
            grid[n / 2][n - 1] = 1;
            grid[0][n / 2] = 1;
        }

        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++)
                cout << grid[j][k] << ' ';

            cout << '\n';
        }
    }
    return 0;
}