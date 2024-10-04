#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, ret, a, b, c, maxVal;
int visited[10004];
vector<pair<int, int>> v[10004];

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> n;
   for(int i = 0; i < n - 1; i++){
      cin >> a >> b >> c;
      v[a].push_back({b, c});
      v[b].push_back({a, c});
   }
   queue<int> q;
   q.push(1);
   while(q.size()){
      int num = q.front();
      q.pop();
      for(auto t : v[num]){
         if(visited[t.first] || t.first == 1) continue;
         visited[t.first] = visited[num] + t.second;
         q.push(t.first);
      }
   }
   int start = 0;
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
      for(auto t : v[num]){
         if(visited[t.first] || t.first == start) continue;
         visited[t.first] = visited[num] + t.second;
         q1.push(t.first);
      }
   }
   int ret = 0;
   for(int i = 1; i <= n; i++){
      ret = max(ret, visited[i]);
   }
   cout<< ret << '\n';

   return 0;
}
