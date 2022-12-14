#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int T, N, cnt;
int arr[50];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> T;
  for (int i = 0; i < T; i++)
  {
    cnt = 0;
    cin >> N;
    for (int j = 0; j < N; j++)
    {
      cin >> arr[j];
      if (j > 0 && arr[j - 1] >= arr[j])
        cnt++;
    }

    cout << "Case #" << i + 1 << ": " << cnt << endl;
  }

  return 0;
}