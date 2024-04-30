#include<bits/stdc++.h>
using namespace std;

int ary[101];
int n, m, a, b, c;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin >> a >> b >> c;
		for(int j = a; j <= b; j++){
			ary[j] = c;
		}
	}
	for(int i = 1; i <= n; i++){
		cout << ary[i] << ' ';
	}

	return 0;
}