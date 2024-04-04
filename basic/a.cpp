#include <bits/stdc++.h>
#include <bitset>
using namespace std;
const int INF = -987654321;
int dy[] = {0, -1, 0, 1};
int dx[] = {-1, 0, 1, 0};
int n, m, maxVal = INF, maxVal2 = INF;
vector<vector<pair<int, int>>> v;
vector<pair<int, int>> t;
int ary[50][50];
bool visited[50][50];

void go(int y, int x){
	visited[y][x] = 1;
	t.push_back({y, x});
	for(int i = 0; i < 4; i++){
		if(!(ary[y][x] & (1 << i))){
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny >= n || nx >= m || ny < 0 || nx < 0) continue;
			if(visited[ny][nx]) continue;
			go(ny, nx);
		}
	}
}

int check(vector<pair<int, int>> a, vector<pair<int, int>> b){
	int cnt = 0;
	for(int i = 0; i < a.size(); i++){
		for(int j = 0; j < b.size(); j++){
			if(a[i].first == b[j].first && abs(a[i].second - b[j].second) == 1){
				cnt = a.size() + b.size();
				return cnt;
			}else if(a[i].second == b[j].second && abs(a[i].first - b[j].first) == 1){
				cnt = a.size() + b.size();
				return cnt;
			}
		}
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> m >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> ary[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(visited[i][j]) continue;
			t.clear();
			go(i, j);
			v.push_back(t);
		}
	}
	for(vector<pair<int, int>> z : v){
		int temp = z.size();
		maxVal = max(maxVal, temp);
	}
	for(int i = 0; i < v.size(); i++){
		for(int j = i + 1; j < v.size(); j++){
			maxVal2 = max(maxVal2, check(v[i], v[j]));
		}
	}

	cout << v.size() << '\n' << maxVal << '\n' << maxVal2 <<'\n';

	return 0;
}

