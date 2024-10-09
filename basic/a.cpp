#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
string str;
map<string, int> mp;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   cin >> n;
   for(int i = 0; i < n; i++){
      cin >> str;
      mp[str]++;
   }
   int maxnum = 0;
   string maxname = "";
   for(auto m : mp){
      if(maxnum < m.second){
         maxnum = m.second;
         maxname = m.first;
      }
   }
   cout << maxname << '\n';

   return 0;
}