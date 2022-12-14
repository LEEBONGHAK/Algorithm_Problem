#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

long long n, t;
vector<int> v;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> t;
    v.push_back(t);
  }

  sort(v.begin(), v.end());

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> t;
    if (binary_search(v.begin(), v.end(), t))
      cout << 1 << endl;
    else
      cout << 0 << endl;
  }

  return 0;
}