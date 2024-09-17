#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, num, sq;
bool flag = 0;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int z = 0; z < n; z++){    
        cin >> num;
        if(num == 0 || num == 1 || num == 2){
            cout << 2 << '\n';
            continue;
        }
        if(num % 2 == 0) num++;
        while(1){
            sq = sqrt(num);
            int cnt = 0;
            for(int i = 2; i <= sq; i ++){
                if(num % i == 0) {
                    cnt++;
                    break;
                }
            }
            if(cnt){
                num += 2;
            }
            else{
                cout << num << '\n';
                break;
            }
        }
    }

	return 0;
}

