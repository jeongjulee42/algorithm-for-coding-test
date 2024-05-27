#include<bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;
int n, temp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> temp;
		if(temp == 0){
			if(pq.size() == 0) cout << 0 << '\n';
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else{
			pq.push(temp);
		}
	}
	
	return 0;
}







