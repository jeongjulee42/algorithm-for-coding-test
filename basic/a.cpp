#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
vector<int> v;
int ary[11];

bool check(vector<int> t){
   for(int i = 0; i < n; i++){
      if(ary[i] != t[i]) return false;
   }
   return true;
}

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> n;
   for(int i = 0; i < n; i++) cin >> ary[i];
   for(int i = 0; i < n; i++) v.push_back(i + 1);
   do{
      vector<int> temp;
      for(int i = 1; i <= n; i++){
         int num = 0;
         for(int j = 0; j < n; j++){
            if(v[j] > i) num++;
            else if(v[j] == i){
               temp.push_back(num);
            }
         }
      }
      if(check(temp)){
         for(int i = 0; i < n; i++) cout << v[i] << ' ';
         break;
      }
   }while(next_permutation(v.begin(), v.end()));

   return 0;
}