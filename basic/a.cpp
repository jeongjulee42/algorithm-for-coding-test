#include <bits/stdc++.h>
using namespace std;

int n, m, k, r, c, s, cnt, minVal = 987654321;
vector<vector<int>> tmpAry(54, vector<int>(54, 0));
vector<vector<int>> ary(54, vector<int>(54, 0));
struct A{int r; int c; int s;};
vector<A> rcs;
int dy[] = {0, 1, 0, -1};
int dx[] = {1, 0, -1, 0};

void rot(vector<vector<int>> & key, int _size){
	vector<vector<int>> temp(_size, vector<int>(_size, 0)); 
	for(int i = 0; i < (_size / 2); i++){
		int y = i; int x = i; 
		for(int j = 0; j < 4 * (_size - 1 - (2 * i)); j++){
			int ny = y + dy[j / (_size - 1 - (2 * i))];
			int nx = x + dx[j / (_size - 1 - (2 * i))];
			temp[ny][nx] = key[y][x];
			y = ny; x = nx;
		}
	}
	if(_size % 2 == 1){
		temp[_size / 2][_size / 2] = key[_size / 2][_size / 2];
	}
	key = temp; 
	return;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> k;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> ary[i][j];
			tmpAry[i][j] = ary[i][j];
		}
	}
	for(int i = 0; i < k; i++){
		cin >> r >> c >> s;
		rcs.push_back({r - 1, c - 1, s});
	}

	vector<int> idx;
	for(int i = 0; i < rcs.size(); i++) idx.push_back(i);

	do{
		for(int i = 0; i < idx.size(); i++){
			A _rcs = rcs[idx[i]];
			pair<int, int> start = {_rcs.r - _rcs.s, _rcs.c - _rcs.s};
			pair<int, int> fin = {_rcs.r + _rcs.s, _rcs.c + _rcs.s};
			int _size = fin.first - start.first + 1;
			vector<vector<int>> temp(_size, vector<int>(_size, 0));
			for(int j = start.first; j <= fin.first; j++){
				for(int l = start.second; l <= fin.second; l++){
					temp[j - start.first][l - start.second] = ary[j][l];
				}
			}
			rot(temp, _size);
			for(int j = start.first; j <= fin.first; j++){
				for(int l = start.second; l <= fin.second; l++){
					ary[j][l] = temp[j - start.first][l - start.second];
				}
			}
		}
		for(int i = 0; i < n; i++){
			int ret = 0;
			for(int j = 0; j < m; j++) ret += ary[i][j];
			minVal = min(minVal, ret);
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				ary[i][j] = tmpAry[i][j];
			}
		}
	}while(next_permutation(idx.begin(), idx.end()));

	cout << minVal << '\n';

	return 0;
}

