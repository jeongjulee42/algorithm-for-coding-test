#include<bits/stdc++.h>
using namespace std;

struct ABC {int a; int b; int c;};
ABC endNum = {0, 0, 0};
int ary[3], dp[64][64][64], visited[64][64][64];
int n;
int num[6][3] = {
    {9, 3, 1},
    {9, 1, 3},
    {3, 9, 1},
    {3, 1, 9},
    {1, 9, 3},
    {1, 3, 9}
};

int solve(int a, int b, int c){
    queue<ABC> q;
    visited[a][b][c] = 1;
    q.push({a, b, c});
    while(q.size()){
        int a = q.front().a;
        int b = q.front().b;
        int c = q.front().c;
        q.pop();
        if(visited[0][0][0]) break;
        for(int i = 0; i < 6; i++){
            int na = max(0, a - num[i][0]);
            int nb = max(0, b - num[i][1]);
            int nc = max(0, c - num[i][2]);
            if(visited[na][nb][nc]) continue;
            visited[na][nb][nc] = visited[a][b][c] + 1;
            q.push({na, nb, nc});
        }
    }
    return visited[0][0][0] - 1;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> ary[i];
    }
    cout << solve(ary[0], ary[1], ary[2]) << '\n';

    return 0;
}