#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, ret = 1, start = 1, i = 1;

//6 12 18 24 30...
int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	while(n > start){
		ret ++;
		start += i * 6;
		i++;
	}
	cout << ret << '\n';

	return 0;
}