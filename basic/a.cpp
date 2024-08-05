#include<bits/stdc++.h>
using namespace std;

int ary[1000001], num[1000001], n;
stack<int> stk;
vector<int> ret;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> ary[i];
		num[ary[i]]++;
	}
	for(int i = n - 1; i >= 0; i--){
		int t = ary[i];
		while(stk.size() && num[stk.top()] <= num[t]){
			stk.pop();
		}
		if(stk.size() == 0) ret.push_back(-1);
		else{
			ret.push_back(stk.top());
		}
		stk.push(t);
	}
	for(int i = ret.size() - 1; i >= 0; i--) cout << ret[i] << ' ';
	return 0;
}