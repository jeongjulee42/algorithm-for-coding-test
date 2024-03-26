#include<bits/stdc++.h>
using namespace std;

int k;
char ary[9];
int number[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
vector<string> ret;

int main(){

    cin >> k;
    for(int i = 0; i < k; i++){
        cin >> ary[i];
    }

    do{
        int flag = 0;
        for(int i = 0; i < k; i++){
            if(ary[i] == '<'){
                if(!(number[i] < number[i+1])) {
                    flag = 1;
                    break;
                }
            }else{
                if(!(number[i] > number[i+1])) {
                    flag = 1;
                    break;
                }
            }
        }
        if(!flag){
            string str = "";
            for(int i = 0; i < k+1; i++){
                str += to_string(number[i]);
            }
            ret.push_back(str);
        }
    }while(next_permutation(number, number + 10));
    
    cout << ret[ret.size() - 1] << '\n' << ret[0] << '\n';

    return 0;
}