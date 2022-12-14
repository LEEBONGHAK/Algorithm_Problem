#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() 
{
  string str;
  cin >> str;

  int sum = 0;
  sum += ((str[0] & 0b00001111) << 12);
  sum += ((str[1] & 0b00111111) << 6);
  sum += str[2] & 0b00111111;

  cout << sum - 0xac00 + 1 << endl;
}
