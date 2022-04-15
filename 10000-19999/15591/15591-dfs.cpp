#include <iostream>
#include <map>

#define endl '\n'
using namespace std;

int N, Q, p, q, r, k, v, cnt;
map<int, int> mapsest[5001];
bool visited[5001];

void dfs(int node, int check_min)
{
	visited[node] = true;
	for (auto iter : mapsest[node])
	{
		if (min(iter.second, check_min) >= k && !visited[iter.first])
		{
			cnt++;
			dfs(iter.first, min(iter.second, check_min));
		}
	}
	visited[node] = false;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	cin >> N >> Q;
	for (int i = 0; i < N - 1; i++)
	{
		cin >> p >> q >> v;
		mapsest[p].insert(make_pair(q, v));
		mapsest[q].insert(make_pair(p, v));
	}
	
	for (int i = 0; i < Q; i++)
	{
		cnt = 0;
		cin >> k >> v;
		dfs(v, 1000000001);
		cout << cnt << endl;
	}

	return 0;
}