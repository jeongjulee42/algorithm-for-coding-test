#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string str, ret;



int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> str;
   for(int i = 0; i < str.size(); i++){
      if(str[i] - 'a' >= 0){
         cout << char(str[i] - 'a' + 'A');
      }else{
         cout << char(str[i] - 'A' + 'a');
      }
   }
   cout << ret << '\n';

   return 0;
}