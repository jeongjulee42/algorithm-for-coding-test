#include <bits/stdc++.h>
using namespace std;

int n;
string inpt;
int flag, zflag;
string num;
vector<string> ret;

bool cmp(string& a, string& b){
    if(a.size() != b.size()) return a.size() < b.size();
    else return a < b;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> inpt;
        flag = 0; num = ""; zflag = 0;
        for(int j = 0; j < inpt.size(); j++){
            if(inpt[j] - '0' < 10){
                flag = 1;
                if(inpt[j] == '0' && zflag == 0) num = "";
                else {
                    num += inpt[j];
                    zflag = 1;
                }
            } else {
                if(flag == 1) ret.push_back(num);
                flag = 0; num = ""; zflag = 0;
            }
        }
        if(flag == 1) ret.push_back(num);
    }
    for(int i = 0; i < ret.size(); i++) if(ret[i] == "") ret[i] = "0";
    sort(ret.begin(), ret.end(), cmp);
    for(string i : ret) cout << i << '\n';
    

    return 0;
}