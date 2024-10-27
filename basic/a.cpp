#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int go(int num){
   int a = num % 10;
   int b = ((num / 10) + a) % 10;
   return a * 10 + b;
}

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   cin >> n;
   int ret = 1;
   int temp = go(n);
   while(1){
      if(temp == n){
         cout << ret << '\n';
         break;
      }
      ret++;
      temp = go(temp);
   }

   return 0;
}