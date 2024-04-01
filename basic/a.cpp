#include <bits/stdc++.h>
using namespace std;

int minVal = 987654321;
int maxVal = -987654321;
int n, m;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		int a = 0;
		cin >> a;
		minVal = min(minVal, a);
		maxVal = max(maxVal, a);
	}
	cout << minVal << " " << maxVal << '\n';

	return 0;
}
