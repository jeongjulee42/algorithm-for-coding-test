#include<bits/stdc++.h>
using namespace std;


int n, m, t;
int ary[100004];

int bs(int target, int startn, int endn){
	while(startn <= endn){
		int mid = (startn + endn) / 2;
		if(ary[mid] == target) return 1;
		else if(ary[mid] > target) endn = mid - 1;
		else startn = mid + 1;
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++) cin >> ary[i];
	sort(ary, ary + n);
	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> t;
		cout << bs(t, 0, n - 1) << '\n';
	}

	return 0;
}