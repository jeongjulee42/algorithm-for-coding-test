#include<bits/stdc++.h>
using namespace std;

int n, m, sx, sy, ex, ey;
int ary[1025][1025];
int adj[1025][1025];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> ary[i][j];
            adj[i][j] = ary[i][j] + adj[i-1][j] + adj[i][j-1] - adj[i-1][j-1];
        }
    }
    for(int i = 0; i < m; i++){
        cin >> sy >> sx >> ey >> ex;
        cout << adj[ey][ex] - adj[ey][sx - 1] - adj[sy-1][ex] + adj[sy-1][sx-1] << '\n';
    }

	return 0;
}