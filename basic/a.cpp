#include<bits/stdc++.h>
using namespace std;
int a[9];
pair<int, int> b;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int sum = 0;
	for(int i = 0; i < 9; i++ ){
		cin >> a[i];
		sum += a[i];
	}
	for(int i = 0; i < 9; i++){
		for(int j = i + 1; j < 9; j++){
			if(sum - a[i] - a[j] == 100){
				b.first = a[i];
				b.second = a[j];
			}
		}
	}
	sort(a, a+9);
	for(int i : a){
		if(i == b.first || i == b.second) continue;
		cout << i << '\n';
	}

	return 0;
}