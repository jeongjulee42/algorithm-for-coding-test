#include<bits/stdc++.h>
using namespace std;

stack<char> stk;
string str;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	cin >> str;
	for(int i = 0; i < str.size(); i++){
		char c = str[i];
		if(c == 'j'){
			if(stk.size() && (stk.top() == 'l' || stk.top() == 'n'))stk.pop();
		} else if(c == '='){
			if(stk.size() && (stk.top() == 's' || stk.top() == 'c')) stk.pop();
			else if (stk.size() && stk.top() == 'z'){
				stk.pop();
				if(stk.size() && stk.top() == 'd'){
					stk.pop();
				}
			}
		} else if(c == '-'){
			if(stk.size() && (stk.top() == 'd' || stk.top() == 'c')) stk.pop();
		}
		stk.push(c);
	}
	cout << stk.size() << '\n';
	return 0;
}