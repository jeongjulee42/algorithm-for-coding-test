#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, cnt;
string str;

int recursion(string &s, int l, int r){
    cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(string &s){
    return recursion(s, 0, s.size()-1);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> str;
        cnt = 0;
        int ret = isPalindrome(str);
        cout << ret << ' ' << cnt << '\n';
    }

	return 0;
}

