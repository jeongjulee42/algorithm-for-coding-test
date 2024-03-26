#include<bits/stdc++.h>
using namespace std;

char ary[1000][1000];
int visited[1000][1000];
int r, c, sy, sx, y, x;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
vector<pair<int, int>> fire;
vector<int> ret;

int main(){
    cin >> r >> c;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> ary[i][j];
            if(ary[i][j] == 'F') fire.push_back({i, j});
            else if(ary[i][j] == 'J'){
                sy = i;
                sx = j;
            }
        }
    }
    visited[sy][sx] = 1;
    queue<pair<int, int>> q;
    q.push({sy, sx});
    int fireCnt = 0;
    while(q.size()){
        tie(y, x) = q.front(); q.pop();
        if(fireCnt != visited[y][x]){
            fireCnt = visited[y][x];
            vector<pair<int, int>> temp;
            for(int i = 0; i < fire.size(); i++){
                for(int j = 0; j < 4; j++){
                    int fy = fire[i].first + dy[j];
                    int fx = fire[i].second + dx[j];
                    if(fy < 0 || fx < 0 || fy >= r || fx >= c) continue;
                    if(ary[fy][fx] == '#' || ary[fy][fx] == 'F') continue;
                    ary[fy][fx] = 'F';
                    temp.push_back({fy, fx});
                }
            }
            fire.clear();
            for(int i = 0; i < temp.size(); i++){
                fire.push_back(temp[i]);
            }
        }

        for(int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || nx < 0 || ny >= r || nx >= c){
                ret.push_back(visited[y][x]);
                continue;
            }
            if(visited[ny][nx]) continue;
            if(ary[ny][nx] == 'F' || ary[ny][nx] == '#') continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
    
    int minVal = 1000004;
    if(!ret.size()) cout << "IMPOSSIBLE" << '\n';
    else{
        for(int v : ret){
            minVal = min(v, minVal);
        }
        cout << minVal << '\n';
    }
    return 0;
}