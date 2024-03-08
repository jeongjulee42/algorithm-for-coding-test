#include <bits/stdc++.h>
using namespace std;

int num, tgt, temp, res;
map<int, int> mp;

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> num;
    cin >> tgt;
    for(int i = 0; i < num; i++){
        cin >> temp;
        if(mp.find(temp) == mp.end()) mp.insert({temp, 1});
        else mp[temp]++;
    }
    for(auto m : mp){
        if(mp.find(tgt - m.first) == mp.end()) continue;
        else {
            if (m.first == tgt - m.first) res += (m.second / 2);
            else res += min(m.second, mp[tgt - m.first]);
            mp[m.first] = 0;
        }
    }

    cout << res << '\n';
    return 0;
}