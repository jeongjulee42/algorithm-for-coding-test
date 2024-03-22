#include <bits/stdc++.h>
using namespace std;

int n, r, l, ny, nx, ret, flag, sum;
int ary[50][50];
int visited[50][50];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
vector<pair<int, int>> temp;

void dfs(int y, int x){
    temp.push_back({y, x});
    sum += ary[y][x];
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++){
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny >= n || nx >= n || ny < 0 || nx < 0) continue;
        if(visited[ny][nx]) continue;
        if(abs(ary[y][x] - ary[ny][nx]) < r || abs(ary[y][x] - ary[ny][nx]) > l) continue;
        dfs(ny, nx);
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> r >> l;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> ary[i][j];
        }
    }
    ret = 0;
    while(true){
        memset(visited, 0, sizeof(visited));
        flag = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(visited[i][j] == 1) continue;
                sum = 0;
                temp.clear();
                dfs(i, j);
                int val = sum / temp.size();
                for(auto t : temp){
                    ary[t.first][t.second] = val;
                }
                flag++;
            }
        }
        if(flag == n*n) break;
        ret ++;
    }
    cout << ret << '\n';
    return 0;
}