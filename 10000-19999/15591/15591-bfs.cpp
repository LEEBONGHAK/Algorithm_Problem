#include <iostream>
#include <map>
#include <queue>
#include <cstring>

#define endl '\n'
using namespace std;

int N, Q, p, q, r, k, v, cnt;
map<int, int> mapset[5001];
bool visited[5001];

void bfs(int node)
{
	queue<int> qset;

	qset.push(node);
	visited[node] = true;
	while (!qset.empty())
	{
		auto q_element = qset.front();
		qset.pop();

		for (auto iter : mapset[q_element])
		{
			if (iter.second >= k && !visited[iter.first])
			{
				cnt++;
				visited[iter.first] = true;
				qset.push(iter.first);
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	cin >> N >> Q;
	for (int i = 0; i < N - 1; i++)
	{
		cin >> p >> q >> v;
		mapset[p].insert(make_pair(q, v));
		mapset[q].insert(make_pair(p, v));
	}
	
	for (int i = 0; i < Q; i++)
	{
		memset(visited, false, sizeof(visited));
		cnt = 0;
		cin >> k >> v;
		bfs(v);
		cout << cnt << endl;
	}

	return 0;
}