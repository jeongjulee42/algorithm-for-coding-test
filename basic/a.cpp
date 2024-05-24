#include<bits/stdc++.h>
using namespace std;

stack<int> stk;
int n;


int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		int temp = 0;
		cin >> temp;
		if(temp == 0) stk.pop();
		else{
			stk.push(temp);
		}
	}
	int ret = 0;
	while(stk.size()){
		ret += stk.top();
		stk.pop();
	}
	cout << ret << '\n';
	
	return 0;
}







