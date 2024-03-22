#include <bits/stdc++.h>
using namespace std;

int ary[50][50];
int visited[50][50];
int n, m, cnt, ny, nx;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
vector<int> ret;

void bfs(int y, int x){
    queue<pair<int, int>> q;
    visited[y][x] = 1;
    q.push({y, x});
    while(q.size()){
        tie(y, x) = q.front(); q.pop();
        for(int i = 0; i < 4; i++){
            ny = y + dy[i];
            nx = x + dx[i];
            if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if(visited[ny][nx]) continue;
            if(ary[ny][nx] == 0) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cnt = max(cnt, visited[i][j]);
        }
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char c = ' ';
            cin >> c;
            if(c == 'W') ary[i][j] = 0;
            else if(c == 'L') ary[i][j] = 1;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            memset(visited, 0, sizeof(visited));
            cnt = 0;
            if(ary[i][j] == 0) continue;
            bfs(i, j);
            ret.push_back(cnt);
        }
    }
    int temp = 0;
    for(int a : ret){
        temp = max(temp, a);
    }
    cout << temp - 1 << '\n';
    
    return 0;
}