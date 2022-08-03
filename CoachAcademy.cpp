#include <bits/stdc++.h>
using namespace std;
//sheet 3 prob I
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  multiset <int> myst;
  int tc; cin >> tc;

  while(tc--){
    int n,d;
    cin >> n >> d;
    bool all_valid=1;
    int temp;

    for (int i=0 ; i<n ; ++i){
      cin >> temp;

      if(temp > d)
        all_valid=0;


      myst.emplace(temp);
    }


    if( all_valid==1 ||  (*myst.begin() + *(++myst.begin()) <= d) ){
      cout << "YES\n";
    }
    else cout << "NO\n";

    myst.clear();

  }

  return 0;
}
