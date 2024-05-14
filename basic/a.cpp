#include<bits/stdc++.h>
using namespace std;

int number[] = {6,2,5,5,4,5,6,3,7,6};
string minAry[101];
string maxAry[101];
int n, m;

bool cmp(string a, string b){
	if(a.size() > b.size()) return true;
	else if (a.size() < b.size()) return false;
	for(int i = 0; i < a.size(); i++){
		if(a[i] > b[i]) return true;
		else if(a[i] < b[i]) return false;
	}
	return true;
}

string makeMin(string s, string a){
	if(a == "0"){
		if(s == "") return "6";
		return s[0] + a + s.substr(1);
	}
	return a + s;
}

string makeMax(string s, string a){
	return s + a;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	for(int i = 9; i >= 0; i--){
		int num = number[i];
		for(int j = num; j <= 100; j++){
			if(j - num != 0 && minAry[j - num] == "") continue;
			string temp = makeMin(minAry[j - num], to_string(i));
			if(minAry[j] == "") minAry[j] = temp;
			else minAry[j] = cmp(minAry[j], temp) ? temp : minAry[j];

			string temp2 = makeMax(maxAry[j - num], to_string(i));
			maxAry[j] = cmp(maxAry[j], temp2) ? maxAry[j] : temp2;
		}
	}
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> m;
		cout << minAry[m] << ' ' << maxAry[m] << '\n';
	}

	return 0;
}







