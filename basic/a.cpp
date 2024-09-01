#include<bits/stdc++.h>
using namespace std;

int n;

void go(vector<char> & v, int s, int num){
	if(num == 1) return;
	int sx = s + (num / 3);
	for(int i = sx; i < sx + (num / 3); i++){
		v[i] = ' ';
	}
	for(int i = s; i < s + num; i += (num / 3)){
		go(v, i, num/3);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	while(cin >> n){
		int num = pow(3, n);
		vector<char> adj(num, '-');

		go(adj, 0, num);

		for(int i = 0; i < num; i++) cout << adj[i];
		cout << '\n';
	}
	
	return 0;
}