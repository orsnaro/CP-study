#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// const ll N = 1e5;
// int arr[N],prefix[N]{0};

// greedy sheet prob H 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);

int n ; cin >> n;
while(n--){

  int x; cin >> x;
  int k ; cin >> k;
  int tempk=k;

  for(int i =0 ; i < x; ++i){
    int a;cin >> a; 

    if(i!=x-1){
        
      if(k==0){
        cout <<a<< ' ';
        continue;
      }

      if (k-a <=0){
          a-=k;
          k=0;

      }
      else{
        k-=a;    
        a=0;
      }

      cout << a <<' ';
    }
    else{
      tempk-=k;
      a+=tempk;
      cout << a <<'\n'; 
    }
  }
}

  
  return 0;
}