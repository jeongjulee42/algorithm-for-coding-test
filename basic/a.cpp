#include <bits/stdc++.h>
#include <bitset>
using namespace std;

set<int> s;
int n, inpt;
string str;

void add(int x){
	s.insert(x);
}
void remove(int x){
	if(find(s.begin(), s.end(), x) != s.end()){
		s.erase(x);
	}
}
void check(int x){
	if(find(s.begin(), s.end(), x) != s.end()){
		cout << 1 << '\n';
	}else cout << 0 << '\n';
}
void toggle(int x){
	if(find(s.begin(), s.end(), x) != s.end()){
		s.erase(x);
	}else s.insert(x);
}
void all(){
	s = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
}
void empty(){
	s = {};
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	vector<string> vec;
	
	cin >> n;
	string buffer = "";
	getline(cin, buffer);
	for(int i = 0; i < n; i++){
		getline(cin, str);
		if(str.find(" ") != string::npos){
			auto end = str.find(" ");
			inpt = stoi(str.substr(end + 1));
			str = str.substr(0, end);
		}
		if(str == "add") add(inpt);
		else if(str == "remove") remove(inpt);
		else if(str == "check") check(inpt);
		else if(str == "toggle") toggle(inpt);
		else if(str == "all") all();
		else empty();
	}

	return 0;
}

