#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
 	cout.tie(nullptr);

	deque<int> dq_contnr;
	string query;
	int Q, N = 0;
	bool is_reverse = 0;

	cin>>Q;

	while (Q--)
	{
	    cin >> query;
	    if (query == "back")
	    {
				if(is_reverse==0){

					if (!dq_contnr.empty())
					{
						cout << dq_contnr.back() << '\n';
						dq_contnr.pop_back();
					}

					else
					cout << "No job for Ada?" << '\n';

				}
				else{

					if (!dq_contnr.empty())
					{
						cout << dq_contnr.front() << '\n';
						dq_contnr.pop_front();
					}

					else
					cout << "No job for Ada?" << '\n';
				}

	    }

	    else if (query == "front")
				{
				if(is_reverse==0){
					if (!dq_contnr.empty())
	        {
	            cout << dq_contnr.front() << '\n';
	            dq_contnr.pop_front();
	        }

	        else
	            cout << "No job for Ada?" << '\n';
				}

				else{

					if (!dq_contnr.empty())
					{
						cout << dq_contnr.back() << '\n';
						dq_contnr.pop_back();
					}

					else
					cout << "No job for Ada?" << '\n';
				}
	    }

	    else if (query == "reverse")
			is_reverse= !is_reverse;


	    else if (query == "push_back")
	    {
				if(is_reverse==0){
					cin>>N;

					dq_contnr.push_back(N);
				}

				else{
					cin>>N;

					dq_contnr.push_front(N);
				}
	    }

	    else
	    {
				if(is_reverse==0){
					cin>>N;

					dq_contnr.push_front(N);
				}
				else{
					cin>>N;
					dq_contnr.push_back(N);
				}
	    }

	}

	return 0;
}
