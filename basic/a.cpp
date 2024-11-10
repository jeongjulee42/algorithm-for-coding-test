#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

char adrian[3] = {'A', 'B', 'C'};
char bruno[4] = {'B', 'A', 'B', 'C'};
char goran[6] = {'C', 'C', 'A', 'A', 'B', 'B'};
int n, a, b, g;
string str;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   cin >> n;
   cin >> str;
   for(int i = 0; i < str.size(); i++){
      if(str[i] == adrian[i % 3]) a++;
      if(str[i] == bruno[i % 4]) b++;
      if(str[i] == goran[i % 6]) g++;
   }
   cout << max({a, b, g}) << '\n';
   if(max({a, b, g}) == a) cout << "Adrian" << '\n';
   if(max({a, b, g}) == b) cout << "Bruno" << '\n';
   if(max({a, b, g}) == g) cout << "Goran" << '\n';

   return 0;
}