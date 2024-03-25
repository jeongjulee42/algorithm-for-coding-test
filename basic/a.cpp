#include<bits/stdc++.h>
using namespace std;

int n;
int ary[10][10];
int cost[10][10];
vector<pair<int,int>> cordi;
vector<int> ret;


int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> ary[i][j];
        }
    }
    for(int i = 1; i < n - 1; i++){
        for(int j = 1; j < n - 1; j++){
            cost[i][j] = ary[i][j] + ary[i-1][j] + ary[i+1][j] + ary[i][j+1] + ary[i][j-1]; 
            cordi.push_back({i, j});
        }
    }
    for(int i = 0; i < cordi.size(); i++){
        for(int j = i + 1; j < cordi.size(); j++){
            if(cordi[i].first == cordi[j].first && abs(cordi[i].second - cordi[j].second) < 3) continue;
            if(cordi[i].second == cordi[j].second && abs(cordi[i].first - cordi[j].first) < 3) continue;
            if(abs(cordi[i].first - cordi[j].first) < 2 && abs(cordi[i].second - cordi[j].second) < 2) continue;
            for(int k = j + 1; k < cordi.size(); k++){
                if(cordi[k].first == cordi[j].first && abs(cordi[k].second - cordi[j].second) < 3) continue;
                if(cordi[k].second == cordi[j].second && abs(cordi[k].first - cordi[j].first) < 3) continue;
                if(abs(cordi[k].first - cordi[j].first) < 2 && abs(cordi[k].second - cordi[j].second) < 2) continue;
                if(cordi[k].first == cordi[i].first && abs(cordi[k].second - cordi[i].second) < 3) continue;
                if(cordi[k].second == cordi[i].second && abs(cordi[k].first - cordi[i].first) < 3) continue;
                if(abs(cordi[k].first - cordi[i].first) < 2 && abs(cordi[k].second - cordi[i].second) < 2) continue;
                int pay = cost[cordi[i].first][cordi[i].second] + cost[cordi[j].first][cordi[j].second] + cost[cordi[k].first][cordi[k].second];
                ret.push_back(pay);    
            }
        }
    }
    int minVal = 9999999;
    for(int v : ret){
        minVal = min(v, minVal);
    }
    cout << minVal << '\n';
    return 0;
}