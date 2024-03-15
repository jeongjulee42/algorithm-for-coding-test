#include<bits/stdc++.h>
using namespace std;

string input;
string yes = "> is acceptable.";
string no = "> is not acceptable.";
vector<char> v = {'a', 'e', 'o', 'i', 'u'};

int main(){
    while(1){
        cin >> input;
        if(input == "end") break;
        int flag = 1;
        for(int i = 0; i < v.size(); i++){
            if(input.find(v[i]) != string::npos) flag = 0;
        }
        char c = '0';
        int aword = 0;
        int bword = 0;
        for(int i = 0; i < input[i]; i++){
            if(find(v.begin(), v.end(), input[i]) == v.end()){
                bword ++;
                aword = 0;
            }else{
                aword ++;
                bword = 0;
            }
            if(aword == 3 or bword == 3){
                flag = 1;
                break;
            }
            if(c == input[i]){
                string str = "";
                str.append(1,c);
                str += input[i];
                if(str != "ee" && str != "oo"){
                    flag = 1;
                    break;
                }
            }
            c = input[i];
        }
        if(flag) cout << "<" + input + no << '\n';
        else cout << "<" + input + yes << '\n';
    }

    return 0;
}