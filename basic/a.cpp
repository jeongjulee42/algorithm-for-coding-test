#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> n;
   for(int i = n; i > 0; i--){
      for(int j = 0; j < n - i; j++) cout << ' ';
      for(int j = i; j > 0; j--) cout << '*';
      cout << '\n';
   }

   return 0;
}