#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

typedef long long int ll;
ll X, Y, Z, l1, l2;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);

  /*
    참고 : https://www.acmicpc.net/board/view/64614

    100 * Y / X = Z라고 할 때
    100 (Y+k) / (X +k) = Z+1이 되는 k를 찾는 문제

    k에 관해 식을 정리하면
    k = (XZ + X - 100 * Y) / (99-Z)

    분자를 l1, 분모를 l2라고 할 때
    l1 % l2가 0이 아니라면 l1 / l2에 1을 더하고
    0이면 l1 / l2를 출력

    그리고 나머지 경우 예외처리
  */

  cin >> X >> Y;

  Z = 100 * Y / X;
  if (Z >= 99)
  {
    cout << -1 << '\n';
    return 0;
  }

  l1 = (X * Z + X - 100 * Y);
  l2 = 99 - Z;

  if (l1 % l2 != 0)
    cout << l1 / l2 + 1 << '\n';
  else
    cout << l1 / l2 << '\n';

  return 0;
}