#include<bits/stdc++.h>
using namespace std;

struct Str{
    int number;
    int order;
    int size;
    Str(int number, int order, int size) : number(number), order(order), size(size){}
    Str(){number = 0; order = 0; size = 0;}
    bool operator < (const Str & a) const {
        if(size == a.size) return order < a.order;
        return size > a.size;
    }
};

int n, c, temp;
vector<Str> v;
set<int> s;

int main(){
    cin >> n >> c;
    for(int i = 0; i < n; i++){
        cin >> temp;
        int t = s.size();
        s.insert(temp);
        if(t == s.size()){
            for(int j = 0; j < v.size(); j++){
                if(v[j].number == temp) v[j].size ++ ;
            }
        }else v.push_back({temp, i, 1});
    }
    sort(v.begin(), v.end());
    for(Str b : v){
        for(int i = 0; i < b.size; i++){
            cout << b.number << " ";
        }
    }

    return 0;
}