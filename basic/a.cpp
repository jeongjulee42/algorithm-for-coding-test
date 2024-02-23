#include <bits/stdc++.h>
using namespace std;
// factorial 5 4 3 2 1

int num = 0;

int factorial(int num){
    if(num == 1 || num == 0)return 1;
    return num * factorial(num - 1);
}


int main(){ 
    cout << "팩토리얼 계산할 수를 입력하세요." << '\n';
    cin >> num;
    cout << "정답은 :" << factorial(num);
    return 0;
}