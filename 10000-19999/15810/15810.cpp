#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

long long n, m, l, bm, r, sums;
long long arr[1000001];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  sort(arr, arr + n);

  l = 1;
  r = arr[0] * m;
  while (l + 1 < r)
  {
    bm = (l + r) / 2;
    sums = 0;

    for (int i = 0; i < n; i++)
      sums += bm / arr[i];

    if (sums >= m)
      r = bm;
    else
      l = bm;
  }

  cout << r << endl;

  return 0;
}