#include<bits/stdc++.h>
using namespace std;

queue<int> q;
int n;


int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		string str = "";
		cin >> str;
		if(str == "push"){
			int temp = 0;
			cin >> temp;
			q.push(temp);
		} else if(str == "pop"){
			if(!q.size()){
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		} else if(str == "size"){
			cout << q.size() << '\n';
		} else if(str == "empty"){
			if(!q.size()) cout << 1 << '\n';
			else cout << 0 << '\n';
		} else if(str == "front"){
			if(!q.size()) cout << -1 << '\n';
			else cout << q.front() << '\n';
		} else if(str == "back"){
			if(!q.size()) cout << -1 << '\n';
			else cout << q.back() << '\n';
		}
	}
	
	return 0;
}







