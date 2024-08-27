#include<bits/stdc++.h>
using namespace std;

int ary[1000][3];
int dp[1000][3];
int n, ret = 987654321;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			cin >> ary[i][j];
		}
	}
	dp[0][0] = ary[0][0];
	dp[0][1] = ary[0][1];
	dp[0][2] = ary[0][2];
	for(int i = 1; i < n; i++){
		dp[i][0] = ary[i][0] + min(dp[i-1][1], dp[i-1][2]);
		dp[i][1] = ary[i][1] + min(dp[i-1][0], dp[i-1][2]);
		dp[i][2] = ary[i][2] + min(dp[i-1][0], dp[i-1][1]);
	}
	for(int i = 0; i < 3; i++){
		ret = min(ret, dp[n-1][i]);
	}
	cout << ret << '\n';
	return 0;
}