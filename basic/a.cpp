#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

queue<int> q;
int n, k;

int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

  cin >> n >> k;

  queue<int> q;

  cout << '<';
  for (int i = 1; i <= n; i++)
    q.push(i);

  while (!q.empty()){
    for (int i = 0; i < k - 1; i++){
      q.push(q.front());
      q.pop();
    }
    cout << q.front();
    q.pop();

    if (q.empty()) cout << '>';
    else cout << ", ";
  }
  return 0;
}