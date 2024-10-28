#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ary[10], t;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> t;
   for(int i = 0; i < t; i++){
      for(int j = 0; j < 10; j++) cin >> ary[j];
      sort(ary, ary + 10);
      cout << ary[7] << '\n';
   }

   return 0;
}