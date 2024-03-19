#include <bits/stdc++.h>
using namespace std;

int n, m;
int ary[8][8];
int visited[8][8];
int cnt; // 2개수;
int cntOne;
vector<int> ret;
vector<pair<int, int>> twoCordi;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int ny, nx;

void go(int y, int x){
    visited[y][x] = 1;
    cnt++;
    for(int i = 0; i < 4; i++){
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny >= n || nx >= m || ny < 0 || nx < 0) continue;
        if(visited[ny][nx]) continue;
        if(ary[ny][nx] == 0 || ary[ny][nx] == 2){
            go(ny, nx);
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> ary[i][j];
            if(ary[i][j] == 1) cntOne++;
            else if(ary[i][j] == 2) twoCordi.push_back({i, j});
        }
    }
    int tot = n * m;
    for(int i = 0; i < tot; i++){
        if(ary[i/m][i%m] == 0){
            for(int j = i + 1; j < tot; j++){
                if(ary[j/m][j%m] == 0){
                    for(int k = j + 1; k < tot; k++){
                        if(ary[k/m][k%m] == 0){
                            memset(visited, 0, sizeof(visited));
                            cnt = 0;
                            ary[i/m][i%m] = 1;
                            ary[j/m][j%m] = 1;
                            ary[k/m][k%m] = 1;
                            for(int d = 0; d < twoCordi.size(); d++){
                                if(visited[twoCordi[d].first][twoCordi[d].second]) continue;
                                go(twoCordi[d].first, twoCordi[d].second);
                            }
                            ret.push_back(n*m - 3 - cntOne - cnt);
                            ary[i/m][i%m] = 0;
                            ary[j/m][j%m] = 0;
                            ary[k/m][k%m] = 0;
                        }
                    }
                }
            }
        }
    }


    sort(ret.begin(), ret.end(), greater<int>());
    cout << ret[0] << '\n';
    return 0;
}