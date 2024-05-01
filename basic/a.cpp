#include<bits/stdc++.h>
using namespace std;

int ary[101];
int n, m, a, b;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		ary[i] = i;
	}
	for(int i = 0; i < m; i++){
		cin >> a >> b;
		swap(ary[a], ary[b]);
	}
	for(int i = 1; i <= n; i++) cout << ary[i] << ' ';

	return 0;
}