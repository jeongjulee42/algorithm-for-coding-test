#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v;
int n, ret;

//검사 - 상, 하, 대각선
bool check(int y, int x){
    for(int i = 0; i < v.size(); i++){
        int vy = v[i].first;
        int vx = v[i].second;
        if(y == vy || x == vx || (abs(y - vy) == abs(x - vx))) return false;
    }
    return true;
}

void go(int y, int x){
    if(!check(y, x)) return;
    v.push_back({y, x});
    if(y >= n - 1){
        ret++;
    }else{
        for(int i = 0; i < n; i++){
            go(y + 1, i);
        }
    }
    v.pop_back();
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        go(0, i);
    }
    cout << ret << '\n';

	return 0;
}

