#include <bits/stdc++.h>
// num. theory II prob : div3 went late!

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr);                                                            \
  cout.tie(nullptr);

using namespace std;
using ll = long long;

const int N = 1e6;
int arr[N];

    void reverseStr(string & str) {
      int n = str.length();

      // Swap character starting from two
      // corners
      for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    }

int main() {
  fastio;

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int num;
    cin >> num;
    int numcp = num;
    int cntr = 0;
    string str;
    for (int i = 0; i < n; ++i) {
      bool is_z = 0;

      if (i == n - 1) {
        char last = (num % 10) + 96;
        str.append(1,last);
        continue;
      }

      if (numcp % 10 == 0) {
        is_z = 1;

        while (cntr--) {
          char temp = (num % 10) + 96;
          str.append (1,temp);
          num /= 10;
        }

        char temp = (num % 10) + 96;
        num /= 10;
        str.append(1,temp);
        num /= 100;
        temp = (num % 10) + 96;
        str.append(1,temp);
        i += 2;
      }
      numcp /= 10;

      if (is_z)
        continue;

      cntr++;
    }
    
    reverseStr( str);
    cout << str;
    cout << '\n';
  }

  return 0;
}