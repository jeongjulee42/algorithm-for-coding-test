#include<bits/stdc++.h>
using namespace std;

int ary[5], sum;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	for(int i = 0; i < 5; i++) {
		cin >> ary[i];
		sum += ary[i];
	}
	sort(ary, ary + 5);
	cout << sum / 5 << '\n' << ary[2] << '\n';
	
	return 0;
}







