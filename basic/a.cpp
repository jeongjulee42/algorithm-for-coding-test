#include <bits/stdc++.h>
using namespace std;

long long idx, temp, n;
long long visited[100001];
long long res;

long long pls(long long num){
	return (num * num + num) / 2 ;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	memset(visited, -1, sizeof(visited));
	for(long long i = 0; i < n; i++){
		cin >> temp;
		if(visited[temp] != -1){
			res += pls(i - idx);
			idx = max(visited[temp] + 1, idx);
			res -= pls(i - idx);
		}
		visited[temp] = i;
	}
	res += pls(n - idx);
	cout << res << '\n';
	return 0;
}

