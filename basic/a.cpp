#include<bits/stdc++.h>
using namespace std;

int dy[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dx[] = {-1, -2, -2, -1, 1, 2, 2, 1};
int n, l, sy, sx, ey, ex;
queue<pair<int, int>> q;
int visited[300][300];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int k = 0; k < n; k++){
		memset(visited, 0, sizeof(visited));
		cin >> l;
		cin >> sy >> sx;
		cin >> ey >> ex;
		visited[sy][sx] = 1;
		q.push({sy, sx});
		while(q.size()){
			int ty = q.front().first;
			int tx = q.front().second;
			q.pop();
			for(int i = 0; i < 8; i++){
				int ny = ty + dy[i];
				int nx = tx + dx[i];
				if(ny < 0 || nx < 0 || ny >= l || nx >= l) continue;
				if(visited[ny][nx]) continue;
				visited[ny][nx] = visited[ty][tx] + 1;
				q.push({ny, nx});
			}
			if(visited[ey][ex]){ 
				cout << visited[ey][ex] - 1 << '\n';
				while(q.size()){
					q.pop();
				}
				break;
			}
		}
	}

	return 0;
}