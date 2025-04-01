# [영화감독 숌](https://www.acmicpc.net/problem/1436)  
  
### 문제  
  
666은 종말을 나타내는 숫자라고 한다. 따라서, 많은 블록버스터 영화에서는 666이 들어간 제목을 많이 사용한다. 영화감독 숌은 세상의 종말 이라는 시리즈 영화의 감독이다. 조지 루카스는 스타워즈를 만들 때, 스타워즈 1, 스타워즈 2, 스타워즈 3, 스타워즈 4, 스타워즈 5, 스타워즈 6과 같이 이름을 지었고, 피터 잭슨은 반지의 제왕을 만들 때, 반지의 제왕 1, 반지의 제왕 2, 반지의 제왕 3과 같이 영화 제목을 지었다.  
하지만 숌은 자신이 조지 루카스와 피터 잭슨을 뛰어넘는다는 것을 보여주기 위해서 영화 제목을 좀 다르게 만들기로 했다.  
종말의 숫자란 어떤 수에 6이 적어도 3개이상 연속으로 들어가는 수를 말한다. 제일 작은 종말의 숫자는 666이고, 그 다음으로 큰 수는 1666, 2666, 3666, .... 과 같다.  
따라서, 숌은 첫 번째 영화의 제목은 세상의 종말 666, 두 번째 영화의 제목은 세상의 종말 1666 이렇게 이름을 지을 것이다. 일반화해서 생각하면, N번째 영화의 제목은 세상의 종말 (N번째로 작은 종말의 숫자) 와 같다.  
숌이 만든 N번째 영화의 제목에 들어간 숫자를 출력하는 프로그램을 작성하시오. 숌은 이 시리즈를 항상 차례대로 만들고, 다른 영화는 만들지 않는다.  
  
### 입력  
  
첫째 줄에 숫자 N이 주어진다. N은 10,000보다 작거나 같은 자연수이다.  
  
### 출력  
  
첫째 줄에 N번째 영화의 제목에 들어간 수를 출력한다.  
  
### 예제  
  
|입력|출력|
|---|---|
|2|1666|
|3|2666|
|6|5666|
|187|66666|
|500|166699|

### Using Custom `std::set<>()` Comparator [[출처](https://stackoverflow.com/questions/2620862/using-custom-stdset-comparator)]  
  
1. Morden C++20 solution  
  
```
auto cmp = [](int a, int b) { return ... };
std::set<int, decltype(cmp)> s;
```  
  
2. Morden C++11 solution  
  
```
auto cmp = [](int a, int b) { return ... };
std::set<int, decltype(cmp)> s(cmp);
```  
  
3. Similar to first solution, but with function instead of lambda  
  
 - Make comparator as usual boolean function  
```
bool cmp(int a, int b) 
{
    return ...;
}
```  
   - Then use it, either this way:  
```
std::set<int, decltype(cmp)*> s(cmp);
```  
   - or this way:  
```
std::set<int, decltype(&cmp)> s(&cmp);
```  
  
4. Old solution using struct with () operator  
  
```
struct cmp {
    bool operator() (int a, int b) const {
        return ...
    }
};

// ...
// later
std::set<int, cmp> s;
```  
  
5. Alternative solution: create struct from boolean function  
  
 - Make comparator as usual boolean function  
```
bool cmp(int a, int b) 
{
    return ...;
}
```  
   - And make struct from it using `std::integral_constant`  
```
#include <type_traits>
using Cmp = std::integral_constant<decltype(&cmp), &cmp>;
```  
   - Finally, use the struct as comparator  
```
std::set<X, Cmp> set;
```  