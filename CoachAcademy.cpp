#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// const ll N = 1e5;
// int arr[N],prefix[N]{0};

// greedy sheet prob j
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t  ; cin >> t ;
  while( t--){
    int c1,c2,c3;
    cin >> c1>>c2>>c3;
    int a1,a2,a3,a4,a5;
    cin >> a1 >> a2 >>a3 >> a4 >>a5;

    if( a1>c1 or a2>c2 or a3>c3){
      cout << "NO\n";continue;
    }
    if( (a1<=c1  and a2<=c2  and a3<=c3) and (a4==0 and a5==0)){
      cout << "YES\n";continue;
    }
    
    c1-=a1;c2-=a2;c3-=a3;
    
    if(c1!=0){
      if(c1-a4< 0){
        a4-=c1;
        c1=0;
      }
      else if (c1-a4 > 0){
        a4=0;
        c1-=a4;
      }
      else {
        c1=0;a4=0;
      }
    }
    if(c2!=0){
      if(c2-a5< 0){
        a5-=c2;
        c2=0;
      }
      else if (c2-a5 > 0){
        a5=0;
        c2-=a5;
      }
      else {
        c2=0;a5=0;
      }
    }

    if(a4+a5 > c3)
      cout << "NO\n";
    else 
      cout << "YES\n";
  }
  return 0;
}