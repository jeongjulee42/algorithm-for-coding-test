#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, ret;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   for(int i = 0; i < 5; i++){
      cin >> n;
      ret = (ret + (n * n)) % 10;
   }
   cout << ret << '\n';

   return 0;
}