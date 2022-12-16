#include <bits/stdc++.h>
using namespace std;

string solution(string vote)
{
	int i = 0;
	int	a_cnt = 0, b_cnt = 0, c_cnt = 0;

	for (i = 0; i < vote.size(); i++)
		if (vote[i] == 'A') a_cnt++;
		else if (vote[i] == 'B') b_cnt++;
		else c_cnt++;

	if (c_cnt >= vote.size() / 2) return "C";

	if (a_cnt == b_cnt) return "AB";
	else if (a_cnt > b_cnt) return "A";
	else return "B";
}

int main()
{
	string votes[3] = { "ABBCCCBBAB", "AAACABCBBB", "AAAABCCCCC"};

	for (int i = 0; i < 3; i++)
		cout << solution(votes[i]) << "\n";
	return 0;
}