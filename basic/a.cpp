#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ary[104];
int n;

void go(){
   int s = ary[0];
   int ret = 1;
   for(int i = 1; i < n; i++){
      if(s < ary[i]){
         ret++;
         s = ary[i];
      }
   }
   cout << ret << '\n';
}

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> n;
   for(int i = 0; i < n; i++) cin >> ary[i];
   go();
   reverse(ary, ary + n);
   go();

   return 0;
}