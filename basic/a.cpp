#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k;
int u = 1, d = 1;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;
	for(int i = n - k + 1; i <= n; i++){
		u *= i;
	}
	for(int i = 1; i <= k; i++){
		d *= i;
	}
	cout << u / d << '\n';

	return 0;
}