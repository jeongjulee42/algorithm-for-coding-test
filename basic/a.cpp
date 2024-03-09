#include <bits/stdc++.h>
using namespace std;

int num, res;
string str;
stack<char> stk;

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> num;
    for(int i = 0; i < num; i ++){
        cin >> str;
        for(char s : str){
            if(stk.size() == 0 || stk.top() != s) stk.push(s);
            else stk.pop();
        }
        if(stk.size() == 0) res++;
        while(stk.size() != 0) stk.pop();
    }
    cout << res << '\n';

    return 0;
}