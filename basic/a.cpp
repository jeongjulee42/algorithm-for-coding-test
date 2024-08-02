#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m, ret, a, b;
vector<int> ary[101];
bool visited[101];

void go(int k){
	visited[k] = 1;
	for(int i : ary[k]){
		if(visited[i]) continue;
		go(i);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin >> a >> b;
		ary[a].push_back(b);
		ary[b].push_back(a);
	}
	go(1);
	for(int i = 1; i <= n; i++){
		if(visited[i]) ret++;
	}
	cout << ret - 1 << '\n';

	return 0;
}