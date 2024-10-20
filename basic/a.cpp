#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int a, b, ret, now;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   for(int i = 0; i < 4; i++){
      cin >> a >> b;
      now = now - a + b;
      ret = max(ret, now);
   }
   cout << ret << '\n';

   return 0;
}