#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, m;
int tmp[9], arr[9];
set<vector<int>> s; //중복 제거

void printCase(int pos)
{
  if (pos == m)
  {
    vector<int> v;
    for (int i = 0; i < m; i++)
      v.push_back(arr[i]);

    s.insert(v); // set에 추가
    v.clear();   // vector 초기화
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      arr[pos] = tmp[i];
      printCase(pos + 1);
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;
  for (int i = 0; i < n; i++)
    cin >> tmp[i];

  sort(tmp, tmp + n);
  printCase(0);

  for (auto vector : s)
  {
    for (auto temp : vector)
      cout << temp << " ";

    cout << endl;
  }

  return 0;
}

//출처: https://tooo1.tistory.com/329 [개발자 퉁이리]