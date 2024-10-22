#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, num;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   for(int i = 0; i < 3; i++){
      num = 0;
      for(int j = 0; j < 4; j++) {
         cin >> n;
         if(n == 0) num++;
      }
      if(num == 0) cout << 'E' << '\n';
      else if(num == 1) cout << 'A' << '\n';
      else if(num == 2) cout << 'B' << '\n';
      else if(num == 3) cout << 'C' << '\n';
      else cout << 'D' << '\n';
   }

   return 0;
}