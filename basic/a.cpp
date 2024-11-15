#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string a, b;
ll ret;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   cin >> a >> b;
   for(int i = 0; i < a.size(); i++){
      for(int j = 0; j < b.size(); j++){
         ret += (a[i] - '0') * (b[j] - '0');
      }
   }
   cout << ret << '\n';

   return 0;
}