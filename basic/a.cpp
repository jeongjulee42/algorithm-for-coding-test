#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, tot, start = 2;
//초기 4-0 4개 | 1번 3 5-4 9개 | 2번 5 16-9 25개 | 3번 9 25- 81개 | 

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		start += start - 1;
		tot = start * start;
	}
	cout << tot << '\n';

	return 0;
}