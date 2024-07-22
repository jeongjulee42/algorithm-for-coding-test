#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int ary[51];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; i++) cin >> ary[i];
	sort(ary, ary + n);
	cout << ary[0] * ary[n - 1] << '\n';

	return 0;
}