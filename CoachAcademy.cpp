#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
cin.ignore();
  while (n--) {
    string temp;
    getline(cin,temp);
    stack <char> st;
    bool valid = 1;

    for (char c: temp) {

      if (c == '[' || c == '(')
        st.push(c);

      else if (st.empty()) {
        valid = 0;
        break;
      }

      else if ((st.top()=='('&&c ==')') || (st.top()=='['&& c==']'))
        st.pop();

      else {
        valid = 0;
        break;
      }
    }
    cout << (valid && st.empty() ? "Yes\n" : "No\n");

  }
  return 0;
}
