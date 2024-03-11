#include <bits/stdc++.h>
using namespace std;

int num, num2, res = 1;
string str, str1;

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> num;
    for(int i = 0; i < num; i++){
        map<string, int> mp;
        res = 1;
        cin >> num2;
        for(int j = 0; j < num2; j++){
            cin >> str1 >> str;
            mp[str]++ ;
        }
        for(auto m : mp) res *= (m.second + 1);
        res--;
        cout << res << '\n';
    }
    return 0;
}