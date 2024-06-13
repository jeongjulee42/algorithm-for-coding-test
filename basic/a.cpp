#include<bits/stdc++.h>
using namespace std;

vector<int> mp[14][14];
pair<int, int> position[11];
int color[14][14], direc[11], ret = -1, n, k, y, x, d;
int dy[] = {0, 0, 0, -1, 1};
int dx[] = {0, 1, -1, 0, 0};

void white(int ny, int nx, int by, int bx, int i){
	vector<int> bef;
	bool flag = false;
	for(int t : mp[by][bx]){
		if(t == i) flag = true;
		if(flag) {
			mp[ny][nx].push_back(t);
			position[t] = {ny, nx};
		}
		else bef.push_back(t);
	}
	mp[by][bx] = bef;
}

void red(int ny, int nx, int by, int bx, int i){
	vector<int> bef;
	vector<int> aft;
	bool flag = false;
	for(int t : mp[by][bx]){
		if(t == i) flag = true;
		if(flag) aft.push_back(t);
		else bef.push_back(t);
	}
	mp[by][bx] = bef;
	reverse(aft.begin(), aft.end());
	for(int t : aft){
		mp[ny][nx].push_back(t);
		position[t] = {ny, nx};
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> k;
	fill(&color[0][0], &color[0][0] + 14 * 14, 2);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++) cin >> color[i][j];
	}
	for(int i = 1; i <= k; i++) {
		cin >> y >> x >> d;
		mp[y][x].push_back(i);
		direc[i] = d;
		position[i] = {y, x};
	}
	for(int num = 1; num <= 1000; num++){
		for(int i = 1; i <= k; i++){
			int by = position[i].first;
			int bx = position[i].second;
			int ny = by + dy[direc[i]];
			int nx = bx + dx[direc[i]];
			if(color[ny][nx] == 0){
				white(ny, nx, by, bx, i);
			} else if(color[ny][nx] == 1){
				red(ny, nx, by, bx, i);
			} else{
				if(direc[i] == 1 || direc[i] == 3) direc[i]++;
				else direc[i]--;
				ny = by + dy[direc[i]];
				nx = bx + dx[direc[i]];
				if(color[ny][nx] == 0){
					white(ny, nx, by, bx, i);
				} else if(color[ny][nx] == 1){
					red(ny, nx, by, bx, i);
				} else continue;
			}
			position[i] = {ny, nx};
			if(mp[ny][nx].size() >= 4){
				cout << num << '\n';
				exit(0);
			}
		}
	}
	cout << ret << '\n';
	return 0;
}







