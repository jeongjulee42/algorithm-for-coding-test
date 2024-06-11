#include<bits/stdc++.h>
using namespace std;

string str;
int n, ret;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> str >> n;
	for(int i = 0; i < str.size(); i++){
		int temp = 0;
		int num = str.size() - i - 1;
		if(str[num] > '9') temp = str[num] - 'A' + 10;
		else temp = str[num] - '0';
		ret += ((int)pow(n, i) * temp);
	}
	cout << ret << '\n';
	return 0;
}







