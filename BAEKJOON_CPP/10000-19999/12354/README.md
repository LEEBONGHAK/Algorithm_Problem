# [Ocean View (Small)](https://www.acmicpc.net/problem/12354)  
  
### 문제  
  
Ocean View is a small town on the edge of a small lake, populated by people with high self-esteem. There is only one street in this town, Awesome Boulevard, running away from the lake on the west towards the hill in the east. All of the houses in Ocean View are situated along one side of Awesome Boulevard and are numbered starting at #1 on the edge of the lake all the way up to #N at the foot of the hill.  
Each resident of Ocean View wants to be able to see the lake. Unfortunately, some of the houses may be blocking the view for some of the higher numbered houses. House #A blocks the view for house #B whenever A is smaller than B, but house #A is as tall as or taller than house #B.  
Tired of hearing complaints about obstructed views, the Supreme Ruler of Ocean View has decided to solve the problem using his favorite tool of governance -- violence. He will order his guards to destroy some of the houses on Awesome Boulevard in order to ensure that every remaining house has a view of the lake. Of course, if he destroys too many houses, he might have a rebellion to deal with, so he would like to destroy as few houses as possible.  
What is the smallest number of houses that need to be destroyed in order to ensure that every remaining house has an unobstructed view of the lake?  
  
### 입력  
  
The first line of the input gives the number of test cases, T. T test cases follow. Each test case will consist of two lines. The first line will contain a single integer N, the number of houses on Awesome Boulevard. The next line will list the height of each house, from west to east, all positive integers separated by single spaces.  
  
Limits  
 - 1 ≤ T ≤ 100.  
 - The height of each house will be between 1 and 1000, inclusive.  
 - 1 ≤ N ≤ 50.  
 - The answer will always be at most 4.  
  
### 출력  
  
For each test case, output one line containing "Case #x: y", where x is the case number (starting from 1) and y is the minimum number of houses that need to be destroyed.  
  
### 예제  
  
|입력|출력|
|---|---|
|4<br/>4<br/>1 4 3 3<br/>5<br/>3 4 6 7 10<br/>4<br/>4 3 2 1<br/>5<br/>4 5 6 1 7|Case #1: 2<br/>Case #2: 0<br/>Case #3: 3<br/>Case #4: 1|