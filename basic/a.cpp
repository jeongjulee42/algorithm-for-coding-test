#include <bits/stdc++.h>
using namespace std;

int n, m, a, b, cnt;
vector<int> v[10001];
int visited[10001];
int ret[10001];

void go(int from){
    visited[from] = 1;
    cout << "from : " << from << '\n';
    cnt++;
    for(auto there : v[from]){
        if(visited[there]) continue;
        go(there);
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        v[b].push_back(a);
    }
    for(int i = 1; i <= n; i++){
        if(v[i].size()) {
            cnt = 0;
            go(i);
            cout << "-----" << '\n';
            ret[i] = cnt;
            memset(visited, 0, sizeof(visited));
        }
    }
    int maxval = 0;
    for(int i = 1; i <= n; i++){
        maxval = max(maxval, ret[i]);
    }
    for(int i = 1; i <= n; i++){
        if(maxval == ret[i]) cout << i << " ";
    }
    cout << '\n';

    return 0;
}