#include<bits/stdc++.h>
using namespace std;

int r, c, k;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
char ary[5][5];
int visited[5][5];
vector<int> ret;

void go(int y, int x){
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny >= r || nx >= c || ny < 0 || nx < 0) continue;
        if(visited[ny][nx]) continue;
        if(ary[ny][nx] == 'T') continue;
        if(ny == 0 && nx == c - 1){
            ret.push_back(visited[y][x] + 1);
        }
        visited[ny][nx] = visited[y][x] + 1;
        go(ny, nx);
        visited[ny][nx] = 0;
    }
    return;
}

int main(){

    cin >> r >> c >> k;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> ary[i][j];
        }
    }
    visited[r - 1][0] = 1;
    go(r - 1, 0);
    int cnt = 0;
    for(int v : ret){
        if(k == v) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}