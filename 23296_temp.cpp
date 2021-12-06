#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

const int MAX = 100001;
int n, m;
vector<int> v[MAX];
vector<int> bf;
vector<int> zero_degree;
int in_degree[MAX];
bool check_dfs[MAX];


//DFS Search
void DFS(int index, vector<int> &buf)
{
    check_dfs[index] = true; //정점 방문 체크
      
    int next = v[index][0];
    buf.push_back(next);

    //방문하지 않았다면 DFS() 호출
    if (!check_dfs[next]) DFS(next, buf);
    else {
        for (int i : zero_degree) {
            if (!check_dfs[i]) {
                buf.push_back(i);
                DFS(i, buf);
                break;
            }
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
  
    //그래프 노드관계 입력
    for(int i = 1; i <= n; i++)
    {
        cin >> m;
        v[i].push_back(m);
        in_degree[m] += 1;
    }

   for(int i = 1; i <= n; i++)
        if (in_degree[i] == 0) zero_degree.push_back(i);
    
    DFS(1, bf);

    cout << bf.size() << endl;
    for (int k : bf)
        cout << k << " ";

    return 0;
}

// https://coding-factory.tistory.com/611
// https://coding-factory.tistory.com/610
// https://terajh.tistory.com/90
