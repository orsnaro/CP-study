#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// const int N = 1e6;
// int arr[N];

// stls II prob : F
int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  stack <string> stk;
  unordered_set <string> uno_st;
  int n; cin >> n;

  while (n--) {
    string s; cin >> s;
    stk.push(s);
    uno_st.insert(s);
  }
  
  int sz = stk.size();
  for ( int i = 0; i < sz; ++i ){
    auto itr = uno_st.find(stk.top());
    if(itr == uno_st.end()){
      stk.pop();
    }else{
      uno_st.erase(itr);
      cout << stk.top() << '\n';
      stk.pop();
    }
  }

  


  return 0;
}