#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

long long n, k, t;
int l, m, r;
int arr[100001];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  sort(arr, arr + n);

  cin >> k;
  for (int i = 0; i < k; i++)
  {
    cin >> t;
    l = 0, r = n - 1;
    while (l <= r)
    {
      m = (l + r) / 2;

      if (arr[m] == t)
      {
        cout << 1 << endl;
        break;
      }

      if (t < arr[m])
        r = m - 1;
      else
        l = m + 1;
    }

    if (l > r)
      cout << 0 << endl;
  }

  return 0;
}