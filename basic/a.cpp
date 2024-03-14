#include<bits/stdc++.h>
using namespace std;

int n, ny, nx, ret = 1;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int a[100][100];
int original[100][100];
bool visited[100][100];
set<int> st;

void dfs(int y, int x){
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++){
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny >= n || nx >= n || nx < 0 || ny < 0)continue;
        if(visited[ny][nx]) continue;
        if(a[ny][nx] > 0){
            dfs(ny, nx);
        }
    }
    return;
}

int main(){

    cin >> n;
    st.insert(0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            st.insert(a[i][j]);
            original[i][j] = a[i][j];
        }
    }
    for(int i : st){
        int res = 0;
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                a[j][k] = original[j][k] - i;
            }
        }
        memset(visited, 0, sizeof(visited));
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(visited[j][k] == 0 && a[j][k] > 0){
                    dfs(j, k);
                    res ++;
                }
            }
        }
        ret = max(ret, res);
    }
    cout << ret << '\n';

    return 0;
}