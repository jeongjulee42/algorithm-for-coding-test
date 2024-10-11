#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ary[10001];
int sum[10001];
int n, m, ret;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> n >> m;
   for(int i = 1; i <= n; i++){
      cin >> ary[i];
      sum[i] = ary[i] + sum[i-1];
   }
   for(int i = 1; i <= n; i++){
      for(int j = 0; j < i; j++){
         if(sum[i] - sum[j] == m) ret++;
         else if(sum[i] - sum[j] < m) continue;
      }
   }
   cout << ret << '\n';

   return 0;
}