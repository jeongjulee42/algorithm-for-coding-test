#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k;
queue<int> q;
queue<int> ret;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;
	for(int i = 1; i <= n; i++) q.push(i);
	while(q.size()){
		for(int i = 1; i < k; i++){
			int temp = q.front();
			q.pop();
			q.push(temp);
		}
		int temp2 = q.front();
		q.pop();
		ret.push(temp2);
	}
	cout << '<' << ret.front();
	ret.pop();
	while(ret.size()){
		cout << ", " << ret.front();
		ret.pop();
	}
	cout << '>' << '\n';

	return 0;
}