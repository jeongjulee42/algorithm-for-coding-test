#include<bits/stdc++.h>
using namespace std;

int num;
string file, f_s, f_e, inpt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> num;
    cin >> file;
    f_s = file.substr(0, file.find('*'));
    f_e = file.substr(file.find('*') + 1);
    
    vector<string> res;
    for(int i = 0; i < num; i++){
        cin >> inpt;
        if(inpt.size() < f_s.size() + f_e.size()) res.push_back("NE");
        else if(inpt.substr(0, f_s.size()) != f_s) res.push_back("NE");
        else if (inpt.substr(inpt.size() - f_e.size()) != f_e) res.push_back("NE");
        else res.push_back("DA");
    }
    for(string s : res) cout << s << '\n';
    return 0;
}