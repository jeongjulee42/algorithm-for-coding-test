#include<bits/stdc++.h>
using namespace std;

int n, k;
queue<int> q;
int visited[100001];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;
	visited[n] = 1;
	q.push(n);
	while(q.size()){
		int num = q.front();
		q.pop();
		if(num - 1 >= 0 && !visited[num - 1]){
			visited[num - 1] = visited[num] + 1;
			if(num - 1 == k)break;
			q.push(num - 1);
		}
		if(num + 1 <= 100000 && !visited[num + 1]){
			visited[num + 1] = visited[num] + 1;
			if(num + 1 == k)break;
			q.push(num + 1);
		}
		if(num * 2 <= 100000 && !visited[num * 2]){
			visited[num * 2] = visited[num] + 1;
			if(num * 2 == k)break;
			q.push(num * 2);
		}
	}
	cout << visited[k] - 1 << '\n';
	return 0;
}