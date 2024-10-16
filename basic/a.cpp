#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> n;
   for(int i = n-1; i >= 0; i--){
      for(int j = 0; j < n - i - 1; j++) cout << ' ';
      for(int j = 0; j < i; j++) cout << '*';
      cout << '*';
      for(int j = 0; j < i; j++) cout << '*';
      cout << '\n';
   }

   return 0;
}