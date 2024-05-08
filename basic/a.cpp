#include<bits/stdc++.h>
using namespace std;

int n, k, num, ary[10001];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> num;
		for(int j = 1; j <= k; j++){
			int temp = max(0, j - num);
			ary[j] = ary[j] + ary[temp];
			if(num == j) ary[j]++;
		}
	}
	cout << ary[k] << '\n';
	return 0;
}