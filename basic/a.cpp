#include <bits/stdc++.h>
using namespace std;

const int INF = -987654321;
int sum, num, maxVal = INF, n;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> num;
		if(sum < 0){
			sum = 0;
		}
		if(sum + num <= 0){
			sum = num;
		}else{
			sum += num;
		}
		maxVal = max(maxVal, sum);
	}
	cout << maxVal << '\n';
	return 0;
}

