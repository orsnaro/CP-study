#include <bits/stdc++.h>
using namespace std;
//sheet 3 prob I
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  vector <int> v;
  int n; cin>> n;
  int ath;

  while(n--){
    int squad; cin >> squad;

    for(int i =0 ; i<squad; ++i){
      cin >> ath;
      v.push_back(ath);
    }
    sort(v.begin(),v.end());

    int sz= v.size();
    int min_dif=1e9;
    for(int i=1 ; i< sz ; ++i ){
      if((v[i]-v[i-1]) < min_dif){
        min_dif = v[i]-v[i-1];
      }
    }
    v.clear();
    cout << min_dif << '\n';
  }
    return 0;
}
