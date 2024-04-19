#include<bits/stdc++.h>
using namespace std;

int n, x, y, d, g;
int ary[104][104];
int dy[] = {0, -1, 0, 1};
int dx[] = {1, 0, -1, 0};

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x >> y >> d >> g;
		vector<int> v;
		v.push_back(d);
		for(int j = 0; j < g; j++){
			vector<int> temp;
			for(int k = 0; k < v.size(); k++){
				temp.push_back((v[k] + 1) % 4);
			}
			reverse(temp.begin(), temp.end());
			for(int k = 0; k < temp.size(); k++) v.push_back(temp[k]);
		}
		int ny = y; int nx = x;
		ary[ny][nx] = 1;
		for(int j = 0; j < v.size(); j ++){
			ny += dy[v[j]];
			nx += dx[v[j]];
			ary[ny][nx] = 1;
		}
	}
	int ret = 0;
	for(int i = 0; i < 100; i++){
		for(int j = 0; j < 100; j++){
			if(ary[i][j] && ary[i][j + 1] && ary[i + 1][j] && ary[i + 1][j + 1]) ret++;
		}
	}
	cout << ret << '\n';
	return 0;
}