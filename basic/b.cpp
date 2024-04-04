#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int t;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> t;
	for(int i = 0; i < t; i++){
		string str = ""; int arySize = 0; int num = 0;
		cin >> str;
		cin >> arySize;
		
		int temp = 1, front = 0, back = 0;
		for(int j = 0; j < str.size(); j++){
			if(str[j] == 'R') temp *= -1;
			else if(str[j] == 'D'){
				if(temp < 0) back++;
				else front++;
			}
		}
		if(arySize < front + back) ary = "error";
		else if(arySize == front + back) ary = "[]";
		else{
			ary = ary.substr(0, ary.size() - (back * 2) - 1);
			ary = ary.substr(front * 2 + 1);
			if(temp < 0) {
				reverse(ary.begin(), ary.end());
			}
		}
		v.push_back(ary);
	}


	return 0;
}

