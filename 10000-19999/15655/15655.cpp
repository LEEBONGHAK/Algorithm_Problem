#include <iostream>
#include <algorithm>

#define MAX 9
#define endl '\n'
using namespace std;

int n, m;
int arr[MAX], tmp[MAX];
bool check[MAX];

void printCase(int pos)
{
  if (pos == m)
  {
    for (int i = 0; i < m; i++)
      cout << arr[i] << " ";
    cout << endl;

    return;
  }

  for (int i = 0; i < n; i++)
  {
    if (check[i] == false)
    {
      for (int j = 0; j <= i; j++)
        check[j] = true;

      if (pos == 0 && tmp[i] != tmp[n - 1])
        arr[pos] = tmp[i];
      else if (arr[pos - 1] < tmp[i])
        arr[pos] = tmp[i];

      printCase(pos + 1);

      for (int j = 0; j <= i; j++)
        check[j] = false;
    }
  }
}

int main()
{
  cin >> n >> m;

  for (int i = 0; i < n; i++)
    cin >> tmp[i];

  sort(tmp, tmp + n);
  printCase(0);

  return 0;
}