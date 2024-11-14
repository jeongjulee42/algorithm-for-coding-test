#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ret, a, b, now;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   for(int i = 0; i < 10; i++){
      cin >> a;
      now -= a;
      ret = max(ret, now);
      cin >> b;
      now += b;
      ret = max(ret, now);
   }
   cout << ret << '\n';

   return 0;
}