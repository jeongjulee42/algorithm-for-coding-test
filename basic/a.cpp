#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int t;
string a, b;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   cin >> t;
   for(int z = 0; z < t; z++){
      cin >> a >> b;
      int ret = 0;
      for(int i = 0; i < a.size(); i++){
         if(a[i] != b[i]) ret++;
      }
      cout << "Hamming distance is " << ret << '.' << '\n';
   }

   return 0;
}