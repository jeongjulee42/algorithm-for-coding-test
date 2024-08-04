#include<bits/stdc++.h>
using namespace std;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int n;
int ary[25][25];
bool visited[25][25];
vector<int> ret;

int go(int y, int x){
	visited[y][x] = 1;
	int t = 0;
	for(int i = 0; i < 4; i++){
		int ny = dy[i] + y;
		int nx = dx[i] + x;
		if(ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
		if(visited[ny][nx]) continue;
		if(!ary[ny][nx]) continue;
		t += go(ny, nx);
	}
	return t + 1;
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		string str = "";
		cin >> str;
		for(int j = 0; j < n; j++){
			ary[i][j] = str[j] - '0';
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(visited[i][j]) continue;
			if(ary[i][j] == 0) continue;
			int temp = go(i, j);
			ret.push_back(temp);
		}
	}
	sort(ret.begin(), ret.end());
	cout << ret.size() << '\n';
	for(int r : ret) cout << r << '\n';

	return 0;
}