#include<bits/stdc++.h>
using namespace std;

vector<int> ary[2004];
int str[2004];
int s, e, n, m, a, b;

int check(int start, int last){
	if(start == last) return 1;
	if(str[start] == str[last]){
		if(last - 1 <= start + 1) return 1;
		if(ary[last - 1][start + 1]) return 1;
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> str[i];
		for(int j = 0; j <= i; j++){
			ary[i].push_back(check(j, i));
		}
	}
	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> a >> b;
		cout << ary[b-1][a-1] << '\n';
	}
	return 0;
}