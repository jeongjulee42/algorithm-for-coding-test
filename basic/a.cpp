#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

char t;
int ret;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   for(int i = 0; i < 8; i++){
      for(int j = 0; j < 8; j++){
         cin >> t;
         if((i + j) % 2 == 0 && t == 'F') ret++;
      }
   }
   cout << ret << '\n';

   return 0;
}
