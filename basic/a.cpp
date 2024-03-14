#include<bits/stdc++.h>
using namespace std;

int m, n, k, ny, nx, res, ret;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int a[100][100];
int visited[100][100];
vector<int> v;

void dfs(int y, int x){
    visited[y][x] = 1;
    ret ++;
    for(int i = 0; i < 4; i++){
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny >= n || nx >= m || ny < 0 || nx < 0) continue;
        if(visited[ny][nx]) continue;
        if(a[ny][nx]){
            dfs(ny, nx);
        }
    }
    return;
}

int main(){

    cin >> n >> m >> k;
    fill(&a[0][0], &a[0][0] + 100 * 100, 1);
    for(int i = 0; i < k; i++){
        int sy, sx, ey, ex;
        cin >> sx >> sy >> ex >> ey;
        for(int j = sy; j < ey; j++){
            for(int k = sx; k < ex; k++){
                a[j][k] = 0;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 1 & visited[i][j] == 0){
                ret = 0;
                dfs(i, j);
                res ++;
                v.push_back(ret);
            }
        }
    }
    cout << res << '\n';
    sort(v.begin(), v.end());
    for(int i : v) cout << i << " ";
    cout << '\n';

    return 0;
}