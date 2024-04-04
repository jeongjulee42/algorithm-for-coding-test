#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int n, l, ret;
int ary[100][100];
vector<stack<int>> v;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> l;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> ary[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		stack<int> temp;
		for(int j = 0; j < n; j++){
			temp.push(ary[i][j]);
		}
		v.push_back(temp);
	}
	for(int i = 0; i < n; i++){
		stack<int> temp;
		for(int j = 0; j < n; j++){
			temp.push(ary[j][i]);
		}
		v.push_back(temp);
	}
	for(int i = 0; i < v.size(); i++){
		stack<int> stk = v[i];
		int cnt = 1;
		int here = stk.top(); stk.pop();
		while(stk.size()){
			if(here == stk.top()){
				cnt++;
				stk.pop();
			}else{
				if(abs(here - stk.top()) > 1) break;
				else if(here < stk.top()){
					if(cnt < l) break;
					else{
						here = stk.top();
						stk.pop();
						cnt = 1;
					}
				}else if (here > stk.top()){
					// stk 비어있는경우 생각.
					if(l > stk.size()) break;
					here = stk.top(); stk.pop();
					int flag = 0;
					for(int j = 1; j < l; j++){
						int temp = stk.top();
						if(here != temp) {
							flag = 1;
							break;
						}
						stk.pop();
					}
					if(flag) break;
					cnt = 0;
				}	
			}
		}
		if(!stk.size()) ret++;
	}
	cout << ret << '\n';
	return 0;
}

