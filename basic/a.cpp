#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> n;
   for(int i = -1 * (n - 1); i < n; i++){
      int num = abs(i);
      for(int j = 0; j < n - num; j++) cout << '*';
      for(int j = 0; j < num; j++) cout << ' ';
      for(int j = 0; j < num; j++) cout << ' ';
      for(int j = 0; j < n - num; j++) cout << '*';
      cout << '\n';
   }
   return 0;
}