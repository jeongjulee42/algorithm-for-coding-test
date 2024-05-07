#include<bits/stdc++.h>
using namespace std;

int n, k;
int ary[10004];
int m[104];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> m[i];

	queue<int> q;
	q.push(0);
	while(q.size()){
		int temp = q.front(); q.pop();
		if(temp == k){
			cout << ary[temp] << '\n';
			exit(0);
		}
		for(int i = 0; i < n; i++){
			if(temp + m[i] > k) continue;
			if(ary[temp + m[i]]) continue;
			ary[temp + m[i]] = ary[temp] + 1;
			q.push(temp + m[i]);
		}
	}
	cout << -1 << '\n';
	return 0;
}