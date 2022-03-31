#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int t, m, n, k, x, y, res;
bool check[51][51];
int arr[51][51];
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, 1, -1};

void dfs(int y, int x)
{
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= n || nx < 0 || nx >= m)
			continue;
		if (arr[ny][nx] && !check[ny][nx])
		{
			check[ny][nx] = true;
			dfs(ny, nx);
		}
	}
}

int main() 
{
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
		for (int j = 0; j < n; j++)
		{
			for (int l = 0; l < m; l++)
			{
				if (arr[j][l] && !check[j][l])
				{
					check[j][l] = true;
					res++;
					dfs(j, l);
				}
			}
		}
		cout << res << endl;
		memset(check, false, sizeof(check));
		memset(arr, 0, sizeof(arr));
	}
	return 0;
}
