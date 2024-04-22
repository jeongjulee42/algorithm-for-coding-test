#include<bits/stdc++.h>
using namespace std;
vector<vector<vector<int>>> v;
int ary[8][8];
int n, m, minVal = 987654321;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
vector<pair<int, int>> cctv;

void go(int num){
	if(num >= cctv.size()){
		int cnt = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(!ary[i][j]) cnt++;
			}
		}
		minVal = min(minVal, cnt);
		return;
	}
	int idx = ary[cctv[num].first][cctv[num].second] - 1;
	for(int i = 0; i < v[idx].size(); i++){
		vector<pair<int, int>> temp;
		for(int j = 0; j < v[idx][i].size(); j++){
			int nidx = v[idx][i][j];
			int y = cctv[num].first;
			int x = cctv[num].second;
			while(1){
				int ny = y + dy[nidx]; int nx = x + dx[nidx];
				if(ny >= n || nx >= m || ny < 0 || nx < 0 || ary[ny][nx] == 6) break;
				y = ny; x = nx;
				if(ary[ny][nx]) continue;
				ary[ny][nx] = -1;
				temp.push_back({ny, nx});
			}
		}
		go(num + 1);
		for(int j = 0; j < temp.size(); j++){
			ary[temp[j].first][temp[j].second] = 0;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	v.push_back({{0}, {1}, {2}, {3}});
	v.push_back({{1,3}, {0, 2}});
	v.push_back({{0,1}, {1,2}, {2,3}, {3,0}});
	v.push_back({{0, 1, 2}, {1, 2, 3}, {2, 3, 0}, {3, 0, 1}});
	v.push_back({{0, 1, 2, 3}});

	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> ary[i][j];
			if(ary[i][j]){
				if(ary[i][j] == 6) continue;
				else cctv.push_back({i, j});
			}
		}
	}
	go(0);
	cout << minVal << '\n'; 
	return 0;
}