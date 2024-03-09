#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> mp;
int a, b;
string c, str;
vector<string> v;

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> a >> b;
    for(int i = 0; i < a; i++){
        cin >> str;
        mp.insert({str, i + 1});
        v.push_back(str);
    }
    for(int i = 0; i < b; i++){
        cin >> c;
        if(atoi(c.c_str())) cout << v[atoi(c.c_str()) - 1] << '\n'; 
        else {
            cout << mp[c] << '\n';
        }
    }
    return 0;
}