#include <bits/stdc++.h>
using namespace std;
using ll =long long ;

ll arr[1000000];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);


  int tc;cin >> tc;
  while(tc--){
    int cntr=0;
    int n; cin >> n;
    int first, second;
    for(int i=0 ; i < n; ++i){
      int big ,small;
      second = first;
      cin >> first;
      if(i<1)
        continue;

      if(first -second < 0 ){
        big=second; small =first;
      }
      else if (first -second > 0){
        big=first; small=second;
      }

      if( ((float)big/small)> 2) {
        while((float)big/small > 2){
          cntr++;
          small*=2;
        }
      }

    }
      cout << cntr <<'\n';
  }
  return 0;
}
