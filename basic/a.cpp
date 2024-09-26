#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string a, b;
int lcs[1004][1004];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> a;
    cin >> b;
    for(int i = 1; i <= a.size(); i++){
        for(int j = 1; j <= b.size(); j++){
            if(a[i-1] == b[j-1]){
                lcs[i][j] = lcs[i-1][j-1] + 1;
            }else{
                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
            }
        }
    }
    cout << lcs[a.size()][b.size()] << '\n';

	return 0;
}

