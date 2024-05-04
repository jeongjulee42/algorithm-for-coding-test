#include<bits/stdc++.h>
using namespace std;

int n, ary[16][16];
struct ABC{int a; int b; int c;};
ABC dp[16][16];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) cin >> ary[i][j];
	}
	dp[0][0] = {1, 0, 0}, dp[0][1] = {1, 0, 0};
	for(int i = 0; i < n; i++){
		for(int j = 2; j < n; j++){
			if(ary[i][j]) continue;
			if(i == 0) dp[i][j] = {dp[i][j - 1].a, 0, 0};
			else{
				int mid = dp[i - 1][j - 1].b + dp[i - 1][j - 1].a + dp[i - 1][j - 1].c;
				if(ary[i - 1][j] || ary[i][j - 1]) mid = 0;
				dp[i][j] = {dp[i][j - 1].a + dp[i][j - 1].b, mid, dp[i - 1][j].c + dp[i - 1][j].b};
			}
		}
	}

	int ret = dp[n-1][n-1].a + dp[n-1][n-1].b + dp[n-1][n-1].c;
	cout << ret << '\n';

	return 0;
}