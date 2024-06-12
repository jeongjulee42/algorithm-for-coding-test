#include<bits/stdc++.h>
using namespace std;

int n, m, k, x, y, z, ret, food[14][14], feed[14][14];
vector<vector<vector<int>>> tree(14, vector<vector<int>>(14, vector<int>()));
vector<pair<int, int>> temp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> m >> k;
	for(int i = 1; i <= n; i++) for(int j = 1; j <= n; j++) cin >> feed[i][j];
	for(int i = 1; i <= m; i++){
		cin >> x >> y >> z;
		tree[y][x].push_back(z);
	}
	fill(&food[0][0], &food[0][0] + 14*14, 5);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			sort(tree[i][j].begin(), tree[i][j].end());
		}
	}
	for(int l = 0; l < k; l++){
		temp.clear();
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				int f = 0;
				for(int t = 0; t < tree[i][j].size(); t++){
					if(tree[i][j][t] == 0) continue;
					if(food[i][j] >= tree[i][j][t]){
						food[i][j] -= tree[i][j][t];
						tree[i][j][t]++;
						if(tree[i][j][t] % 5 == 0) temp.push_back({i, j});
					}else {
						f += tree[i][j][t] / 2;
						tree[i][j][t] = 0;
					}
				}
				food[i][j] += f;
				food[i][j] += feed[i][j];
			}
		}
		for(auto t : temp){
			tree[t.first - 1][t.second - 1].insert(tree[t.first - 1][t.second - 1].begin(), 1);
			tree[t.first - 1][t.second].insert(tree[t.first - 1][t.second].begin(), 1);
			tree[t.first - 1][t.second + 1].insert(tree[t.first - 1][t.second + 1].begin(), 1);
			tree[t.first][t.second - 1].insert(tree[t.first][t.second - 1].begin(), 1);
			tree[t.first][t.second + 1].insert(tree[t.first][t.second + 1].begin(), 1);
			tree[t.first + 1][t.second - 1].insert(tree[t.first + 1][t.second - 1].begin(), 1);
			tree[t.first + 1][t.second].insert(tree[t.first + 1][t.second].begin(), 1);
			tree[t.first + 1][t.second + 1].insert(tree[t.first + 1][t.second + 1].begin(), 1);
		}
	}

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			for(int l = 0; l < tree[i][j].size(); l++){
				if(tree[i][j][l]) ret++;
			}
		}
	}
	cout << ret << '\n';
	return 0;
}







