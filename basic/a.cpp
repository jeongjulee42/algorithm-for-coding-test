#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int lis[1004];
int n, ret, len, num;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++ ){
		cin >> num;
		auto lp = lower_bound(lis, lis + len, num);
		if(*lp == 0) len++;
		*lp = num;
	}
	cout << len << '\n';


	return 0;
}