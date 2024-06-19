#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

priority_queue<int> pq;


int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	pq.push(1);
	pq.push(0);
	pq.push(3);
	cout << pq.top() << '\n';
	pq.pop();
		cout << pq.top() << '\n';
	pq.pop();
		cout << pq.top() << '\n';
	pq.pop();

	return 0;
}