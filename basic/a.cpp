#include<bits/stdc++.h>
using namespace std;

int ary[3];
int a, b, c;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> ary[0] >> ary[1] >> ary[2];
	sort(ary, ary + 3);
	a = ary[0]; b = ary[1]; c = ary[2];
	if(a + b <= c){
		c = a + b - 1;
	}
	cout << a + b + c << '\n';
	return 0;
}







