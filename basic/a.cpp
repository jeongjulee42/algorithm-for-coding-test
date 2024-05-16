#include<bits/stdc++.h>
using namespace std;

int ary[104][104];
int n, m, num;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> num;
	for(int i = 0; i < num; i++){
		cin >> n >> m;
		for(int j = n - 1; j < n + 9; j++){
			for(int k = m - 1; k < m + 9; k++){
				ary[j][k] = 1;
			}
		}
	}
	int ret = 0;
	for(int i = 0; i <= 100; i++){
		for(int j = 0; j <= 100; j++){
			if(ary[i][j]) ret++;
		}
	}
	cout << ret << '\n';
	return 0;
}







