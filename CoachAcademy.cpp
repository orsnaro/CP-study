#include <bits/stdc++.h>
using namespace std;
using ll =long long ;

// ll arr[1000000];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  
  cout << fixed << setprecision(1); 
  multiset <ll,greater<>> l ;
  multiset <ll> r ;

  int n ; cin >> n;
  char c ;
  ll x;
  while(n--){
    cin >> c >> x;


    if(c== 'a'){
      if(l.empty() or x <= *l.begin()){
        l.insert(x);
        if(l.size() > r.size()+1){
          r.insert(*l.begin());
          l.erase(l.begin());
        }

        }
        else {
          r.insert(x);
          if(r.size() > l.size()){
            l.insert(*r.begin());
            r.erase(r.begin());
          }
      }
    }
    else if (l.find(x)==l.end() and r.find(x) == r.end()){
      cout << "Wrong!"<< '\n';continue;
    }
    else if(l.find(x) != l.end() ){
      l.erase(l.find(x));
      if( l.size()< r.size()){
        l.insert(*r.begin());
        r.erase(r.begin());
      }
        
    }
    else{
      r.erase(r.find(x));
      if(l.size() > r.size()+1){
        r.insert(*l.begin());
        l.erase(l.begin());
      }    
    }
    if(l.empty()){
      cout << "Wrong!"<<'\n';
      continue;
    }
    if(l.size()==r.size()){
      ll median = *l.begin() + *r.begin();
      if(median &1)
      cout <<median/2.0<<'\n';
      else
      cout << median/2 << '\n';
    }
    else cout << *l.begin() << '\n';

  }
  return 0;
}