#include <iostream> 
#include <algorithm>

#define endl '\n'
#define MAX 9
using namespace std; 

int n, m; 
int tmp[MAX];
int arr[MAX];
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
      check[i] = true;
      arr[pos] = tmp[i];
      printCase(pos + 1);
      check[i] = false;
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