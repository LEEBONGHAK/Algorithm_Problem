#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n;
int cnt = 0, ans = 666;
string str;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);

  cin >> n;
  while (true)
  {
    str = to_string(ans);

    for (int i = 0; i < int(str.length()) - 2; i++)
    {
      if (str[i] == '6' && str[i + 1] == '6' && str[i + 2] == '6')
      {
        cnt++;
        break;
      }
    }

    if (cnt == n)
      break;
    ans++;
  }

  cout << ans << endl;

  return 0;
}