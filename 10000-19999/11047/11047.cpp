#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, k;
int cnt = 0;
int arr[11];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> k;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = n - 1; i >= 0; i--)
  {
    cnt += k / arr[i];
    k -= (k / arr[i]) * arr[i];
  }

  cout << cnt << endl;

  return 0;
}