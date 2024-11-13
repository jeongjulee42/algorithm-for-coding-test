#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string a, b;
char c;
int ary[101];

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   cin >> a >> c >> b;
   if(c == '*'){
      cout << 1;
      for(int i = 0; i < a.size() + b.size() - 2; i++) cout << 0;
      cout << '\n';
   }else{
      reverse(a.begin(), a.end());
      reverse(b.begin(), b.end());
      for(int i = 0; i < a.size(); i++){
         ary[i] += a[i] - '0';
      }
      for(int i = 0; i < b.size(); i++){
         ary[i] += b[i] - '0';
      }
      string ret = "";
      for(int i = 0; i < max(a.size(), b.size()); i++){
         ret += ary[i] + '0';
      }
      reverse(ret.begin(), ret.end());
      cout << ret << '\n';
   }

   return 0;
}