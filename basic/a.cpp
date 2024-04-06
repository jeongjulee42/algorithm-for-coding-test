#include <bits/stdc++.h>
using namespace std;

int n, score, maxVal;
double sum;
double ary[1004];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> score;
		maxVal = max(maxVal, score);
		ary[i] = score;
	}
	for(int i = 0; i < n; i++){
		ary[i] = double(ary[i] / maxVal) * 100;
		sum += ary[i];
	}
	cout.precision(4);
	cout << sum / n << '\n';
	
	return 0;
}

