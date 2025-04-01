#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, cnt = 1;
string str, tmp;

bool cmp(string x, string y)
{
  return stoi(x) < stoi(y);
}

set<string, decltype(cmp) *> s(cmp);

void insertNumbers(string str)
{
  if (str[0] != '0')
    s.insert(str);

  if (str.length() > 6)
    return;

  for (int i = 0; i <= 9; i++)
  {
    tmp = to_string(i) + str;
    insertNumbers(tmp);
  }

  for (int i = 0; i <= 9; i++)
  {
    tmp = str + to_string(i);
    insertNumbers(tmp);
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  str = "666";
  insertNumbers(str);

  cin >> n;
  for (auto i = s.begin(); i != s.end(); i++)
  {
    if (cnt == n)
    {
      cout << *i << endl;
      break;
    }

    cnt++;
  }

  return 0;
}