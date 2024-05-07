#include<bits/stdc++.h>
using namespace std;

int num;
int ary[1000004];
vector<int> ret;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> num;
	queue<int> q;
	q.push(num);
	while(q.size()){
		int temp = q.front(); q.pop();
		if(temp == 1) {
			ret.push_back(1);
			break;
		}
		if(!ary[temp - 1]){
			q.push(temp - 1);
			ary[temp - 1] = temp;
		}
		if(temp % 2 == 0 && !ary[temp / 2]) {
			q.push(temp / 2); ary[temp / 2] = temp;
		}
		if(temp % 3 == 0 && !ary[temp / 3]){
			q.push(temp / 3); ary[temp / 3] = temp;
		}
	}
	int temp = 1;
	while(ary[temp]){
		ret.push_back(ary[temp]);
		temp = ary[temp];
	}
	cout << ret.size() - 1 << '\n';
	reverse(ret.begin(), ret.end());
	for(int a : ret) cout << a << ' ';
	return 0;
}