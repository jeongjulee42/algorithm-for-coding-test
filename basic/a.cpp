#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

stack<int> stk, temp;
int ary[1001];
int n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++) cin >> ary[i];
	for(int i = n - 1; i >= 0; i--) stk.push(ary[i]);
	int start = 1;
	while(stk.size()){
		if(stk.top() == start){
			stk.pop();
			start++;
		}else if(temp.size() && temp.top() == start){
			temp.pop();
			start++;
		}else{
			temp.push(stk.top());
			stk.pop();
		}
	}
	while(temp.size()){
		if(temp.top() == start){
			temp.pop();
			start++;
		} else{
			break;
		}
	}
	if(temp.size()) cout << "Sad" << '\n';
	else cout << "Nice" << '\n';


	return 0;
}