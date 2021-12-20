#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, m, t;
int arr[9];
set<int> tmp;

void printCase(int pos)
{
  if (pos == m)
  {
    for (int i = 0; i < m; i++)
      cout << arr[i] << " ";
    cout << endl;

    return;
  }

  for (auto element : tmp)
  {
    if (pos == 0 || arr[pos - 1] <= element)
      arr[pos] = element;
    else
      continue;

    printCase(pos + 1);
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    cin >> t;
    tmp.insert(t);
  }

  printCase(0);

  return 0;
}