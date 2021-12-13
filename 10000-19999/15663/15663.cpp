#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, m;
int tmp[9], arr[9];
int check[100001];

void printCase(int pos)
{
  if (pos == m)
  {
    for (int i = 0; i < m; i++)
      cout << arr[i] << " ";
    cout << endl;

    return;
  }

  for (int i = 0; i < n; i++)
  {
    if (i != 0 && tmp[i - 1] == tmp[i])
      continue;
    else if (check[tmp[i]] != 0)
      arr[pos] = tmp[i];
    else
      continue;

    check[tmp[i]]--;
    printCase(pos + 1);
    check[tmp[i]]++;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    cin >> tmp[i];
    check[tmp[i]]++;
  }

  sort(tmp, tmp + n);
  printCase(0);

  return 0;
}