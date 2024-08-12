#include<bits/stdc++.h>
using namespace std;

int n, m;
bool visited[9];
vector<int> r;

void go(int num){
	if(r.size() == m){
		for(int i = 0; i < r.size(); i++ ) cout << r[i] << ' ';
		cout << '\n';
		return;
	}
	for(int i = num; i <= n; i++){
		r.push_back(i);
		go(i + 1);
		r.pop_back();
	}
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	go(1);

	return 0;
}