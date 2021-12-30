#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

const int MAX = 100001;
int n, m;
vector<int> v;
vector<int> bf;
bool check_dfs[MAX];
int in_degree[MAX];
vector<pair<int, int>> vp;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first) 
        return a.second < b.second; 

    return a.first < b.first;
}


//DFS Search
void DFS(int index, vector<int> &buf)
{
    if (check_dfs[index]) return;

    //정점 방문 체크
    check_dfs[index] = true;
      
    int next = v[index];
    buf.push_back(next);

    DFS(next, buf);
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
  
    // 0층 없음 -> 임의의 쓰레기값
    v.push_back(-1);
    in_degree[0] = -1;

    //그래프 노드관계 입력
    for(int i = 1; i <= n; i++)
    {
        cin >> m;
        v.push_back(m);
        in_degree[m] += 1;
    }

    DFS(1, bf);

    for (int i = 1; i <= n; i++)
        vp.push_back({in_degree[i], i});

    sort(vp.begin(), vp.end(), cmp);

    for (int i = 0; i < int(vp.size()); i++)
    {
        if (check_dfs[vp[i].second]) continue;

        bf.push_back(vp[i].second);
        DFS(vp[i].second, bf);
    }

    cout << bf.size() << endl;
    for (int j : bf)
        cout << j << " ";
    cout << endl;

    return 0;
}

// https://coding-factory.tistory.com/611
// https://coding-factory.tistory.com/610
// https://terajh.tistory.com/90
