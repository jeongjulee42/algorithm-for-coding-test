#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int num, ret, n;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   for(int i = 1; i <= 5; i++){
      int temp = 0;
      for(int j = 0; j < 4; j++){
         cin >> n;
         temp += n;
      }
      if(ret < temp){
         ret = temp;
         num = i;
      }
   }
   cout << num << ' ' << ret << '\n';

   return 0;
}