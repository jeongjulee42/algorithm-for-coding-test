#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, w, h, temp;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   cin >> n >> w >> h;
   for(int i = 0; i < n; i++){
      cin >> temp;
      if(temp * temp <= w * w + h * h) cout << "DA" << '\n';
      else cout << "NE" << '\n';
   }

   return 0;
}