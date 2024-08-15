#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100001];
int visited[100001];
int n, a, b, m, r;
int ret[100001];
int num = 1;

void dfs(int here){
	visited[here] = 1;
	ret[here] = num;
	for(int i = adj[here].size() - 1; i >= 0; i--){
		int there = adj[here][i];
		if(visited[there]) continue;
		num++;
		dfs(there);
	}
	return;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> r;
	for(int i = 0; i < m; i++){
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for(int i = 1; i <= n; i++){
		sort(adj[i].begin(), adj[i].end());
	}
	dfs(r);
	for(int i = 1; i <= n; i++) cout << ret[i] << '\n';

	return 0;
}