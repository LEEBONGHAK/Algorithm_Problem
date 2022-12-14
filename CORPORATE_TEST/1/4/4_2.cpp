#include <bits/stdc++.h>
using namespace std;

/*
	위상 정렬(Topology Sort)
	- 순서가 정해져 있는 작업을 차례로 수행해야 할 때 그 순서를 결정해주기 위해 사용하는 알고리즘

	참조 자료
	- https://m.blog.naver.com/ndb796/221236874984
	- https://gmlwjd9405.github.io/2018/08/27/algorithm-topological-sort.html
*/

int inDegree[501];
vector<int> a[501];

vector<int> solution(int n, vector<vector<int>> quests)
{
	int i, j;
	vector<int> res;
	queue<int> q;

	for (i = 0; i < quests.size(); i++)
	{
		a[quests[i][0]].push_back(quests[i][1]);
		inDegree[quests[i][1]]++;
	}

	for (i = 1; i <= n; i++)
		if (inDegree[i] == 0)
			q.push(i);

	for (i = 1; i <= n; i++)
	{
		if (q.empty())
			break;
		int x = q.front();
		q.pop();
		res.push_back(x);
		for (j = 0; j <= a[x].size(); j++)
		{
			int y = a[x][j];
			if (--inDegree[y] == 0)
				q.push(y);
		}
	}

	return res;
}
