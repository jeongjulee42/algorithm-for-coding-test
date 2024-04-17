#include <bits/stdc++.h>
using namespace std;

int t, k, num, dir;
int ary[1001];
vector<vector<int>> v(1000, vector<int>(8));

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	for(int i = 0; i < t; i++){
		string str = "";
		cin >> str;
		for(int j = 0; j < 8; j++) v[i][j] = str[j] - '0';
	}
	cin >> k;
	for(int i = 0; i < k; i++){
		memset(ary, 0, sizeof(ary));
		cin >> num >> dir;
		ary[num - 1] = dir;
		for(int j = num - 1; j > 0; j--){
			if(v[j][6] != v[j - 1][2]) ary[j - 1] = -1 * ary[j];
			else if (v[j][6] == v[j - 1][2]) break;
		}
		for(int j = num - 1; j < t - 1; j++){
			if(v[j][2] != v[j + 1][6]) ary[j + 1] = -1 * ary[j];
			else if (v[j][2] == v[j + 1][6]) break;
		}
		for(int j = 0; j < t; j++){
			if(ary[j] == -1){
				rotate(v[j].begin(), v[j].begin() + 1, v[j].end());
			}else if(ary[j] == 1){
				rotate(v[j].rbegin(), v[j].rbegin() + 1, v[j].rend());
			}
		}
	}
	int cnt = 0;
	for(int i = 0; i < t; i++){
		if(v[i][0] == 1) cnt++;
	}
	cout << cnt << '\n';
	return 0;
}

