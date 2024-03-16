#include<bits/stdc++.h>
using namespace std;

int h, w;
char c = 'c';
char dot = '.';
char ary[100][100];
int ret[100][100];

int main(){
    cin >> h >> w;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++) cin >> ary[i][j];
    }
    for(int i = 0; i < h; i++){
        int flag = 0;
        for(int j = 0; j < w; j++) {
            if(!flag) ret[i][j] = -1;
            if(ary[i][j] == c) {
                ret[i][j] = 0;
                flag = 1;
            } else if(ary[i][j] == dot && flag){
                ret[i][j] = ret[i][j-1] + 1; 
            }
            cout << ret[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
