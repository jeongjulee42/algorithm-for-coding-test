#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, ary[100004], len[100004];
ll money;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> n;
   for(int i = 0; i < n-1; i++) cin >> len[i];
   for(int i = 0; i < n; i++) cin >> ary[i];
   ll lenSum = len[0];
   ll start = ary[0];
   for(int i = 1; i < n - 1; i++){
      if(ary[i] < start){
         money += lenSum * start;
         lenSum = len[i];
         start = ary[i];
      } else {
         lenSum += len[i];
      }
   }
   money += lenSum * start;
   cout << money << '\n';

   return 0;
}
