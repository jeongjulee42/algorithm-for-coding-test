#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ary[5];

void swap(int a, int b){
   int temp = ary[a];
   ary[a] = ary[b];
   ary[b] = temp;
}
void print(){
   for(int i = 0; i < 5; i++) cout << ary[i] << ' ';
   cout << '\n';
}

bool go(){
   bool flag = true;
   if(ary[0] > ary[1]){
      swap(0, 1);
      print();
   }
   if(ary[1] > ary[2]){
      swap(1, 2);
      print();
   }
   if(ary[2] > ary[3]){
      swap(2, 3);
      print();
   }
   if(ary[3] > ary[4]){
      swap(3, 4);
      print();
   }
   for(int i = 0; i < 5; i++){
      if(ary[i] != i + 1) flag = false;
   }
   return flag;
}


int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

   for(int i = 0; i < 5; i++) cin >> ary[i];
   while(1){
      bool f = go();
      if(f) break;
   }

   return 0;
}