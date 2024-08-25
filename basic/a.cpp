#include<bits/stdc++.h>
using namespace std;

const int MAX_VAL = 300000;
bool che[MAX_VAL];
int ary[MAX_VAL];
int n, num;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	for(int i = 2; i <= MAX_VAL; i++){
		if(che[i]) continue;
		for(int j = i * 2; j <= MAX_VAL; j = j + i){
			che[j] = 1;
		}
	}
	for(int i = 0; i <= MAX_VAL; i++){
		if(!che[i]) num++;
		ary[i] = num;
	}
	while(1){
		cin >> n;
		if(n == 0) break;
		// cout << ary[n * 2] << '\n';
		// cout << ary[n] << '\n';
		cout << ary[n*2] - ary[n] << '\n';
	}

	return 0;
}