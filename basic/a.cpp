#include<bits/stdc++.h>
using namespace std;

string n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	sort(n.begin(), n.end(), greater<int>());
	cout << n << '\n';
	return 0;
}







