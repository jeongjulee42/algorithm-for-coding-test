#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ary[100004];
int ret, n;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> n;
   for(int i = 0; i < n; i++) cin >> ary[i];
   sort(ary, ary + n);
   for(int i = 0; i < n; i++){
      ret = max(ret, ary[i] * (n - i));
   }
   cout << ret << '\n';

   return 0;
}