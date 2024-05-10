#include<bits/stdc++.h>
using namespace std;

int adj[26];
stack<char> stk;
string str;
int n, cnt;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		memset(adj, 0, sizeof(adj));
		cin >> str;
		for(int j = 0; j < str.size(); j++){
			if(stk.size() && stk.top() == str[j]){
				stk.pop();
			}
			stk.push(str[j]);
		}
		bool flag = true;
		while(stk.size()){
			char c = stk.top(); stk.pop();
			if(adj[c - 97]) flag = false;
			adj[c - 97] = 1;			
		}
		if(flag) cnt++;
	}
	cout << cnt << '\n';

	return 0;
}