#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


struct cmp{
	bool operator()(int a, int b){
		if(abs(a) > abs(b)) return true;
		else if(abs(a) < abs(b)) return false;
		else{
			if(a > b) return true;
			else return false;
		}
	}
};
priority_queue<int, vector<int>, cmp> pq;
int n, x;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x;
		if(x == 0){
			if(pq.size()){
				cout << pq.top() << '\n';
				pq.pop();
			} else{
				cout << 0 << '\n';
			}
		}else{
			pq.push(x);
		}
	}

	return 0;
}