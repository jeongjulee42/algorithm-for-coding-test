#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ary[10][10], visited[10][10], n, m, x, y, u, v;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> n >> m;
   for(int i = 0; i < n; i++){
      cin >> x >> y;
      ary[(x-1)/10][(x-1)%10] = y-1;
   }
   for(int i = 0; i < m; i++){
      cin >> u >> v;
      ary[(u-1)/10][(u-1)%10] = v-1;
   }
   queue<int> q;
   q.push(0);
   while(q.size()){
      int num = q.front();
      q.pop();
      for(int i = 1; i <= 6; i++){
         int dn = num + i;
         if(dn >= 100) continue;
         if(visited[dn/10][dn%10]) continue;
         if(ary[dn/10][dn%10]){
            int temp = ary[dn/10][dn%10];
            if(visited[temp/10][temp%10]) continue;
            visited[dn/10][dn%10] = visited[num/10][num%10] + 1;
            visited[temp/10][temp%10] = visited[dn/10][dn%10];
            q.push(temp);
         }else{
            visited[dn/10][dn%10] = visited[num/10][num%10] + 1;
            q.push(dn);
         }
      }
   }

   cout << visited[9][9] << '\n';

   return 0;
}
