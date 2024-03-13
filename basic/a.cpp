#include <bits/stdc++.h>
using namespace std;

int n, m;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int a[100][100];
int visited[100][100];
int y, x, sy, sx, ey, ex;

int main(){
    cin >> n >> m;
    cin >> sy >> sx;
    cin >> ey >> ex;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    queue<pair<int, int>> q;
    visited[sy][sx] = 1;
    q.push({sy, sx});
    while(q.size()){
        tie(y, x) = q.front(); q.pop();
        for(int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny >= n | nx >= m | ny < 0 | nx < 0) continue;
            if(!a[ny][nx]) continue;
            if(visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
    

    printf("%d\n", visited[ey][ex]); 





    return 0;
}