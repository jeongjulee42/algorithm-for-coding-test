#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m, k, a, b, c;

ll sum(vector<ll> tree, int i){
	ll ans = 0;
	while(i > 0){
		ans += tree[i];
		i -= (i & -i);
	}
	return ans;
}

void update(vector<ll> &tree, ll diff, int i){
	while(i < tree.size()){
		tree[i] += diff;
		i += (i & -i);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> k;
	vector<ll> tree(n + 1);
	vector<ll> ary(n + 1);
	for(int i = 1; i <= n; i++){
		cin >> ary[i];
		update(tree, ary[i], i);
	}
	m += k;
	while(m--){
		cin >> a >> b >> c;
		if(a == 1){
			ll diff = c - ary[b];
			ary[b] = c;
			update(tree, diff, b);
		} else{
			cout << sum(tree, c) - sum(tree, b - 1) << '\n';
		}
	}

	return 0;
}