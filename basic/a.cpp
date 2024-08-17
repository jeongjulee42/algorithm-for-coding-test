#include<bits/stdc++.h>
using namespace std;

queue<int> q;
int ret[100001];
bool visited[100001];
vector<int> v[100001];
int n, num = 1, m, r, a, b;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> r;
	for(int i = 0; i < m; i++){
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i = 1; i <= n; i++){
		if(v[i].size() <= 0) continue;
		sort(v[i].begin(), v[i].end());
	}
	q.push(r);
	visited[r] = 1;
	ret[r] = num;
	while(q.size()){
		int there = q.front();
		q.pop();
		for(int i = v[there].size() - 1; i >= 0; i--){
			int temp = v[there][i];
			if(!visited[temp]) {
				num++;
				ret[temp] = num;
				visited[temp] = 1;
				q.push(temp);
			}
		}
	}

	for(int i = 1; i <= n; i++) cout << ret[i] << '\n';

	return 0;
}