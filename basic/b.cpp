#include <bits/stdc++.h>
using namespace std;

int r, c, temp;
char a[1000][1000];
int visited[1000][1000];
vector<int> ret;
vector<pair<int,int>> fire;
int ny, nx, fy, fx;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void go(int y, int x){
    for(int i = 0; i < 4; i++){
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= r || nx >= c){
            ret.push_back(visited[y][x]);
            return;
        }
        if(visited[ny][nx]) continue;
        if(a[ny][nx] == '#' || a[ny][nx] == 'F') continue;
        visited[ny][nx] = visited[y][x] + 1;
        go(ny, nx);
    }
    return;
}


int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    pair<int, int> p;
    cin >> r >> c;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> a[i][j];
            if(a[i][j] == 'J'){
                p.first = i;
                p.second = j;
            }
            else if(a[i][j] == 'F'){
                fire.push_back({i,j});
            }
        }
    }
    visited[p.first][p.second] = 1;
    go(p.first, p.second);
    temp = 2000;
    if(!ret.size()) cout << "IMPOSSIBLE" << '\n';
    else{
        int temp = 2000;
        for(int z : ret) temp = min(z, temp);
        cout << temp << '\n';
    }

    return 0;
}