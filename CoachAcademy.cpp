#include <bits/stdc++.h>
using namespace std;
using ll =long long ;

// ll arr[1000000];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cout << fixed << setprecision(1);

  vector <int> v;
  bool is_odd=0,sorted=0;

  int tc; cin >> tc;
  while(tc--){
    ll  median=0;
    char op;cin >> op;
    int x;

    cin >> x;
    if(op =='r'){
      if(v.empty() or find(v.begin(),v.end() ,x) ==v.end()){
        cout << "Wrong!\n";continue;
      }
      else if (find(v.begin(),v.end() ,x) !=v.end()){
        auto  temp = find(v.begin(),v.end() ,x);
        v.erase(temp);
        if(v.empty()){ //cuz u erased median now random val is there
          cout << "Wrong!\n";continue;
        }

        is_odd=!is_odd;
        // sort(v.begin(),v.end());

        if(is_odd)
          median=v[v.size()/2];
        else
          median=v[(v.size()/2)-1] +v[v.size()/2];
      }
    }

    if(op =='a'){
      v.push_back(x);
      is_odd=!is_odd;

      if (v.size() ==2 && v[0]<v[1]){
        sorted=1;
        if(is_odd)
          median=v[v.size()/2];
        else
          median=v[(v.size()/2)-1] +v[v.size()/2];
      }


      if(v.size()>=3 && sorted ){
        if(v[v.size()-2] > v.back())
          sort(v.begin(),v.end());
        if(is_odd)
          median=v[v.size()/2];
        else
          median=v[(v.size()/2)-1] +v[v.size()/2];

        if(v[v.size()-2] < v.back()){
          if(is_odd)
            median=v[v.size()/2];
          else
            median=v[(v.size()/2)-1] +v[v.size()/2];
        }
      }

      else{
        sort(v.begin(),v.end());

        if(is_odd)
          median=v[v.size()/2];
        else
          median=v[(v.size()/2)-1] +v[v.size()/2];
      }
    }


    if ((median &1) and !is_odd)
      cout << median/ 2.0 << '\n';
    else if(!(median &1) and !is_odd )
      cout << median/2 << '\n';
    else if (median &1 and is_odd )
      cout << median <<'\n';
    else
      cout << (int)median  << '\n';
  }
  return 0;
}
