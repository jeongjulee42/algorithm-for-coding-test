#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Pos{int z; int y; int x;};
int ary[104][104][104], visited[104][104][104], m, n, h, ret;
queue<Pos> q;
int dz[] = {1, -1, 0, 0, 0, 0};
int dy[] = {0, 0, 1, -1, 0, 0};
int dx[] = {0, 0, 0, 0, 1, -1};

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> m >> n >> h;
   for(int i = 0; i < h; i++){
      for(int j = 0; j < n; j++){
         for(int k = 0; k < m; k++){
            cin >> ary[i][j][k];
            if(ary[i][j][k] == 1) {
               q.push({i, j, k});
               visited[i][j][k] = 1;   
            }
            else if(ary[i][j][k] == -1) visited[i][j][k] = -1;
         }
      }
   }
   while(q.size()){
      int tz = q.front().z;
      int ty = q.front().y;
      int tx = q.front().x;
      q.pop();
      for(int i = 0; i < 6; i++){
         int nz = tz + dz[i];
         int ny = ty + dy[i];
         int nx = tx + dx[i];
         if(nz < 0 || ny < 0 || nx < 0 || nz >= h || ny >= n || nx >= m || visited[nz][ny][nx]) continue;
         q.push({nz, ny, nx});
         visited[nz][ny][nx] = visited[tz][ty][tx] + 1;
      }
   }
   for(int i = 0; i < h; i++){
      for(int j = 0; j < n;  j++){
         for(int k = 0; k < m; k++){
            if(visited[i][j][k] == 0){
               cout << -1 << '\n';
               exit(0);
            }
            ret = max(ret, visited[i][j][k]);
         }
      }
   }
   cout << ret - 1 << '\n';

   return 0;
}
