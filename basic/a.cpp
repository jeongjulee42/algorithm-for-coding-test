#include<bits/stdc++.h>
using namespace std;

int ary[] = {1, 1, 2, 2, 2, 8};
int temp[6], num;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	for(int i = 0; i < 6; i++){
		cin >> num;
		temp[i] = ary[i] - num;
	}
	for(int i = 0; i < 6; i++) cout << temp[i] << ' ';

	return 0;
}