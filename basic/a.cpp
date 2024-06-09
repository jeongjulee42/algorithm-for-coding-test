#include<bits/stdc++.h>
using namespace std;

int a, b, c;
int ary[3];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	while(1){
		cin >> ary[0] >> ary[1] >> ary[2];
		if(ary[0] == 0 && ary[1] == 0 && ary[2] == 0) break;
		a = ary[0]; b = ary[1]; c = ary[2];
		sort(ary, ary + 3);
		if(a + b <= c) cout << "Invalid" << '\n';
		else if(a != b && b != c && c != a) cout << "Scalene" << '\n';
		else if(a == b && b == c) cout << "Equilateral" << '\n';
		else cout << "Isosceles" << '\n';
	}
	return 0;
}







