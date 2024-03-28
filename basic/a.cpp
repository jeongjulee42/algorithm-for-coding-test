#include<bits/stdc++.h>
using namespace std;

int n, k;
int visited[100001];
int minVal = 987654321;
int cnt = 1;

void go(int here){
    queue<int> q;
    visited[here] = 1;
    q.push(here);
    while(q.size()){
        int there = q.front(); q.pop();
        int temp[3] = {there - 1, there + 1, there * 2};
        for(int i = 0; i < 3; i++){
            int nx = temp[i];
            if(nx <= 0 || nx >= 100001) continue;
            if(visited[nx] && visited[nx] < visited[there] + 1) continue;
            if(nx == k){
                if(minVal < visited[there]) continue;
                else if(minVal == visited[there]) cnt++;
                else{
                    minVal = min(minVal, visited[there]);
                    cnt = 1;
                }
            }
            visited[nx] = visited[there] + 1;
            q.push(nx);
        }
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> k;
    if(n > k) cout << n - k << '\n' << 1 << '\n';
    else if(n == k) cout << 0 << '\n' << 1 <<'\n';
    else{
        go(n);
        cout << minVal << '\n' << cnt << '\n';
    }

    return 0;
}