#include<bits/stdc++.h>
using namespace std;

struct Judge{
	int age, num;
	string name;
};
int n, a;
string str;
Judge ary[100004];

bool cmp(Judge a, Judge b){
	if(a.age < b.age) return true;
	else if(a.age < b.age) return false;
	else{
		return a.num < b.num;
	}
} 

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> str;
		ary[i] = {a, i, str};
	}
	sort(ary, ary + n, cmp);
	for(int i = 0; i < n; i++) cout << ary[i].age << ' ' << ary[i].name << '\n';

	return 0;
}