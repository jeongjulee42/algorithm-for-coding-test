#include<bits/stdc++.h>
using namespace std;

int n, w, v, k;
int ary[100004];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> w >> v;
		for(int j = k; j >= w; j--){
			ary[j] = max(ary[j], v + ary[j - w]);
		}
	}
	cout << ary[k] << '\n';
	return 0;
}