#include<bits/stdc++.h>
using namespace std;

int dp[1000001];
int n;

void go(){
	queue<int> q;
	q.push(1);
	while(q.size()){
		int num = q.front();
		q.pop();
		if(num + 1 <= 1000000 && !dp[num + 1]){
			dp[num + 1] = dp[num] + 1;
			q.push(num + 1);
		}
		if(num * 2 <= 1000000 && !dp[num * 2]){
			dp[num * 2] = dp[num] + 1;
			q.push(num * 2);
		}
		if(num * 3 <= 1000000 && !dp[num * 3]){
			dp[num * 3] = dp[num] + 1;
			q.push(num * 3);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	go();
	cout << dp[n] << '\n';


	return 0;
}