#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, a, b, c, ret, temp;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> n;
   for(int i = 0; i < n; i++){
      cin >> a >> b >> c;
      if(a == b && b == c){
         temp = 10000 + (a * 1000);
      }else if(a == b || b == c){
         temp = 1000 + (b * 100);
      }else if(a == c){
         temp = 1000 + (a * 100);
      }else{
         temp = max({a, b, c}) * 100;
      }
      ret = max(temp, ret);
   }
   cout << ret << '\n';

   return 0;
}