#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ary[3];

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   for(int i = 0; i < 3; i++){
      cin >> ary[i];
   }
   sort(ary, ary + 3);
   for(int i = 0; i < 3; i++){
      cout << ary[i] << ' ';
   }

   return 0;
}