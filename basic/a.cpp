#include<bits/stdc++.h>
using namespace std;

int n;
int ary[128][128];
int white, blue;

void go(int y, int x, int num){
	int temp = 0;
	for(int i = y; i < y + num; i++){
		for(int j = x; j < x + num; j++){
			temp += ary[i][j];
		}
	}
	if(temp == num * num){
		blue++;
	}else if(temp == 0){
		white++;
	}else{
		for(int i = y; i < y + num; i += num / 2){
			for(int j = x; j < x + num; j += num / 2){
				go(i, j, num / 2);
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) cin >> ary[i][j];
	}
	go(0, 0, n);
	cout << white << '\n' << blue << '\n';

	return 0;
}