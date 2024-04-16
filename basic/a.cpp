#include <bits/stdc++.h>
using namespace std;

int n, k, l, x, cnt;
char c;
vector<pair<int,int>> snake;
vector<pair<int, int>> road;
int ary[100][100];
int dy[] = {0, 1, 0, -1};
int dx[] = {1, 0, -1, 0};

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	cin >> k;
	for(int i = 0; i < k; i++){
		int y = 0; int x = 0;
		cin >> y >> x;
		ary[y - 1][x - 1] = 1;
	}
	cin >> l;
	vector<pair<int, char>> mv;
	int temp = 0;
	for(int i = 0; i < l; i++){
		cin >> x >> c;
		mv.push_back({x - temp, c});
		temp = x;
	}
	int ny = 0; int nx = 0;
	int idx = 0;
	for(auto m : mv){
		int num = m.first; char d = m.second;
		for(int i = 0; i < num; i++){
			nx += dx[idx]; 
			ny += dy[idx];
			road.push_back({ny,nx});
		}
		if(d == 'L'){
			idx--;
			if(idx < 0) idx = 3;
		}else if(d == 'D'){
			idx++;
			if(idx > 3) idx = 0;
		}
	}
	for(int i = 0; i < n; i++){
		nx += dx[idx];
		ny += dy[idx];
		road.push_back({ny, nx});
	}
	snake.push_back({0, 0});
	int cnt = 0;
	for(auto m : road){
		cnt++;
		ny = m.first, nx = m.second;
		if(ny < 0 || nx < 0 || ny >= n || nx >= n) break;

		int flag = 0;
		for(int i = 0; i < snake.size(); i++){
			if(snake[i].first == ny && snake[i].second == nx) {flag = 1; break;}
		}
		if(flag) break;

		snake.push_back({ny, nx});
		if(!ary[ny][nx]) snake.erase(snake.begin(), snake.begin() + 1);
		else ary[ny][nx] = 0;
	}
	cout << cnt << '\n';
	return 0;
}

