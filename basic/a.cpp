#include<bits/stdc++.h>
using namespace std;

string input;
vector<char> b = {'(', ')', '[', ']'};

int main(){
    while(1){
        getline(cin, input);
        if(input == ".") break;

        stack<char> stk;
        for(int i = 0; i < input.size(); i++){
            if(find(b.begin(), b.end(), input[i]) == b.end()) continue;
            if (stk.size() != 0 && ((stk.top() == '(' && input[i] == ')') || (stk.top() == '[' && input[i] == ']'))){
                stk.pop();
            } else stk.push(input[i]);
        }
        if(stk.size() != 0) cout << "no" << '\n';
        else cout << "yes" << '\n';
    }

    return 0;
}
