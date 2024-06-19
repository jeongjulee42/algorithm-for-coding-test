#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int t, n, m;
int ary[100004];
int tree[200004];

void update(int i, int value){
	while(i <= 200004){
		tree[i] += value;
		i += (i & -i);
	}
}

int sum(int i){
	int ret = 0;
	while(i > 0){
		ret += tree[i];
		i -= (i & -i);
	}
	return ret;
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	while(t--){
		memset(ary, 0, sizeof(ary));
		memset(tree, 0, sizeof(tree));
		cin >> n >> m;
		int idx = 100001;
		for(int i = 1; i <= n; i++){
			ary[i] = i + idx;
			update(i + idx, 1);
		}
		for(int i = 0; i < m; i++){
			int temp = 0;
			cin >> temp;
			int _idx = ary[temp];
			cout << sum(_idx) - 1 << ' ';
			update(_idx, -1);
			update(--idx, 1);
			ary[temp] = idx;
		}
		cout << '\n';
	}

	return 0;
}