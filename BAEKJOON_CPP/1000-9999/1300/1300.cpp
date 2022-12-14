#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, k, l, bm, r, cnt;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> k;

  l = 1;
  r = k;
  while (l <= r)
  {
    bm = (l + r) / 2;
    cnt = 0;

    for (int i = 1; i <= n; i++)
      cnt += min(n, bm / i);

    if (cnt < k)
      l = bm + 1;
    else
      r = bm - 1;
  }

  cout << l << endl;

  return 0;
}