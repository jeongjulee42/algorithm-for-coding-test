#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int a, b, c;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   cin >> a >> b >> c;
   cout << max({c - b, b - a}) - 1 << '\n'; 

   return 0;
}