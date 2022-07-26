#include <bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    deque<int> dq_contnr;
    string query;
    int Q, N = 0;

    scanf("%d", &Q);
    while (Q--)
    {
        cin >> query;
        if (query == "back")
        {
            if (!dq_contnr.empty())
            {
                cout << dq_contnr.back() << '\n';
                dq_contnr.pop_back();
            }
            else
                cout << "No job for Ada?" << '\n';
        }
        else if (query == "front")
        {
            if (!dq_contnr.empty())
            {
                cout << dq_contnr.front() << '\n';
                dq_contnr.pop_front();
            }
            else
                cout << "No job for Ada?" << '\n';
        }
        else if (query == "reverse")
        {
            reverse(dq_contnr.begin(), dq_contnr.end());
        }
        else if (query == "push_back")
        {
            scanf("%d", &N);
            dq_contnr.push_back(N);
        }
        else
        {
            scanf("%d", &N);
            dq_contnr.push_front(N);
        }
    }
    return 0;}
