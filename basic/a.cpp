#include<bits/stdc++.h>
using namespace std;

stack<char> stk;
string s;
int n;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        for(int j = 0; j < s.size(); j++){
            if(stk.size() == 1 && stk.top() == ')') break;
            else if(stk.size() != 0 && stk.top() != s[j]) stk.pop();
            else stk.push(s[j]);
        }
        if(stk.size()) cout << "NO" << '\n';
        else cout << "YES" << '\n';
        while(stk.size()) {
            stk.pop();
        }
    }
    return 0;
}
