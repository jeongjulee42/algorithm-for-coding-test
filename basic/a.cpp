#include<bits/stdc++.h>
using namespace std;

int n, m;
bool visited[9];
vector<int> r;

void go(){
	if(r.size() == m){
		for(int i = 0; i < r.size(); i++ ) cout << r[i] << ' ';
		cout << '\n';
		return;
	}
	for(int i = 1; i <= n; i++){
		if(visited[i]) continue;
		r.push_back(i);
		//visited[i] = 1;
		go();
		r.pop_back();
		//visited[i] = 0;
	}
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	go();

	return 0;
}