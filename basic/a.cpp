#include<bits/stdc++.h>
using namespace std;

int n, m, sy, sx, ey, ex, flag, y, x;
char ary[300][300];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
vector<pair<int, int>> temp;
vector<pair<int, int>> zero;
queue<pair<int, int>> q;

void go(){
    while(q.size()){
        tie(y, x) = q.front(); q.pop();
        for(int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny >= n || nx >= m || ny < 0 || nx < 0) continue;
            if(ary[ny][nx] == '*') continue;
            if(ary[ny][nx] == '1') {
                zero.push_back({ny, nx});
                temp.push_back({y, x});
                continue;
            }
            if(ny == ey && nx == ex){
                flag = 1;
                return;
            }
            ary[ny][nx] = '*';
            temp.push_back({ny, nx});
            q.push({ny, nx});
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    cin >> sy >> sx >> ey >> ex;
    sy -= 1; sx -= 1; ey -= 1; ex -= 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> ary[i][j];
        }
    }
    int cnt = 0;
    q.push({sy, sx});
    while(!flag){
        go();
        for(int i = 0; i < zero.size(); i++){
            ary[zero[i].first][zero[i].second] = '0';
        }
        zero.clear();
        for(int i = 0; i < temp.size(); i++){
            q.push({temp[i].first, temp[i].second});
        }
        temp.clear();
        cnt++;
    }
    cout << cnt << '\n';
    return 0;
}