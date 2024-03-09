#include<bits/stdc++.h>
using namespace std;

string name, res, temp;
char pos;
map<char, int> mp;
int cnt = 0;

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> name;
    for(char s : name){
        if(mp.find(s) == mp.end()) mp.insert({s, 1});
        else mp[s]++;
    }
    for(auto m : mp){
        if(m.second % 2 == 1){
            cnt ++;
            if(cnt > 1){
                cout << "I'm Sorry Hansoo" << '\n';
                exit(0);
            }
            pos = m.first;
            m.second --; 
        }
        for(int i = 0; i < m.second / 2; i++){
            if(m.second == 0) continue;
            res += m.first;
        }
    }
    temp = res;
    reverse(res.begin(), res.end());
    if(cnt == 1) res = temp + pos + res;
    else res = temp + res;
    cout << res << '\n';
    return 0;
}