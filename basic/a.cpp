#include <bits/stdc++.h>
using namespace std;

set<int> s;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	for(int i = 0; i < 10; i ++){
		int t = 0;
		cin >> t;
		s.insert(t % 42);
	}
	cout << s.size();

	return 0;
}

