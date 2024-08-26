#include<bits/stdc++.h>
using namespace std;

int ary[504][504];
int dp[504][504];
int n, ret;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cin >> ary[i][j];
		}
	}
	dp[1][1] = ary[1][1];
	for(int i = 2; i <= n; i++){
		for(int j = 1; j <= i; j++){
			dp[i][j] = ary[i][j] + max(dp[i-1][j], dp[i-1][j-1]);
		}
	}
	for(int i = 1; i <= n; i++){
		ret = max(dp[n][i], ret);
	}
	cout << ret << '\n';
	return 0;
}