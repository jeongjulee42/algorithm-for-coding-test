#include <bits/stdc++.h>
using namespace std;
const int INF = -987654321;
int n, maxVal = INF;

void mv(vector<vector<int>> & key){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(key[i][j] == 0) continue;
			for(int k = j + 1; k < n; k++){
				if(key[i][k] == 0) continue;
				else if (key[i][j] != key[i][k]) break;
				else if (key[i][j] == key[i][k]){
					key[i][j] = key[i][j] + key[i][k];
					key[i][k] = 0;
					break;
				}
			}
		}
		queue<int> q;
		for(int j = 0; j < n; j++){
			if(!key[i][j]) continue;
			q.push(key[i][j]);
		}
		for(int j = 0; j < n; j++){
			if(q.size()){
				key[i][j] = q.front(); q.pop();
			}
			else key[i][j] = 0;
		}
	}
}

void rotate_right(vector<vector<int>> & key){
	vector<vector<int>> temp(n, vector<int>(n, 0));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			temp[i][j] = key[n - j - 1][i];
		}
	}
	key = temp;
	return;
}

void go(vector<vector<int>> key, int cnt){
	mv(key);
	if(cnt >= 5){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				maxVal = max(maxVal, key[i][j]);
			}
		}
		return;
	}
	for(int i = 0; i < 4; i++){
		go(key, cnt + 1);
		rotate_right(key);
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	vector<vector<int>> adj(n, vector<int>(n, 0));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> adj[i][j];
		}
	}
	for(int i = 0; i < 4; i++){
		go(adj, 1);
		rotate_right(adj);
	}
	cout << maxVal << '\n';

	return 0;
}

