#include<bits/stdc++.h>
using namespace std;

int score;
int mnt, sec, tot;
int n, team;
int retOne, retTwo;

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d:%d", &team, &mnt, &sec);
        sec = mnt * 60 + sec;
        if(score > 0) retOne += sec - tot;
        else if(score < 0) retTwo += sec - tot;
        tot = sec;
        if(team == 1) score++;
        else score--;
    }
    if(score > 0) retOne += 48*60 - tot;
    else if(score < 0) retTwo += 48*60 - tot;
    printf("%02d:%02d\n%02d:%02d\n", retOne/60, retOne%60, retTwo/60, retTwo%60);
    return 0;
}
