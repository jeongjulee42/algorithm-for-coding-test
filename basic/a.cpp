#include <bits/stdc++.h>
using namespace std;

bool ary[20][20];
int n, minVal = 987654321;;

int check(){
	int cnt = 0;
	for(int i = 0; i < n; i++){
		int b = 0;
		for(int j = 0; j < n; j++){
			b += ary[j][i];
		}
		if(b > n/2){
			b = n - b;
		}
		cnt += b;
	}
	return cnt;
}

void convert(vector<int> t){
	for(int i = 0; i < t.size(); i++){
		int c = t[i];
		for(int j = 0; j < n; j++){
			if(ary[c][j] == 0) ary[c][j] = 1;
			else ary[c][j] = 0;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			char c = '0';
			cin >> c;
			if(c == 'T') ary[i][j] = 1;
			else ary[i][j] = 0;
		}
	}
	for(int i = 0; i < (1 << n); i++){
		vector<int> temp;
		for(int j = 0; j < n; j++){
			if(i & (1 << j)){
				temp.push_back(j);
			}
		}
		convert(temp);
		int t = check();
		minVal = min(minVal, t);
		convert(temp);
	}
	cout << minVal << '\n';
	return 0;
}

