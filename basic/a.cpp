#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, sum, ret, num;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> n;
   for(int i = 0; i < n; i++){
      ret = 987654321;
      sum = 0;
      for(int j = 0; j < 7; j++){
         cin >> num;
         if(num % 2 == 0){
            sum += num;
            ret = min(ret, num);
         }
      }
      cout << sum << ' ' << ret << '\n';
   }

   return 0;
}