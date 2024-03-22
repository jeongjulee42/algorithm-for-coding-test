#include <bits/stdc++.h>
using namespace std;

int n, m;
int ary[50][50];
vector<pair<int,int>> house;
vector<pair<int,int>> chicken;
vector<int> ret;

void combi(int start, vector<int> b){
    if(b.size() == m){
        //치킨거리계산
        int total = 0;
        for(auto h : house){
            int length = 5000;
            for(auto c : b){
                int temp = abs(h.first - chicken[c].first) + abs(h.second - chicken[c].second);
                length = min(length, temp);
            }
            total += length;
        }
        //치킨거리계산한것 ret에 넣기
        ret.push_back(total);
        return;
    }
    for(int i = start + 1; i < chicken.size(); i++){
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> ary[i][j];
            if(ary[i][j] == 1) house.push_back({i,j});
            else if (ary[i][j] == 2) chicken.push_back({i, j});
        }
    }
    vector<int> temp;
    combi(-1, temp);
    int t = 5000;
    for(int i : ret){
        t = min(t, i);
    }
    cout << t << '\n';
    
    return 0;
}