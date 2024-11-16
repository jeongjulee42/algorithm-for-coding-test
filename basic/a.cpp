#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string a, b;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   cin >> a >> b;
   reverse(a.begin(), a.end());
   reverse(b.begin(), b.end());
   int n1 = stoi(a);
   int n2 = stoi(b);
   string ret = to_string((n1 + n2));
   reverse(ret.begin(), ret.end());
   cout << stoi(ret) << '\n';

   return 0;
}