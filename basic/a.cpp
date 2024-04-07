#include <bits/stdc++.h>
using namespace std;

int ary[31];
int n;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	for(int i = 0; i < 28; i++){
		cin >> n;
		ary[n] = 1;
	}
	for(int i = 1; i < 31; i++){
		if(ary[i] == 0)cout << i << '\n';
	}
	
	return 0;
}

