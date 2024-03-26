#include<bits/stdc++.h>
using namespace std;

int k;
vector<int> ret[10];
int ary[1024];

int main(){

    cin >> k;
    for(int i = 0; i < int(pow(2, k) - 1); i++){
        cin >> ary[i];
    }
    for(int i = 0; i < k; i++){
        for(int j = int(pow(2, i)) - 1; j < int(pow(2, k) - 1); j += int(pow(2, i + 1))){
            ret[i].push_back(ary[j]);
        }
    }

    for(int i = k - 1; i >= 0; i--){
        for(int j = 0; j < ret[i].size(); j++){
            cout << ret[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}