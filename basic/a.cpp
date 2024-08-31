#include<bits/stdc++.h>
using namespace std;

int n;

void go(vector<vector<char>> &adj, int num, int y, int x){
	if(num == 1) return;
	int nextNum = num / 3;
	int sy = y + nextNum;
	int sx = x + nextNum;
	int ey = sy + nextNum;
	int ex = sx + nextNum;
	for(int i = sy; i < ey; i++){
		for(int j = sx; j < ex; j++){
			adj[i][j] = ' ';
		}
	}
	for(int i = y; i < y + num; i += nextNum){
		for(int j = x; j < x + num; j += nextNum){
			go(adj, nextNum, i, j);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	vector<vector<char>> adj(n, vector<char>(n, '*'));
	
	go(adj, n, 0, 0);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << adj[i][j];
		}cout << '\n';
	}
	
	return 0;
}