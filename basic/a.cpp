#include<bits/stdc++.h>
using namespace std;

deque<int> dq;
int n, c, num;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c;
        if(c == 1){
            cin >> num;
            dq.push_front(num);
        }else if (c == 2){
            cin >> num;
            dq.push_back(num);
        }else if (c == 3){
            if(dq.size()){
                cout << dq.front() << '\n';
                dq.pop_front();
            }else{
                cout << -1 << '\n';
            }
        }else if (c == 4){
            if(dq.size()){
                cout << dq.back() << '\n';
                dq.pop_back();
            }else{
                cout << -1 << '\n';
            }
        }else if (c == 5){
            cout << dq.size() << '\n';
        }else if (c == 6){
            if(dq.size()){
                cout << 0 << '\n';
            }else{
                cout << 1 << '\n';
            }
        }else if (c == 7){
            if(dq.size()){
                cout << dq.front() << '\n';
            }else{
                cout << -1 << '\n';
            }
        }else{
            if(dq.size()){
                cout << dq.back() << '\n';
            }else{
                cout << -1 << '\n';
            }
        }
    }

	return 0;
}

