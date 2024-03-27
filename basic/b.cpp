#include<bits/stdc++.h>
using namespace std;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
char ary[1500][1500];
bool visited[1500][1500];
int r, c, sy, sx, ey, ex, y, x, flag;
vector<pair<int, int>> rmv;
queue<pair<int, int>> q;

void bfs(){
    while(q.size()){
        tie(y, x) = q.front(); q.pop();
        for(int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny >= r || nx >= c || ny < 0 || nx < 0) continue;
            if(visited[ny][nx]) continue;
            if(ary[ny][nx] == 'X'){
                rmv.push_back({ny, nx});
                visited[ny][nx] = 1;
                continue;
            }
            visited[ny][nx] = 1;
            q.push({ny, nx});
        }
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> r >> c;
    int inputFlag = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> ary[i][j];
            if(ary[i][j] == 'L' && inputFlag == 0){
                sy = i; sx = j;
                inputFlag = 1;
            }else if(ary[i][j] == 'L'){
                ey = i; ex = j;
            }
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(visited[i][j]) continue;
            if(ary[i][j] == 'L' || ary[i][j] == '.'){
                visited[i][j] = 1;
                q.push({i, j});
                bfs();
            }
        }
    }
    int cnt = 1;
    while(!flag){
        for(int i = 0; i < rmv.size(); i++){
            ary[rmv[i].first][rmv[i].second] = '.';
            q.push({rmv[i].first, rmv[i].second});
        }
        rmv.clear();
        bfs();
        if(flag) break;
        cnt++;
    }
    cout << cnt << '\n';
    return 0;
}