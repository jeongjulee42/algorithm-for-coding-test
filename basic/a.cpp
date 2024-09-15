#include<bits/stdc++.h>
using namespace std;

deque<int> dq;
int ary[1000];
int n, temp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++ ){
        cin >> ary[i];
        dq.push_back(i);
    }
    
    while(dq.size()){
        temp = dq.front();
        cout << temp + 1 << ' ';
        dq.pop_front();
        if(ary[temp] >= 0){
            for(int i = 1; i < ary[temp]; i++){
                int num = dq.front();
                dq.pop_front();
                dq.push_back(num);
            }
        }else{ 
            for(int i = 0; i > ary[temp]; i--){
                int num = dq.back();
                dq.pop_back();
                dq.push_front(num);
            }
        }
    }

	return 0;
}

