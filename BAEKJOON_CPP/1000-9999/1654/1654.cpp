#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

long long k, n, t, l, m, r, tmp;
vector<long long> v;
vector<long long> result;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> k >> n;
  for (int i = 0; i < k; i++)
  {
    cin >> t;
    v.push_back(t);
  }

  sort(v.begin(), v.end());

  l = 1;
  r = v.back();
  while (l <= r)
  {
    tmp = 0;
    m = (l + r) / 2;

    for (int i = 0; i < k; i++)
      tmp += v[i] / m;

    if (tmp >= n)
    {
      result.push_back(m);
      l = m + 1;
    }
    else
      r = m - 1;
  }

  sort(result.begin(), result.end());
  cout << result.back() << endl;

  return 0;
}