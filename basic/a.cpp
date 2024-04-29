#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int lis[1004];
pair<int, int> p[1004];
int n, ret, len, num;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++ ){
		cin >> num;
		auto lp = lower_bound(lis, lis + len, num);
		int _pos = (int)(lp - lis);
		if(*lp == 0) len++;
		*lp = num;
		p[i] = {_pos, num};
	}
	cout << len << '\n';

	stack<int> stk;
	for(int i = n - 1; i >= 0; i--){
		if(p[i].first == len - 1){
			stk.push(p[i].second); len --;
		}
	}
	while(stk.size()) {
		cout << stk.top() << ' ';
		stk.pop();
	}

	return 0;
}