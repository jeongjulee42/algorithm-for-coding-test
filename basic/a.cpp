#include <bits/stdc++.h>
using namespace std;

int n;
stack<pair<long long, int>> stk;
long long inpt, cnt;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> inpt;
		if(stk.size()){
			if(stk.top().first > inpt){
				cnt++;
				stk.push({inpt, 1});
			}
			else if (stk.top().first <= inpt){
				int num = 1;
				while(stk.size() && stk.top().first <= inpt){
					auto temp = stk.top();
					if(temp.first == inpt) num += temp.second;
					stk.pop();
					cnt += temp.second;
				}
				if(stk.size()) cnt++;
				stk.push({inpt, num});
			}
		}else{
			stk.push({inpt, 1});
		}
	}
	cout << cnt << '\n';
	return 0;
}

