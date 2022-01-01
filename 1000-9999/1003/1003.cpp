#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int t, n, tmp1, tmp2;
vector<int> v;

int fibonacci(int n)
{
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else if (int(v.size()) > n)
    return v[n];
  else
  {
    tmp1 = fibonacci(n - 1) + fibonacci(n - 2);
    v.push_back(tmp1);
    return tmp1;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  v.push_back(0);
  v.push_back(1);

  cin >> t;
  for (int i = 0; i < t; i++)
  {
    cin >> n;

    if (n == 0)
      cout << "1 0" << endl;
    else
    {
      tmp2 = fibonacci(n);
      cout << v[n - 1] << " " << tmp2 << endl;
    }
  }

  return 0;
}