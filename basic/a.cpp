#include<bits/stdc++.h>
using namespace std;

int dp[102][102][102];

int w(int a, int b, int c){
	if(a <= 0 || b <= 0 || c <= 0) return 1;
	if(a > 20 || b > 20 || c > 20) return w(20, 20, 20);
	if(a < b && b < c){
		if(!dp[a][b][c-1]) dp[a][b][c-1] = w(a, b, c-1);
		if(!dp[a][b-1][c-1]) dp[a][b-1][c-1] = w(a, b-1, c-1);
		if(!dp[a][b-1][c]) dp[a][b-1][c] = w(a, b-1, c);
		return dp[a][b][c-1] + dp[a][b-1][c-1] - dp[a][b-1][c];
	}
	if(!dp[a-1][b][c]) dp[a-1][b][c] = w(a-1, b, c);
	if(!dp[a-1][b-1][c]) dp[a-1][b-1][c] = w(a-1, b-1, c);
	if(!dp[a-1][b][c-1]) dp[a-1][b][c-1] = w(a-1, b, c-1);
	if(!dp[a-1][b-1][c-1]) dp[a-1][b-1][c-1] = w(a-1, b-1, c-1);
	return dp[a-1][b][c] + dp[a-1][b-1][c] + dp[a-1][b][c-1] - dp[a-1][b-1][c-1];
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	
	while(1){
		int a = 0, b = 0, c = 0;
		cin >> a >> b >> c;
		if(a == -1 && b == -1 && c == -1) break;
		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
	}

	return 0;
}