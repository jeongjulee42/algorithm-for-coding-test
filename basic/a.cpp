#include<bits/stdc++.h>
using namespace std;

int ary[101][101], n, m, temp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> ary[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> temp;
			ary[i][j] += temp;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << ary[i][j] << ' ';
		}cout << '\n';
	}
	return 0;
}