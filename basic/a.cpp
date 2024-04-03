#include <bits/stdc++.h>
using namespace std;

int r, c, a;
char ary[20][20];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int cnt, maxVal = -987654321;;

void go(int y, int x){
	cnt++;
	for(int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny >= r || nx >= c || ny < 0 || nx < 0) continue;
		int temp = ary[ny][nx] - 'A';
		if((1 << temp) & a) continue;
		a |= (1 << temp);
		go(ny, nx);
		a &= ~(1 << temp);
	}
	maxVal = max(maxVal, cnt);
	cnt--;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> r >> c;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> ary[i][j];
		}
	}
	int temp = ary[0][0] - 'A';
	a |= (1 << temp);
	go(0,0);
	cout << maxVal << '\n';
	return 0;
}

