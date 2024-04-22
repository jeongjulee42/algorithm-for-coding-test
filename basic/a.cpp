#include<bits/stdc++.h>
using namespace std;

int n, m, t, x, d, k;
vector<vector<int>> v(50);



int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> m >> t;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++) {
			int temp = 0;
			cin >> temp;
			v[i].push_back(temp);
		}
	}
	for(int z = 0; z < t; z++){
		cin >> x >> d >> k;
		// 회전
		for(int i = x - 1; i < n; i += x){
			if(d == 1){
				rotate(v[i].begin(), v[i].begin() + (k % m), v[i].end());
			}else{
				rotate(v[i].rbegin(), v[i].rbegin() + (k % m), v[i].rend());
			}
		}
		// 인접한것 찾기
		int cnt = 0; int sum = 0;
		vector<pair<int, int>> temp;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(!v[i][j]) continue;
				sum += v[i][j];
				cnt++;
				if(v[i][j] == v[i][(j + 1) % m] || v[i][j] == v[i][(j - 1 + m) % m]){
					temp.push_back({i, j});
				}
			}
		}
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n - 1; j++){
				if(!v[j][i]) continue;
				if(v[j][i] == v[j + 1][i]){
					temp.push_back({j, i});
					temp.push_back({j + 1, i});
				}
			}
		}

		// 인접한것 제거
		for(int i = 0; i < temp.size(); i++){
			v[temp[i].first][temp[i].second] = 0;
		}

		// 인접하지 않으면 평균 구해서 계산
		if(!temp.size()){
			double _num = double(sum) / cnt;
			for(int i = 0; i < n; i++){
				for(int j = 0; j < m; j++){
					if(!v[i][j]) continue;
					if(v[i][j] > _num) v[i][j]--;
					else if (v[i][j] < _num) v[i][j]++;
				}
			}
		}
	}
	
	int ret = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			ret += v[i][j];
		}
	}
	cout << ret << '\n';
	return 0;
}