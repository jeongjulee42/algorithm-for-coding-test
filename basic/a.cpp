#include <bits/stdc++.h>
#include <bitset>
using namespace std;



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int x = 0;
	cin >> x;
	int cnt = 0;
	for(int i = 0; i <= 6; i++){
		if(x & (1 << i))cnt++;
	}
	cout << cnt << '\n';
	return 0;
}

