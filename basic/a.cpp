#include<bits/stdc++.h>
using namespace std;

int tot, cnt, i, sum;
vector<int> v;
vector<int> res;
map<string, int> mp;
string name, cloth;

void combi(int start, vector<int> b){
    if(b.size() == i){
        int x = 1;
        for(int a : b) x *= a;
        sum += x;
        return;
    }
    for(int j = start + 1; j < v.size(); j++){
        b.push_back(v[j]);
        combi(j, b);
        b.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> tot;
    for(int j = 0; j < tot; j++){
        cin >> cnt;
        mp.clear(); v.clear(); sum = 0;
        for(int k = 0; k < cnt; k++){
            cin >> name >> cloth;
            if(mp.find(cloth) == mp.end()) mp.insert({cloth, 1});
            else mp[cloth]++;
        }
        vector<int> r;
        for(auto m : mp) v.push_back(m.second);
        for(i = 1; i <= mp.size(); i++) combi(-1, r);
        res.push_back(sum);
    }
    for(int a : res) cout << a << '\n';
    return 0;
}
