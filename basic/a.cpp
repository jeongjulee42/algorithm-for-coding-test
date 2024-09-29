#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, ret[3], temp;
int ary[3000][3000];

void go(int y, int x, int num){
    int t = 0;
    bool flag = 0;
    for(int i = y; i < y + num; i++){
        for(int j = x; j < x + num; j++){
            t += ary[i][j];
            if(ary[i][j] != ary[y][x]){
                flag = 1;
                break;
            }
        }
    }
    if(flag){
        for(int i = y; i < y + num; i += num / 3){
            for(int j = x; j < x + num; j += num / 3){
                go(i, j, num / 3);
            }
        }
    } else if(t == 0){
        ret[1]++;
    } else if(t == num * num){
        ret[2]++;
    } else if(t == -1 * num * num){
        ret[0]++;
    }
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> ary[i][j];
        }
    }
    go(0, 0, n);
    for(int i = 0; i < 3; i++) cout << ret[i] << '\n';

	return 0;
}
