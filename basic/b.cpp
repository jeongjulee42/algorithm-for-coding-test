#include<bits/stdc++.h>
using namespace std;
// 틀림. 이렇게 뽑을수가 없다.
int n;
int maxVal = INT_MIN;
vector<char> cal;
vector<int> num;

int calculate(int a, int b, string c){
    if(c == "+") return a + b;
    else if(c == "-") return a - b;
    else return a * b;
}

void combi(int start, vector<int> b, int k){
    if(b.size() == k){
        // int ret = 0;
        //ㄱㅖ산
        //먼저 계산

        //나중 계산
        // ----
        // for(int i = 0; i < b.size(); i++){
            
        // }
        // maxVal = max(maxVal, ret);
        for(int i = 0; i < b.size(); i++) cout << b[i] << " ";
        cout << '\n';
    }
    for(int i = start + 1; i < cal.size(); i ++){
        b.push_back(i);
        combi(i, b, k);
        b.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            int temp = 0;
            cin >> temp;
            num.push_back(temp);
        }else{
            char temp = '0';
            cin >> temp;
            cal.push_back(temp);
        }
    }

    for(int i = 0; i <= cal.size(); i++){
        vector<int> b;
        combi(-1, b, i);
    }
    cout << maxVal << '\n';
    return 0;
}
i < int(ceil(double(n) / 2))