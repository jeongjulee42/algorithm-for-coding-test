#include<bits/stdc++.h>
using namespace std;

int x, start = 1, n;
// 2-1, 3-2, 4-3, 5-4,

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> x;
	while(n < x){
		n += start;
		start++;
	}
	cout << "n:" << n << " start:" << start << '\n';
	return 0;
}