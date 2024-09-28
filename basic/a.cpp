#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string str;
vector<int> v1;
vector<int> v2;
int ret;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> str;
    string temp = "";
    bool flag = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '+' || str[i] == '-'){
            int num = stoi(temp);
            temp = "";
            if(flag) v2.push_back(num);
            else v1.push_back(num);
        }else{
            temp += str[i];
        }
        if(str[i] == '-') flag = 1;
    }
    if(flag) v2.push_back(stoi(temp));
    else v1.push_back(stoi(temp));

    for(int i = 0; i < v1.size(); i++ )ret += v1[i];
    for(int i = 0; i < v2.size(); i++) ret -= v2[i];
    cout << ret << '\n';
	return 0;
}

//1 str로 전체 문장 입력받음
//2 - 나오면 뒤에 있는 숫자들 다 더하기