#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, ary[91];

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> n;
   ary[1] = 1;
   for(int i = 2; i <= n; i++){
      ary[i] = ary[i-1] + ary[i-2];
   }
   cout << ary[n];

   return 0;
}