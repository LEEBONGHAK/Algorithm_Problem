#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

string str;
int res = 0;

int main()
{
  cin >> str;

  for (int i = 0; i < str.length(); i++)
  {
    res = (res * 10 + (str[i] - '0')) % 20000303;
  }

  cout << res << endl;

  return 0;
}