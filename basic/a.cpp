#include<bits/stdc++.h>
using namespace std;

char ary[36];
int num, n;
string ret;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	for(int i = 0; i < 10; i++){
		ary[i] = i + '0';
	}
	for(int i = 10; i < 36; i++){
		ary[i] = (i - 10) + 'A';
	}
	cin >> num >> n;
	while(num >= n){
		ret += ary[num % n];
		num = num / n;
	}
	ret += ary[num];
	reverse(ret.begin(), ret.end());
	cout << ret << '\n';

	return 0;
}







