#include<bits/stdc++.h>
using namespace std;

int ary[9][9];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int ret = -1;
	int ii = 0, jj = 0;
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++) {
			cin >> ary[i][j];
			int temp = ret;
			ret = max(ret, ary[i][j]);
			if(ret != temp){
				ii = i + 1;
				jj = j + 1;
			}
		}
	}

	cout << ret << '\n' << ii << ' ' << jj << '\n';
	return 0;
}