#include<bits/stdc++.h>
using namespace std;

int ary[1004][1004];
int visited[1004][1004];
int n, m, ret;
queue<pair<int, int>> q;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> m >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> ary[i][j];
			if(ary[i][j] == 1) {
				visited[i][j] = 1;
				q.push({i, j});
			}
			if(ary[i][j] == -1) visited[i][j] = -1;
		}
	}
	while(q.size()){
		int _y = q.front().first;
		int _x = q.front().second;
		q.pop();
		for(int i = 0; i < 4; i++){
			int ny = _y + dy[i];
			int nx = _x + dx[i];
			if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
			if(visited[ny][nx]) continue;
			if(ary[ny][nx] == -1) continue;
			q.push({ny, nx});
			visited[ny][nx] = visited[_y][_x] + 1;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(visited[i][j] == 0){
				cout << -1 << '\n';
				exit(0);
			}
			ret = max(ret, visited[i][j]);
		}
	}
	cout << ret - 1 << '\n';
	return 0;
}