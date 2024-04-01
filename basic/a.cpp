#include <bits/stdc++.h>
using namespace std;

int maxVal = -987654321;
int  m;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	for(int i = 0; i < 9; i++){
		int a = 0;
		cin >> a;
		if(maxVal < a) m = i;
		maxVal = max(maxVal, a);
	}
	cout << maxVal << '\n' << m + 1;

	return 0;
}
