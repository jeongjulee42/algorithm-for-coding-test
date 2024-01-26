#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main(){
    cin >> t;
    string bufferflush;
    getline(cin, bufferflush);
    for(int i = 0; i < t; i++){
        getline(cin, s);
        cout << s << '\n';
    }
}