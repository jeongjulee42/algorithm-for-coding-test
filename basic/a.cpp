#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	int temp = n * 2 - 1;
	for(int i = 1; i <= temp; i++){
		int j = abs(n - i);
		for(int k = 1; k <= j; k++) cout << ' ';
		for(int k = 1; k <= (n - j) * 2 - 1; k++) cout << '*';
		cout << '\n';
	}

	return 0;
}