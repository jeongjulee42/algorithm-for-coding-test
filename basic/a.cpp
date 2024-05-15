#include<bits/stdc++.h>
using namespace std;

int ary[14][204];
int b[14];
int n, m, c;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> c;
	for(int i = 1; i <= n; i++) cin >> b[i];

	for(int i = 1; i <= n; i++){
		for(int j = b[i]; j <= m * c; j++){
			if(j % 5 - b[i] < 0) ary[i][j] = ary[i - 1][j];
			else ary[i][j] = max(ary[i-1][j-b[i]] + 1, ary[i-1][j]);
		}
		for(int j = 0; j <= m*c; j++)cout << ary[i][j] << ' ';
		cout << '\n';
	}


	return 0;
}







