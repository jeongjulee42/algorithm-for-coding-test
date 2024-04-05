#include <bits/stdc++.h>
using namespace std;

int t, n;
string p, ary;
vector<string> v;
vector<string> ret;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> t;
	for(int i = 0; i < t; i++){
		v.clear();
		cin >> p;
		cin >> n;
		cin >> ary;
		int flip = 1; int front = 0; int back = 0;
		for(int j = 0; j < p.size(); j++){
			if(p[j] == 'R') flip *= -1;
			else {
				if(flip > 0) front ++;
				else back ++;
			}
		}
		if(n < front + back){
			ret.push_back("error");
			continue;
		}
		string temp = "";
		for(int j = 1; j < ary.size() - 1; j++){
			if(ary[j] == ',') {
				v.push_back(temp);
				temp = "";
			}
			else temp += ary[j];
		}
		v.push_back(temp);
		temp = "";
		if(flip > 0){
			temp += '[';
			for(int j = front; j < v.size() - back; j++){
				temp += v[j];
				if(j != v.size() - back - 1) temp += ',';
			}
			temp += ']';
		}else{
			temp += '[';
			for(int j = v.size() - back - 1; j >= front; j--){
				temp += v[j];
				if(j != front) temp += ',';
			}
			temp += ']';
		}
		ret.push_back(temp);
	}
	for(string z : ret) cout << z << '\n';
	
	return 0;
}

