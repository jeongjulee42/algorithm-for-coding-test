#include<bits/stdc++.h>
using namespace std;

int ary[54][54][54], n, m, c, a, b;
int adj[54][54];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> m >> c;
	for(int i = 0; i < c; i++){
		cin >> a >> b;
		adj[a][b] = 99;
	}

	ary[1][1][0] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			for(int k = 0; k <= c; k++){
				if(adj[i][j] == 99){
					ary[i][j][k + 1] = ary[i - 1][j][k] + ary[i][j - 1][k];
				}
				else ary[i][j][k] = ary[i - 1][j][k] + ary[i][j - 1][k];
			}
		}
	}

	for(int i = 0; i <= c; i++){
		cout << ary[n][m][i] << ' ';
	}
	cout << '\n';
	return 0;
}