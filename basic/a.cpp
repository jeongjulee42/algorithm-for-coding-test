#include <bits/stdc++.h>
#include <bitset>
using namespace std;

string a, b, ret;
stack<int> stkA, stkB;
int c;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> a >> b;
	for(int i = 0; i < a.size(); i++) stkA.push(a[i]);
	for(int i = 0; i < b.size(); i++) stkB.push(b[i]);
	while(stkA.size() || stkB.size()){
		int a1 = 0; int b1 = 0;
		if(stkA.size()) {
			a1 = stkA.top() - '0'; stkA.pop();
		}
		if(stkB.size()) {
			b1 = stkB.top() - '0'; stkB.pop();
		}
		int temp = a1 + b1 + c;
		c = temp / 10;
		temp %= 10;
		ret = to_string(temp) + ret;
	}
	if(c) ret = to_string(c) + ret;
	cout << ret << '\n';
	return 0;
}

