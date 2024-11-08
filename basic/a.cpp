#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string str, ret;

bool check(char c){
   if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
   return false;
}

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   getline(cin, str);
   for(int i = 0; i < str.size(); i++){
      if(check(str[i]) && i + 2 < str.size()){
         if(str[i + 1] == 'p' && str[i + 2] == str[i]){
            i += 2;
         }
      }
      ret += str[i];
   }
   cout << ret << '\n';

   return 0;
}