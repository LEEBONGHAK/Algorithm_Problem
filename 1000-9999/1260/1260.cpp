#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, m, v, tmp1, tmp2;
int arr[1001][1001];
bool check[1001];

void dfs(int node)
{
    cout << node << " ";
    check[node] = true;

    for (int i = 1; i <= n; i++)
    {
        if (arr[node][i] && !check[i])
            dfs(i);
    }
}

void bfs(int node)
{
    queue<int> q;

    q.push(node);
    check[node] = true;

    while (!q.empty())
    {
        int q_element = q.front();
        cout << q_element << " ";
        q.pop();

        for (int i = 1; i <= n; i++)
        {
            if (arr[q_element][i] && !check[i])
            {
                check[i] = true;
                q.push(i);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> v;
    for (int i = 0; i < m; i++)
    {
        cin >> tmp1 >> tmp2;
        arr[tmp1][tmp2]++;
        arr[tmp2][tmp1]++;
    }

    dfs(v);
    cout << endl;
    memset(check, false, sizeof(check));
    bfs(v);
    cout << endl;

    return 0;
}