#include<bits/stdc++.h>
using namespace std;

char ary[20][20];
int visited[20][20];
int r, c, maxVal = 1;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int alpha[26];
vector<int> ret;

void go(int y, int x){
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny >= r || nx >= c || ny < 0 || nx < 0) continue;
        if(visited[ny][nx]) continue;
        if(alpha[ary[ny][nx] - 65] == 1) continue;
        alpha[ary[ny][nx] - 65] = 1;
        visited[ny][nx] = visited[y][x] + 1;
        go(ny, nx);
        int temp = visited[ny][nx];
        maxVal = max(maxVal, temp);
        visited[ny][nx] = 0;
        alpha[ary[ny][nx] - 65] = 0;
    }
}

int main(){

    cin >> r >> c;
    for(int i = 0; i < r; i++){
        string str = "";
        cin >> str;
        for(int j = 0; j < str.size(); j++){
            ary[i][j] = str[j];
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << ary[i][j];
        }
        cout << '\n';
    }
    alpha[ary[0][0] - 65] = 1;
    visited[0][0] = 1;
    go(0, 0);
    cout << maxVal << '\n';

    return 0;
}