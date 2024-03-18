#include<bits/stdc++.h>
using namespace std;

int t;
int cnt;
int n, temp;

void go(int num){
    for(int i = 5; i <= num; i *= 5){
        cnt += num / i;
    }
}

int main(){
    cin >> t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    for(int i = 0; i < t; i++){
        cin >> n;
        cnt = 0;
        go(n);
        cout << cnt << '\n';
    }
    return 0;
}
