#include<bits/stdc++.h>
using namespace std;

int n;
int ret[100001];
vector<int> ary[100001];
int a, b;

void go(int from){
	for(int i = 0; i < ary[from].size(); i++){
		if(ret[ary[from][i]] != 0) continue;
		ret[ary[from][i]] = from;
		go(ary[from][i]);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 1; i < n; i++){
		cin >> a >> b;
		ary[a].push_back(b);
		ary[b].push_back(a);
	}
	go(1);
	for(int i = 2; i <= n; i++){
		cout << ret[i] << '\n';
	}

	return 0;
}