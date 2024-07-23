#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m, t, h, b;



int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> m >> n;
		// if(m == n) {
		// 	cout << 1 << '\n';
		// 	continue;
		// }
		m = min(m, n - m);
		b = 1; h = 1;
		for(ll j = n; j > n - m; j--){
			h *= j;
		}
		for(ll j = m; j > 1; j--) b *= j;

		cout << h / b << '\n';
	}
	
	return 0;
}