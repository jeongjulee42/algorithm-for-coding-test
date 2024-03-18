#include<bits/stdc++.h>
using namespace std;

string a[64][64];
int n, ny, nx;
string ret, temp;
int dy[] = {0, 0, 1, 1};
int dx[] = {0, 1, 0, 1};

string four(int num, int y, int x){  
    if(num == 1){
        return a[y][x];
    }
    else{
        string s = "";
        for(int i = 0; i < 4; i++){
            ny = y + dy[i] * (num / 2);
            nx = x + dx[i] * (num / 2);
            s += four(num / 2, ny, nx);
        }
        if(s == "0000") return "0";
        else if(s == "1111") return "1";
        else return "(" + s + ")";
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        for(int j = 0; j < n; j++){
            a[i][j] = temp[j];
        }
    }
    
    ret = four(n, 0, 0);
    cout << ret << '\n';
    
    return 0;
}