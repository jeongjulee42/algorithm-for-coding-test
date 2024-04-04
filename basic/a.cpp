#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int n, k, m, maxVal = -987654321;
vector<char> start = {'a','n','t','i','c'};
vector<int> v;

void go(int b, int idx, int cnt){
	if(cnt == k - 5){
		int num = 0;
		for(int temp : v){
			if((temp & b) == temp) num++;
		}
		maxVal = max(maxVal, num);
		return;
	}
	for(int i = idx; i < 26; i ++){
		if(b & (1 << i)) continue;
		go(b | (1 << i), i + 1, cnt + 1);
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
			s.insert(str[j]);	
		}
		int temp = 0;
		for(char c : s) temp |= (1 << (c - 'a'));
		v.push_back(temp);
	}
	if(k < 5) {
		cout << 0 << '\n';
		exit(0);
	}
	for(int i = 0; i < 5; i++){
		m |= (1 << (start[i] - 'a'));
	}
	go(m, 0, 0);
	
	cout << maxVal << '\n';
	return 0;
}

