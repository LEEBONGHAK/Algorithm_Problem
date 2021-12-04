#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() 
{
  string str;
  cin >> str;

  int utf8 = ((str[0] & 0x0F) << 12) + ((str[1] & 0x3F) << 6) + (str[2] & 0x3F);

  cout << utf8 - 0xAC00 + 1 << endl;
}
