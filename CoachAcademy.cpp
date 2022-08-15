#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int  N = 2e5+10;
int arr[N];
int occured[N];
int ans[N];
//sheet static range query prob : C
//my code was bit  similar couldnt do it fully :(
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n,k,q;
	cin >> n >> k >>q;

	while(n--){ 
		int st , end; 
		cin >> st  >> end;
		occured[st]+=1;
		occured[end+1]-=1;
		
	}
		for(int i=1 ; i<N ; ++i)
			occured[i]+= occured[i-1];
		for(int i=1; i<N ; ++i){
			if(occured[i]>=k)
				ans[i]=ans[i-1] + 1;
			else ans[i]=ans[i-1];
		}

	while(q--){
		int st2,end2;
		cin >> st2 >> end2;
		cout << ans[end2]-ans[st2-1] << '\n';
	}
		

	return 0;
} 