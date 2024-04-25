#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	string str = "";
	int n = 0;
	cin >> n;
	cin >> str;
	int sum = 0;
	for(int i = 0; i < str.size(); i++){
		int num = str[i] - '0';
		sum += num;
	}
	cout << sum << '\n';


	return 0;
}