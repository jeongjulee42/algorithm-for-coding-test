#include<bits/stdc++.h>
using namespace std;


char a, b, c;
int n;
char ary[27][3];

void prego(int num){
	cout << ary[num][0];
	for(int i = 1; i <= 2; i++){
		if(ary[num][i] == '.') continue;
		prego(int(ary[num][i] - 'A' + 1));
	}
}

void midgo(int num){
	if(ary[num][1] != '.'){
		midgo(ary[num][1] - 'A' + 1);
	}
	cout << ary[num][0];
	if(ary[num][2] != '.'){
		midgo(ary[num][2] - 'A' + 1);
	}
}

void surgo(int num){
	if(ary[num][1] != '.'){
		surgo(ary[num][1] - 'A' + 1);
	}
	if(ary[num][2] != '.'){
		surgo(ary[num][2] - 'A' + 1);
	}
	cout << ary[num][0];
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a >> b >> c;
		ary[a - 'A' + 1][0] = a;
		ary[a - 'A' + 1][1] = b;
		ary[a - 'A' + 1][2] = c;
	}
	prego(1);
	cout << '\n';
	midgo(1);
	cout << '\n';
	surgo(1);

	return 0;
}