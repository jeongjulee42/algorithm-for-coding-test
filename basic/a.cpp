#include <bits/stdc++.h>
using namespace std;

int a;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> a;
	for(int i = 1; i <= a; i++){
		for(int j = 0; j < a - i; j++) cout << " ";
		for(int j = 0; j < i; j++) cout << "*";
		cout << '\n';
	}

	return 0;
}
