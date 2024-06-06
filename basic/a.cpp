#include<bits/stdc++.h>
using namespace std;

long long x1 = 100004, x2 = -100004, y = 100004, y2 = -100004;
int n;
long long a, b;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		x1 = min(x1, a);
		x2 = max(x2, a);
		y = min(y, b);
		y2 = max(y2, b);
	}
	cout << (x2 - x1) * (y2 - y) << '\n';
	return 0;
}







