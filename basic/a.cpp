#include<bits/stdc++.h>
using namespace std;

string str;
vector<string> v = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> str;
	int sum = 0;
	for(int i = 0; i < str.size(); i++){
		char c = str[i];
		for(int j = 0; j < v.size(); j++){
			string t = v[j];
			for(int k = 0; k < t.size(); k++){
				if(t[k] == c){
					sum += (3 + j);
				}
			}
		}
	}
	cout << sum << '\n';
	return 0;
}