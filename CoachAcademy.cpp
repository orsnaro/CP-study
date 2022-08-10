#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// const ll N = 1e5;
// int arr[N],prefix[N]{0};

// greedy sheet prob E
int main() 
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string str; cin >> str;
  bool valid=1;
  int sz = str.size();
  for(int i=0 ; i < sz ; ++i){

    if(str[i]=='0'&& valid){
      valid=0;
      continue;
    }

    if(i==sz-1 && valid )
      break;  

    cout << str[i];
  }  
  
  return 0;
}