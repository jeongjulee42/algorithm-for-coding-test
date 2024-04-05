#include <bits/stdc++.h>
using namespace std;

bool ary[200004];
stack<pair<int, char>> stk;
int n, maxVal, cnt;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		char c = '0';
		cin >> c;
		if(!stk.size()) stk.push({i, c});
		else{
			if((stk.top().second == '(') && (c == ')')){
				ary[stk.top().first] = 1;
				ary[i] = 1;
				stk.pop();
			}else{
				stk.push({i, c});
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout << ary[i];
		if(ary[i] == 0){
			maxVal = max(cnt, maxVal);
			cnt = 0;
		}else cnt++;
	}
	cout << '\n';
	cout << max(cnt,maxVal) << '\n';
	return 0;
}

