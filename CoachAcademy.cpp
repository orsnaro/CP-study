#include <bits/stdc++.h>

using namespace std;

int main() {
  // ios_base::sync_with_stdio(false);
  // cin.tie(nullptr);
  // cout.tie(nullptr);
  vector < int > vec;
  int prev = 0, crnt = 0;
  int tot_stps;
  bool start = 1;
  scanf("%d", & tot_stps);
  int i = tot_stps;

  while (i--) {
    //nxt 2lines-> store lst 2 stps (2nd elmnt is the curnt stp indx)
    prev = crnt;
    scanf("%d", & crnt);

    if (crnt == 1) {

      if (start) { //only for 1st stp at verystart

        if (tot_stps == 1)
          vec.emplace_back(crnt); //any stp_indx==1 aftr verystart

        start = !start;
        continue;
      }
      vec.emplace_back(prev);
    }

    if (i == 0) {
      vec.emplace_back(crnt);
      break;
    }

  }

  printf("%d\n", vec.size());
  for (int & a: vec)
    printf("%d ", a);

  return 0;
}
