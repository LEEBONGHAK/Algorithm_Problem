#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, m;
int sum = 0;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  stack<int> s;

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> m;
    if (m)
      s.push(m);
    else
      s.pop();
  }

  while (s.size())
  {
    sum += s.top();
    s.pop();
  }

  cout << sum << endl;

  return 0;
}