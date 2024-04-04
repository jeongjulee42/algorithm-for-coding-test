#include <bits/stdc++.h>
using namespace std;

int n, k, m;
vector<char> start = {'a','n','t','i','c'};
vector<string> v;

void go(int m, int cnt){
	
	if(cnt == k - 5){
		
		return;
	}

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		string str = "";
		cin >> str;
		str = str.substr(4, str.size() - 8);
		set<char> s;
		for(int j = 0; j < str.size(); j++){
			if(find(start.begin(), start.end(), str[j]) == start.end()){
				s.insert(str[j]);
			}
		}
		str = "";
		for(char c : s) str += c;
		v.push_back(str);
	}
	if(k < 5) {
		cout << 0 << '\n';
		exit(0);
	}
	for(int i = 0; i < 5; i++){
		m |= (1 << (start[i] - 'a'));
	}
	
	
	return 0;
}

