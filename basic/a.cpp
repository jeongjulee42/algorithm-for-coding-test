#include<bits/stdc++.h>
using namespace std;

int n, m;
string _a = "WBWBWBWB";
string _b = "BWBWBWBW";
char ary[51][51];
char a[8][8];
char b[8][8];
int ret = 987654321;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    for(int i = 0; i < 8; i++){
        if(i % 2 == 0){
            for(int j = 0; j < 8; j++){
                a[i][j] = _a[j];
            }
        }else {
            for(int j = 0; j < 8; j++){
                a[i][j] = _b[j];
            }
        }
    }
    for(int i = 0; i < 8; i++){
        if(i % 2 == 0){
            for(int j = 0; j < 8; j++){
                b[i][j] = _b[j];
            }
        }else {
            for(int j = 0; j < 8; j++){
                b[i][j] = _a[j];
            }
        }
    }

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> ary[i][j];
    }

    for(int i = 0; i <= n - 8; i++){
        for(int j = 0; j <= m - 8; j++){
            int temp = 0;
            for(int k = 0; k < 8; k++){
                for(int l = 0; l < 8; l++){
                    if(ary[i + k][j + l] != a[k][l]) temp++;
                }
            }
            ret = min(ret, temp);
            temp = 0;
            for(int k = 0; k < 8; k++){
                for(int l = 0; l < 8; l++){
                    if(ary[i + k][j + l] != b[k][l]) temp++;
                }
            }
            ret = min(ret, temp);
        }
    }
    cout << ret << '\n';
	return 0;
}