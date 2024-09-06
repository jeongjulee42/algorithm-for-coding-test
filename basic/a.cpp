#include<bits/stdc++.h>
using namespace std;

string str;
int ary[200004][26];
int n, s, e;
char c;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);




    cin >> str;
    str = ' ' + str;
    for(int i = 1; i < str.size(); i++){
        for(int j = 0; j < 26; j++) ary[i][j] = ary[i - 1][j];
        ary[i][int(str[i] - 'a')]++;
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c >> s >> e;
        cout << ary[e + 1][int(c - 'a')] - ary[s][int(c - 'a')] << '\n';
    }

	return 0;
}