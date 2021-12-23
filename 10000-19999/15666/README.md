# [N과 M (12)](https://www.acmicpc.net/problem/15666)  
  
### 문제  
  
N개의 자연수와 자연수 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.  
 - N개의 자연수 중에서 M개를 고른 수열  
 - 같은 수를 여러 번 골라도 된다.  
 - 고른 수열은 비내림차순이어야 한다.  
   - 길이가 K인 수열 A가 A1 ≤ A2 ≤ ... ≤ AK-1 ≤ AK를 만족하면, 비내림차순이라고 한다.  
  
### 입력  
  
첫째 줄에 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)  
둘째 줄에 N개의 수가 주어진다. 입력으로 주어지는 수는 10,000보다 작거나 같은 자연수이다.  
  
### 출력  
  
한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다. 중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 구분해서 출력해야 한다.  
수열은 사전 순으로 증가하는 순서로 출력해야 한다.  
  
### 예제  
  
|입력|출력|
|---|:---:|
|3 1<br/>4 4 2|2<br/>4|
|4 2<br/>9 7 9 1|1 1<br/>1 7<br/>1 9<br/>7 7<br/>7 9<br/>9 9|
|4 4<br/>1 1 2 2|1 1 1 1<br/>1 1 1 2<br/>1 1 2 2<br/>1 2 2 2<br/>2 2 2 2|
  
### set container [[참고](https://blockdmask.tistory.com/79)]  
  
 - 연관 컨테이너(associative container) 중 하나
 - 노드 기반 컨테이너이며, 균형 이진트리로 구현되어 있음
 - key라 불리는 원소들의 집합으로 이루어진 컨테이너 (원소 = key)
 - key 값은 중복되지 않음
 - 원소가 삽입되면 자동으로 정렬됨
 - default 정렬기준은 less(오름차순)
![](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=http%3A%2F%2Fcfile10.uf.tistory.com%2Fimage%2F9965114F5B571A6423CDF0)  
 - inoder traversal(중위순회)를 통해 순서대로 출력 가능 (iterator는 자동으로 inorder traversal 순으로 출력해줌)
  
### set 사용법  
  
 - <set> 헤더파일에 있음
 - 기본 선언 방법 : std::set<[Data Type]> [변수 이름];
  
### set의 생성자와 연산자 및 멤버 함수  
  
 1. set<int> s; 기준으로 작성  
 2. set<int>::iterator iter, start, end; 로 반복자 세개 선언  
 3. int k는 원소  
  
 - set<int> s; : 기본 선언 방법  
 - set<int> s(pred); : pred를 통해 정렬기준 설정  
 - set<int> s2(s1); : s1을 복사한 s2  
 - 연산자 ("==", "!=", "<", ">", "<=", ">=") 사용 가능  
 - s.begin();  
   - 맨 첫번째 원소를 가리키는 반복자를 리턴(참조)  
   - *iter = s.begin(); 으로 사용  
 - s.end(); : 맨 마지막 원소(의 다음)를 가리키는 원소의 끝부분을 알 때 사용  
   - 반복자를 리턴(참조)  
   - *iter = s.end();  
 - s.rbegin();, s.rend();  
   - begin(), end() 와 반대로 작동하는 멤버함수  
   - 역으로 출력하고 싶을때 사용  
 - s.clear(); : 모든 원소를 제거합니다.  
 - s.count(k);  
   - 원소 k 의 갯수를 반환  
   - set에서는 무조건  0, 1개 -> multiset은 키값이 중복이 가능하기 때문에 거기서 사용됨  
 - s.empty(); : set이 비어있는지 확인  
 - s.insert(k);  
   - 원소 k를 삽입하며, 자동으로 정렬된 위치에 삽입  
   - 삽입이 성공 실패에 대한 여부는 리턴값 (pair<iterator, bool>) 으로 나옴  
   - pair<iterator, bool>에서 pair.first는 삽입한 원소를 가리키는 반복자 이고, pair.second는 성공(true), 실패(false)를 나타냄  
 - s.erase(iter);  
   - iter가 가리키는 원소를 제거  
   - 제거 후 제거한 원소의 다음 원소를 가리키는 반복자를 리턴  
 - s.erase(start, end); : (start, end) 범위의 원소를 모두 제거  
 - s.find(k);  
   - 원소 k를 가리키는 반복자를 반환  
   - 원소 k가 없다면 s.end() 와 같은 반복자를 반환  
 - s2.swap(s1); : s1과 s2를 바꿈  
 - s.upper_bound(k); : 원소 k가 끝나는 구간의 반복자  
 - s.lower_bound(k); : 원소 k가 시작하는 구간의 반복자  
 - s.equal_range(k);  
   - 원소 k가 시작하는 구간과 끝나는 구간의 반복자 pair 객체를 반환  
   - upper_bound(k), lower_bound(k) 가 합쳐진 멤버함수  
 - s.value_comp();, s.key_comp();  
   - 정렬 기준 조건자를 반환  
   - set 컨테이너에서는 두개의 함수 반환형이 같음  
 - s.size(); : 사이즈(원소의 갯수)를 반환  
 - s.max_size(); : 최대 사이즈(남은 메모리 크기)를 반환  