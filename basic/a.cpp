#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m, l, r;
vector<int> ary;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		ary.push_back(i + 1);
	}
	for(int i = 0; i < m; i++){
		cin >> l >> r;
		reverse(ary.begin() + l - 1, ary.begin() + r);
	}
	for(int i : ary) cout << i << ' ';
	cout << '\n';
	return 0;
}