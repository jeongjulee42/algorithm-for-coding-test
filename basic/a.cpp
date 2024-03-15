#include<bits/stdc++.h>
using namespace std;
int n, m, num, start = 1, finish;
int cnt;
int tgt;



int main(){
    cin >> n >> m;
    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> tgt;
        finish = start + m - 1;
        while(start > tgt || finish < tgt){
            if(start > tgt){
                start --;
                finish --;
            }else if(finish < tgt){
                start ++;
                finish ++;
            }
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}