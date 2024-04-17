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
		for(int j = 0; j < 8; j++) v[i][j] = str[j];
	}
	cin >> k;
	for(int i = 0; i < k; i++){
		memset(ary, 0, sizeof(ary));
		cin >> num >> dir;
		//num - 1 (현재) 부터 0까지 확인
		ary[num - 1] = dir;
		for(int j = num - 1; j > 0; j--){
			if(v[j][6] != v[j - 1][2]) ary[j - 1] = -1 * ary[j];
			else if (v[j][6] == v[j - 1][2]) break;
		}
		for(int j = num - 1; j < k - 1; j++){
			if(v[j][2] != v[j + 1][6]) ary[j + 1] = -1 * ary[j];
			else if (v[j][2] == v[j + 1][6]) break;
		}
		for(int j = 0; j < k; j++) cout << ary[j] << " ";
		cout << '\n';
	}

	return 0;
}

