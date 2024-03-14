#include<bits/stdc++.h>
using namespace std;
int tot, n, m, ny, nx, y, x, num, ret;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int a[50][50];
bool visited[50][50];

void dfs(int y, int x){
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++){
        ny = dy[i] + y;
        nx = dx[i] + x;
        if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
        if(visited[ny][nx]) continue;
        if(a[ny][nx] == 0) continue;
        dfs(ny, nx);
    }
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> tot;
    for(int i = 0; i < tot; i++){
        memset(a, 0, sizeof(a));
        memset(visited, 0, sizeof(visited));
        ret = 0;
        cin >> m >> n >> num;
        for(int j = 0; j < num; j++){
            cin >> x >> y;
            a[y][x] = 1;
        }
        for(int j = 0; j < 50; j++){
            for(int k = 0; k < 50; k++){
                if(visited[j][k] == 0 && a[j][k]) {
                    dfs(j, k);
                    ret++;
                }
            }
        }
        cout << ret << '\n';
    }



    return 0;
}