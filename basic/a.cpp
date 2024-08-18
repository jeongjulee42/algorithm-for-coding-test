#include<bits/stdc++.h>
using namespace std;

int n, m, v, a, b;
bool visited[10001];
vector<int> ary[10001];

void dfs(int here){
	visited[here] = 1;
	cout << here << ' ';
	for(int i : ary[here]){
		if(visited[i]) continue;
		dfs(i);
	}
}

void bfs(int start){
	queue<int> q;
	visited[start] = 1;
	q.push(start);
	while(q.size()){
		int next = q.front();
		q.pop();
		cout << next << ' ';
		for(int i : ary[next]){
			if(visited[i]) continue;
			visited[i] = 1;
			q.push(i);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> v;
	for(int i = 0; i < m; i++){
		cin >> a >> b;
		ary[a].push_back(b);
		ary[b].push_back(a);
	}
	for(int i = 1; i <= n; i++) sort(ary[i].begin(), ary[i].end());
	dfs(v);
	memset(visited, 0, sizeof(visited));
	cout << '\n';
	bfs(v);


	return 0;
}