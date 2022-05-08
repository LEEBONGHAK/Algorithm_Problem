#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int t, m, n, k, x, y, res;
int arr[51][51];
bool check[51][51];
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, 1, -1};

void bfs(int y, int x)
{
    check[y][x] = true;
    queue<pair<int, int>> q;

    q.push(make_pair(y, x));
    while (!q.empty())
    {
        y = q.front().first;
        x = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= n || nx < 0 || nx >= m)
                continue;
            if (arr[ny][nx] && !check[ny][nx])
            {
                q.push(make_pair(ny, nx));
                check[ny][nx] = true;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        res = 0;
        cin >> m >> n >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> x >> y;
            arr[y][x]++;
        }

        for (int a = 0; a < n; a++)
        {
            for (int b = 0; b < m; b++)
            {
                if (arr[a][b] && !check[a][b])
                {
                    bfs(a, b);
                    res++;
                }
            }
        }

        cout << res << endl;
        memset(check, false, sizeof(check));
        memset(arr, 0, sizeof(arr));
    }

    return 0;
}