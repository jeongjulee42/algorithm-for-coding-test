#include<bits/stdc++.h>
using namespace std;

int ary[41];
int n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	ary[1] = 1; ary[2] = 1;
	for(int i = 3; i <= 40; i++){
		ary[i] = ary[i-1] + ary[i-2];
	}
	cout << ary[n] << ' ' << n - 2;

	return 0;
}