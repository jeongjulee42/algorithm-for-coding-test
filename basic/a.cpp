#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ary[1001], n, ret, temp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++) cin >> ary[i];
	sort(ary, ary + n);
	for(int i = 1; i < n; i++) {
		ary[i] = ary[i - 1] + ary[i]; 
	}
	for(int i = 0; i < n; i++){
		ret += ary[i];
	}
	cout << ret << '\n';

	return 0;
}