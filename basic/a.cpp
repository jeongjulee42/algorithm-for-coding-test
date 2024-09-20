#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ary[9][9];
vector<pair<int, int>> v;
int num;

bool check(int y, int x, int n){
    for(int i = 0; i < 9; i++){
        if(ary[i][x] == n) return false;
        if(ary[y][i] == n) return false;
    }
    int dy = 3 * (y / 3);
    int dx = 3 * (x / 3);
    for(int i = dy; i < dy + 3; i++){
        for(int j = dx; j < dx + 3; j++){
            if(ary[i][j] == n) return false;
        }
    }
    return true;
}

void go(int cnt){
    if(cnt == v.size()){
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                cout << ary[i][j] << ' ';
            } cout << '\n';
        }
        exit(0);
    }
    int y = v[cnt].first;
    int x = v[cnt].second;
    for(int i = 1; i <= 9; i++){
        if(check(y, x, i)){
            ary[y][x] = i;
            go(cnt + 1);
            ary[y][x] = 0;
        }
    }
    return;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++) {
            cin >> ary[i][j];
            if(ary[i][j] == 0) v.push_back({i, j});
        }
    }
    go(0);

	return 0;
}

