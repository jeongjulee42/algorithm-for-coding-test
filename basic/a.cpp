#include <bits/stdc++.h>
using namespace std;
int n, cnt = 1;
int pre, suf;


int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    int i = 666;
    for(;; i++){
        if(to_string(i).find("666") != string::npos)n--;
        if(n == 0)break;
    }
    cout << i << '\n';
    return 0;
}