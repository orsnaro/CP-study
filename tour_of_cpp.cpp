#include <bits/stdc++.h>
#define fastread      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
using ll = long long;


const int N = 1e6;
ll arr[N];

// bitmasks  prob : K bitmasking
    fastread;

    int n; cin >> n;
    int sm =0 ;
    for (int i = 0 ; i < n; ++i){
        cin >> arr[i];
        sm=sm^arr[i];
    }
    
    for(int i = 0; i < n ; ++i)
        cout << (sm^arr[i]) << ' ';
    



  return 0;
}