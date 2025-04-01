# [피보나치 함수](https://www.acmicpc.net/problem/1003)  
  
### 문제  
  
다음 소스는 N번째 피보나치 수를 구하는 C++ 함수이다.  
```
int fibonacci(int n) {
    if (n == 0) {
        printf("0");
        return 0;
    } else if (n == 1) {
        printf("1");
        return 1;
    } else {
        return fibonacci(n‐1) + fibonacci(n‐2);
    }
}
```  
fibonacci(3)을 호출하면 다음과 같은 일이 일어난다.  
 - fibonacci(3)은 fibonacci(2)와 fibonacci(1) (첫 번째 호출)을 호출한다.  
 - fibonacci(2)는 fibonacci(1) (두 번째 호출)과 fibonacci(0)을 호출한다.  
 - 두 번째 호출한 fibonacci(1)은 1을 출력하고 1을 리턴한다.
fibonacci(0)은 0을 출력하고, 0을 리턴한다.  
 - fibonacci(2)는 fibonacci(1)과 fibonacci(0)의 결과를 얻고, 1을 리턴한다.  
 - 첫 번째 호출한 fibonacci(1)은 1을 출력하고, 1을 리턴한다.  
 - fibonacci(3)은 fibonacci(2)와 fibonacci(1)의 결과를 얻고, 2를 리턴한다.  
1은 2번 출력되고, 0은 1번 출력된다. N이 주어졌을 때, fibonacci(N)을 호출했을 때, 0과 1이 각각 몇 번 출력되는지 구하는 프로그램을 작성하시오.  
  
### 입력  
  
첫째 줄에 테스트 케이스의 개수 T가 주어진다.  
각 테스트 케이스는 한 줄로 이루어져 있고, N이 주어진다. N은 40보다 작거나 같은 자연수 또는 0이다.  
  
### 출력  
  
각 테스트 케이스마다 0이 출력되는 횟수와 1이 출력되는 횟수를 공백으로 구분해서 출력한다.  
  
### 예제  
  
|입력|출력|
|---|---|
|3<br/>0<br/>1<br/>3|1 0<br/>0 1<br/>1 2|
|2<br/>6<br/>22|5 8<br/>10946 17711|
  
### 메모이제이션(Memoization) [[참고](https://wondytyahng.tistory.com/entry/memoization-%EB%A9%94%EB%AA%A8%EC%9D%B4%EC%A0%9C%EC%9D%B4%EC%85%98)]
  
 - 기억되어야 할 것이라는 뜻의 라틴어에서 파생된 단어
 - 컴퓨터 프로그램이 동일한 계산을 반복적으로 해야 할 때, **이전에 계산한 값을 메모리에 저장**하여 중복적인 계산을 제거해 전체적인 실행 속도를 빠르게 해주는 기법
 - 동적 계획법(DP, Dynamic Programming)의 핵심이 되는 기술 중 하나
  
### 동적 계획법(DP, Dynamic Programming) [[참고](https://wondytyahng.tistory.com/entry/DP-%EB%8F%99%EC%A0%81%EA%B3%84%ED%9A%8D%EB%B2%95-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98)]
  
 - 크기가 크거나 **복잡한 문제**를 효율적으로 풀기 위해 작거나 간단한 **여러 개의 문제로 나눠 푸는 방법**
 - 최적화 문제를 해결하는 알고리즘으로 **프로그램 성능 향상**을 기대할 수 있음
 - 입력 크기가 작은 문제들을 부분적으로 해결한 후에 그 해들을 이용해 큰 크기의 문제들을 부분적으로 해결하고, 최종적으로 원래 주어진 입력의 문제를 해결하는 알고리즘 설계 기법