// sheet : 14  prob: G
#include <bits/stdc++.h>
#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

#define F first
#define S second
using namespace std;
using ll = long long int;
const int N = 1e6, M = 1e8;
// int arr[N];
// int d[8][2]{
//     {+1,0 },
//     {0,+1},
//     {-1,0},
//     {0,-1},
//     {+1,+1},
//     {-1,-1},
//     {+1,-1},
//     {-1,+1}
// };

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while (t--) {
        int r1, c1, r2, c2;
        int arr[3] = {0}; // rook bishop king
        cin >> r1 >> c1 >> r2 >> c2;
        // rook
        if (c1 == c2 or r1 == r2)
            arr[0] = 1;
        else
            arr[0] = 2;

        // bishop
        if (  ((r1 + c1) & 1) == ((r2 + c2 ) & 1) ){
            if (abs(r1 - r2) == abs(c1 - c2))
                arr[1] = 1;
            else
                arr[1] = 2;
        }

        //king 
        arr[2] = max ( abs (r1 - r2) , abs(c1 - c2));

        cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << '\n';
    }
    return 0;
}
