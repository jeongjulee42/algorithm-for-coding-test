#include<bits/stdc++.h>
using namespace std;

int n;
int maxVal = INT_MIN;
vector<char> cal;
vector<int> num;

int calculate(int a, int b, char c){
    if(c == '+') return a + b;
    else if(c == '-') return a - b;
    else return a * b;
}

void combi(int start, vector<int> b, int k){
    if(b.size() == k){
        int ret = 0;
        vector<char> calTemp;
        for(int i = 0; i < cal.size(); i++){
            calTemp.push_back(cal[i]);
        }
        vector<int> numTemp;
        for(int i = 0; i < num.size(); i++){
            numTemp.push_back(num[i]);
        }
        for(int i = 0; i < b.size(); i++){
            char cl = calTemp[b[i]];
            int a1 = numTemp[b[i]];
            int a2 = numTemp[b[i] + 1];
            int a3 = calculate(a1, a2, cl);
            calTemp[b[i]] = '+';
            numTemp[b[i]] = a3;
            numTemp[b[i] + 1] = 0;
        }
        ret = numTemp[0];
        for(int i = 0; i < calTemp.size(); i++){
            ret = calculate(ret, numTemp[i + 1], calTemp[i]);
        }
        maxVal = max(maxVal, ret);
    }
    for(int i = start + 1; i < cal.size(); i ++){
        if(b.size() && b.back() + 1 == i) continue;
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

    for(int i = 0; i < int(ceil(double(n) / 2)); i++){
        vector<int> b;
        combi(-1, b, i);
    }
    cout << maxVal << '\n';
    return 0;
}