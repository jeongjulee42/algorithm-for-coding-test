#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ary[100][100], n, m, k, tx, ty, ret;
int dy[] = {0, 1, 0, -1};
int dx[] = {1, 0, -1, 0};
bool visited[100][100];

int go(int y, int x){
   visited[y][x] = 1;
   int t = 0;
   for(int i = 0; i < 4; i++){
      int ny = y + dy[i];
      int nx = x + dx[i];
      if(ny < 0 || nx < 0 || ny >= 100 || nx >= 100 || visited[ny][nx]) continue;
      if(ary[ny][nx] == 0) continue;
      t += go(ny, nx);
   }
   return t + 1;
}

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> n >> m >> k;
   for(int i = 0; i < k; i++){
      cin >> ty >> tx;
      ary[ty-1][tx-1] = 1;
   }
   for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
         if(visited[i][j]) continue;
         if(ary[i][j] == 0) continue;
         int temp = go(i, j);
         ret = max(ret, temp);
      }
   }
   cout << ret << '\n';

   return 0;
}
