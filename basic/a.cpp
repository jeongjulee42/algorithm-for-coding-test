#include<bits/stdc++.h>
using namespace std;

bool visited[100001];
vector<int> adj[100001];
int ret[100001];
int n, m, r, a, b, num = 1;

void go(int here){
	visited[here] = 1;
	ret[here] = num;
	sort(adj[here].begin(), adj[here].end());
	for(int i = 0; i < adj[here].size(); i++){
		int there = adj[here][i];
		if(visited[there]) continue;
		num++;
		go(there);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> r;
	for(int i = 0; i < m; i++) {
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	go(r);
	for(int i = 1; i <= n; i++) cout << ret[i] << '\n';

	return 0;
}