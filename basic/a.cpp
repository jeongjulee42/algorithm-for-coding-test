#include <bits/stdc++.h>
using namespace std;

int ary[20][20];
int n, minVal = 987654321;

int go(vector<int> l, vector<int> r){
	int left = 0, right = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(find(l.begin(), l.end(), i) != l.end() && find(l.begin(), l.end(), j) != l.end()) left += ary[i][j];
			else if(find(r.begin(), r.end(), i) != r.end() && find(r.begin(), r.end(), j) != r.end()) right += ary[i][j];
		}
	}
	return abs(left - right);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> ary[i][j];
		}
	}
	for(int i = 0; i < (1 << n); i++){
		if(__builtin_popcount(i) != n / 2)continue;
		vector<int> l;
		vector<int> r;
		for(int j = 0; j < n; j++){
			if(i & (1 << j)) l.push_back(j);
			else r.push_back(j);
		}
		minVal = min(minVal, go(l, r));
	}
	cout << minVal << '\n';
	return 0;
}

