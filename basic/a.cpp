#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string num;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   while(1){
      cin >> num;
      if(num == "0") break;
      int ret = 0;
      for(int i = 0; i < num.size(); i++){
         if(num[i] == '1') ret += 2;
         else if(num[i] == '0') ret += 4;
         else ret += 3;
      }
      cout << ret + num.size() + 1 << '\n';
   }

   return 0;
}