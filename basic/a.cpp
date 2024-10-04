#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, a, b, c;
int visited[100004];
vector<pair<int, int>> v[100004]; // {도착노드, 해당노드까지의거리} 

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> n;
   for(int i = 1; i <= n; i++){
      cin >> a;
      while(1){
         cin >> b;
         if(b == -1) break;
         cin >> c;
         v[a].push_back({b, c});
      }
   }
   // bfs 1회
   queue<int> q;
   q.push(1);
   while(q.size()){
      int num = q.front();
      q.pop();
      for(auto temp : v[num]){
         if(visited[temp.first] || temp.first == 1){
            continue;
         }
         visited[temp.first] = visited[num] + temp.second;
         q.push(temp.first);
      }
   }
   int start = 0;
   int maxVal = 0;
   for(int i = 1; i <= n; i++){
      if(visited[i] > maxVal){
         maxVal = visited[i];
         start = i;
      }
      visited[i] = 0;
   }
   
   queue<int> q1;
   q1.push(start);
   while(q1.size()){
      int num = q1.front();
      q1.pop();
      for(auto temp : v[num]){
         if(visited[temp.first] || temp.first == start){
            continue;
         }
         visited[temp.first] = visited[num] + temp.second;
         q1.push(temp.first);
      }
   }
   int ret = 0;
   for(int i = 1; i <= n; i++){
      ret = max(ret, visited[i]);
   }
   cout << ret << '\n';

   return 0;
}
