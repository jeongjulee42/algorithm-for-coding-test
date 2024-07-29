#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ary[100001], n, m, temp, a, b;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> temp;
		ary[i] = ary[i - 1] + temp;
	}
	for(int i = 0; i < m; i++){
		cin >> a >> b;
		cout << ary[b] - ary[a - 1] << '\n';
	}

	return 0;
}