#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ary[10];
int t, x;

int check(int n){
   for(int i = 0; i < 10; i++){
      ary[i] = 0;
   }
   string temp = to_string(n);
   for(int i = 0; i < temp.size(); i++){
      ary[temp[i] - '0']++;
   }
   int ret = 0;
   for(int i = 0; i < 10; i++){
      if(ary[i]) ret++;
   }
   return ret;
}

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> t;
   for(int i = 0; i < t; i++){
      cin >> x;
      cout << check(x) << '\n';
   }

   return 0;
}