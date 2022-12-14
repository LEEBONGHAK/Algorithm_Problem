#include <bits/stdc++.h>
using namespace std;

int cnt[1000];
int complete[1000];

bool cmp(vector<int> a, vector<int> b)
{
	return a[1] < b[1];
}

void set_res(vector<vector<int>> &quests, vector<int> &res)
{
	int j = quests.size();

	if (j == 0)
		return;

	for (int i = 0; i < j; i++)
	{
		if (cnt[quests[i][1]] == 1 && complete[quests[i][0]] == 1)
		{
			complete[quests[i][1]] = 1;
			res.push_back(quests[i][1]);
			quests.erase(quests.begin() + i);
			i--;
			j--;
		}
		else if (complete[quests[i][0]] == 0)
		{
			continue;
		}
		else if (cnt[quests[i][1]] != 1 && complete[quests[i][0]] == 1)
		{
			cnt[quests[i][1]]--;
			quests.erase(quests.begin() + i);
			i--;
			j--;
		}
	}
	set_res(quests, res);
}

vector<int> solution(int n, vector<vector<int>> quests)
{
	int i;
	vector<int> res;

	sort(quests.begin(), quests.end(), cmp);

	for (i = 0; i < quests.size(); i++)
		cnt[quests[i][1]]++;

	for (i = 1; i < n + 1; i++)
	{
		if (cnt[i] == 0)
		{
			res.push_back(i);
			complete[i] = 1;
		}
	}

	set_res(quests, res);

	return res;
}
