#include<bits/stdc++.h>
using namespace std;

int a, b, c;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> a >> b >> c;
	if(a + b + c != 180) cout << "Error" << '\n';
	else if(a != b && b != c && c != a) cout << "Scalene" << '\n';
	else if(a == b && b == c) cout << "Equilateral" << '\n';
	else cout << "Isosceles" << '\n';

	return 0;
}







