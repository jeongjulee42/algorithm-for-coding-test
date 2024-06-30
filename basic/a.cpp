#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	while(1){
		cin >> n >> m;
		if(n == 0 && m == 0) break;
		if(m % n == 0) cout << "factor" << '\n';
		else if(n % m == 0) cout << "multiple" << '\n';
		else cout << "neither" << '\n';
	}

	return 0;
}