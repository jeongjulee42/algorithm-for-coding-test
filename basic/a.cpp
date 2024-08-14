#include<bits/stdc++.h>
using namespace std;

int n, m, k;
int a[100][100];
int b[100][100];
int ret[100][100];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++) cin >> a[i][j];
	}
	cin >> m >> k;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < k; j++) cin >> b[i][j];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			for(int l = 0; l < m; l++){
				ret[i][j] += a[i][l] * b[l][j];
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			cout << ret[i][j] << ' ';
		}cout << '\n';
	}
	return 0;
}