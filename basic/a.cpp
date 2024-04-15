#include <bits/stdc++.h>
using namespace std;

int r, c, t, ret;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
vector<vector<int>> ary(50, vector<int>(50, 0));
vector<pair<int, int>> dust;
vector<pair<int, int>> air;

void moveUp(int y, int x){
	int ny = y, nx = x;
	if(x == 0){
		if(y == 0) nx ++;
		else ny --;
	} else if (y == 0){
		if(x == c - 1) ny ++;
		else nx ++;
	} else if (x == c - 1){
		if(y == air[0].first) nx --;
		else ny ++;
	} else if(y == air[0].first){
		if(x == 1) {
			ary[ny][nx] = 0;
			return;
		}
		else nx --;
	}
	ary[y][x] = ary[ny][nx];
	if(y == air[0].first && x == air[0].second) return;
	moveUp(ny, nx);
}

void moveDown(int y, int x){
	int ny = y, nx = x;
	if(x == 0){
		if(y == r - 1) nx++;
		else ny++;
	} else if (y == r - 1){
		if(x == c - 1) ny --;
		else nx ++;
	} else if (x == c - 1){
		if(y == air[1].first) nx --;
		else ny --;
	} else if (y == air[1].first){
		if(x == 1){
			ary[ny][nx] = 0;
			return;
		}
		else nx --;
	}
	ary[y][x] = ary[ny][nx];
	if(y == air[1].first && x == air[1].second) return;
	moveDown(ny, nx);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> r >> c >> t;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> ary[i][j];
			if(ary[i][j] > 0) dust.push_back({i, j});
			else if(ary[i][j] == -1) air.push_back({i, j});
		}
	}
	for(int i = 0; i < t; i++){
		vector<vector<int>> temp(50, vector<int>(50, 0));
		temp[air[0].first][air[0].second] = -1; temp[air[1].first][air[1].second] = -1;
		for(int j = 0; j < dust.size(); j++){
			int cnt = 0;
			for(int k = 0; k < 4; k++){
				int ny = dy[k] + dust[j].first;
				int nx = dx[k] + dust[j].second;
				if(ny < 0 || nx < 0 || ny >= r || nx >= c) continue;
				if(ary[ny][nx] == -1) continue;
				temp[ny][nx] += ary[dust[j].first][dust[j].second] / 5;
				cnt++;
			}
			temp[dust[j].first][dust[j].second] += (ary[dust[j].first][dust[j].second] - (cnt * (ary[dust[j].first][dust[j].second] / 5)));
		}
		ary = temp;
		moveUp(air[0].first - 1, air[0].second);
		moveDown(air[1].first + 1, air[1].second);
		ary[air[0].first][air[0].second] = -1; ary[air[1].first][air[1].second] = -1;
		dust.clear();
		for(int j = 0; j < r; j++){
			for(int k = 0; k < c; k++){
				if(ary[j][k] > 0) dust.push_back({j,k});
			}
		}
	}

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(ary[i][j] != -1) ret += ary[i][j];
		}
	}
	cout << ret << '\n';
	return 0;
}

