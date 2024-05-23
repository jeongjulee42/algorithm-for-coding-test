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
		if(temp == 1){
			int num = 0;
			cin >> num;
			stk.push(num);
		}
		else if(temp == 2){
			if(stk.size()){
				cout << stk.top() << '\n';
				stk.pop();
			}else cout << -1 << '\n';
		} else if(temp == 3) cout << stk.size() << '\n';
		else if(temp == 4){
			if(stk.size()) cout << 0 << '\n';
			else cout << 1 << '\n';
		}else{
			if(stk.size()) cout << stk.top() << '\n';
			else cout << -1 << '\n';
		}
	}
	
	
	return 0;
}







