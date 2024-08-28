#include<bits/stdc++.h>
using namespace std;

int n, stair[304];
pair<int, int> ary[304][2];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 1; i <= n; i++) cin >> stair[i];
	ary[1][0].first = stair[1]; ary[1][0].second = 1;
	ary[1][1].first = 0; ary[1][1].second = 0;
	for(int i = 2; i <= n; i++){
		if(ary[i-1][0].second == 2) {
			ary[i][0].first = ary[i-1][1].first + stair[i];
			ary[i][0].second = ary[i-1][1].second + 1;
		}else if(ary[i-1][0].first > ary[i-1][1].first){
			ary[i][0].first = ary[i-1][0].first + stair[i];
			ary[i][0].second = ary[i-1][0].second + 1;
		}else{
			ary[i][0].first = ary[i-1][1].first + stair[i];
			ary[i][0].second = ary[i-1][1].second + 1;
		}
		ary[i][1].first = max(ary[i-2][0].first, ary[i-2][1].first) + stair[i];
		ary[i][1].second = 1;
	}
	cout << max(ary[n][0].first, ary[n][1].first) << '\n';

	return 0;
}