#include <bits/stdc++.h>
using namespace std;
// 피보나치 합

int num = 0;

int fibo(int n){
    if(n == 1 || n == 2) return 1;
    return fibo(n-1) + fibo(n-2);
}


int main(){ 
    cout << "피보나치 합 계산할 수를 입력하세요." << '\n';
    cin >> num;
    cout << "정답은 :" << fibo(num);
    return 0;
}