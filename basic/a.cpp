#include <bits/stdc++.h>
using namespace std;

vector<int> v[50];
bool visited[50];
int n, num, root, res, del;

void go(int from){
    visited[from] = 1;
    if(from == del) return;
    if(v[from].size() == 0){
        res++;
        return;
    }
    for(int a : v[from]){
        if(visited[a]) continue;
        if(a == del && v[from].size() == 1){
            res++;
            continue;
        }
        go(a);
    }
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        if(num == -1){
            root = i;
        }else{
            v[num].push_back(i);
        }
    }
    cin >> del;
    go(root);
    cout << res << '\n';
    return 0;
}