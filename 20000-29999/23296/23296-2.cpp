#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

vector<int> adj;
vector<int> indegree;
queue<int> q;

void dfs(int n)
{
  q.emplace(adj[n]);
  indegree[n] = -1;

  if (indegree[adj[n]] >= 0)
  {
    dfs(adj[n]);
  }
}

int main()
{
  int N;
  cin >> N;

  adj.resize(N);
  indegree.resize(N, 0);

  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    adj[i] = a - 1;
    indegree[a - 1]++;
  }

  dfs(0);
  for (int i = 0; i < N; i++)
  {
    if (!indegree[i])
    {
      q.emplace(i);
      dfs(i);
    }
  }

  // 사이클인 경우들
  for (int i = 0; i < N; i++)
  {
    if (indegree[i] > 0)
    {
      q.emplace(i);
      dfs(i);
    }
  }

  if (q.front() == 0)
    q.pop();

  cout << q.size() << endl;
  while (!q.empty())
  {
    cout << q.front() + 1 << ' ';
    q.pop();
  }

  return 0;
}