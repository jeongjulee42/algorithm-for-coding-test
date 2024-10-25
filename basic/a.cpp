#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ary[104], adj[104], ret, n;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> n;
   for(int i = 1; i <= n; i++) cin >> ary[i];
   for(int i = 1; i <= n; i++){
      if(ary[i]) adj[i] = adj[i-1] + 1;
      ret += adj[i];
   }
   cout << ret << '\n';

   return 0;
}