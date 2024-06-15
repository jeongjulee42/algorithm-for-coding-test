#include<bits/stdc++.h>
using namespace std;

pair<int, int> ary[100004];
int n, a, b;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		ary[i] = {b, a};
	}
	sort(ary, ary + n);
	for(int i = 0; i < n; i++) cout << ary[i].second << ' ' << ary[i].first << '\n';

	return 0;
}