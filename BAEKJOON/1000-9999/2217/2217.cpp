#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, tmp;
int res = 0;
int arr[100001];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  sort(arr, arr + n, greater<int>());

  for (int i = 0; i < n; i++)
  {
    tmp = arr[i] * (i + 1);
    res = max(tmp, res);
  }

  cout << res << endl;

  return 0;
}