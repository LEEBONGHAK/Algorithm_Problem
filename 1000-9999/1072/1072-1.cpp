#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

long long x, y, z, l, m, r;
long long result = INT_MAX;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> x >> y;
  z = y * 100 / x;

  if (z >= 99)
  {
    cout << -1 << endl;
    return 0;
  }

  l = 1;
  r = x;
  while (l <= r)
  {
    m = (l + r) / 2;

    if ((y + m) * 100 / (x + m) > z)
    {
      result = min(result, m);
      r = m - 1;
    }
    else
      l = m + 1;
  }

  cout << result << endl;

  return 0;
}