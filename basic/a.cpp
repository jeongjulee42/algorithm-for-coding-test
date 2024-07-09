#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string name, grade_s, score_s;
int grade, score;
int sum, multiSum;
int ret;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	for(int i = 0; i < 20; i++){
		cin >> name >> score_s >> grade_s;
		if(grade_s == "P") continue;
		score = (score_s[0] - '0') * 10 + (score_s[2] - '0');
		sum += score;
		if(grade_s[0] == 'A') grade = 40;
		else if(grade_s[0] == 'B') grade = 30;
		else if(grade_s[0] == 'C') grade = 20;
		else if(grade_s[0] == 'D') grade = 10;
		else grade = 0;
		if(grade_s.size() > 1 && grade_s[1] == '+') grade += 5;
		multiSum += grade * score;
	}
	cout << ((double)multiSum / sum) / 10 << '\n';

	return 0;
}