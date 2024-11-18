#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

char ary[51][51];
int r, c, zr, zc;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   cin >> r >> c >> zr >>zc;
   for(int i = 0; i < r; i++){
      for(int j = 0; j < c; j++){
         cin >> ary[i][j];
      }
   }
   for(int i = 0; i < r; i++){
      for(int j = 0; j < zr; j++){
         for(int k = 0; k < c; k++){
            for(int l = 0; l < zc; l++){
               cout << ary[i][k];
            }
         }
         cout << '\n';
      }
   }

   return 0;
}