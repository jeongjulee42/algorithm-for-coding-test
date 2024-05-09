#include<bits/stdc++.h>
using namespace std;

double ary[20][20], bry[20][20];
int a, b;
int s[] = {0, 1, 4, 6, 8, 9, 10, 12, 14, 15, 16, 18};

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b;
	double c = (double)a / 100;
	double d = (double)b / 100;

	ary[1][0] = 1 - c; ary[1][1] = c;
	bry[1][0] = 1 - d; bry[1][1] = d;

	for(int i = 2; i <= 18; i++){
		for(int j = 0; j <= i; j++){
			double temp = j - 1 < 0 ? 0 : ary[i - 1][j - 1];
			double temp2 = j - 1 < 0 ? 0 : bry[i - 1][j - 1];
			ary[i][j] = (c * temp) + ((1 - c) * ary[i - 1][j]);
			bry[i][j] = (d * temp2) + ((1 - d) * bry[i - 1][j]);
		}
	}


	double reta = 0, retb = 0;
	for(int i = 0; i < 12; i++){
		int num = s[i];
		reta += ary[18][num];
		retb += bry[18][num];
	}
	cout << reta << '\n';
	cout << 1 - (reta * retb) << '\n';

	return 0;
}