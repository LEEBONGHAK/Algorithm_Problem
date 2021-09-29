#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

// 구조체와 stack, node 생성함수
typedef struct sNode {	// node 구조제 정의

	int data;			// node 데이터
	struct sNode* next;	// 이전 node 주소
} Node;

// stack 구조체 정의
typedef struct listStack {

	Node* peek;		// 제일 마지막에 push된 node 추척
	int size;		// stack의 사이즈 기억
} listStack;


// stack 구조체의 메모리, 초기값 세팅 함수
void createStack(listStack** Stack) {

	(*Stack) = (listStack*)malloc(sizeof(listStack));	// stack의 메모리 할당
	(*Stack)->peek = NULL;	// 초기화
	(*Stack)->size = 0;		// 초기화
}


// stack을 구성하는 node의 메모리와 초기값 설정 함수
Node* createNode(int newInt) {

	Node* newNode = (Node*)malloc(sizeof(Node));	// node의 메모리 할당
	newNode->data = newInt;	// node 데이터 할당

	newNode->next = NULL;		// list의 next를 가르키는 link 초기화

	return newNode;
}

// Empty(Stack) - statck이 비어있으면 1 아니먼 0을 출력하는 함수
int Empty(listStack* Stack) {
	if (Stack->size == 0) {
		return 1;
	}
	else {
		return 0;
	}
}


// Push(Stack, Node) - stack에 데이터를 집어넣는 함수
void Push(listStack* Stack, Node* newNode) {		// Push 함수는 target stack과 넣고자 하는 node를 전달 받는다.

	// when stack is empty
	if (Empty(Stack)) {

		Stack->peek = newNode;	// stack이 비어 있다면 집어 넣는 node peek으로 설정
	}
	// when stack is not empty
	else {

		newNode->next = Stack->peek;	// LIFO의 특성에 따라 새로운 노드를 현재 최상단 node(peek)의 next link로 설정
		Stack->peek = newNode;			// 새로운 node를 새로운 stack의 최상단 node(peek)로 설정
	}
	Stack->size++;		// stack 사이즈 증가
}


// Pop(Stack) - stack에서 마지막 Push된 node를 빼내오는 함수
int Pop(listStack* Stack) {		// Pop함수는 자료를 빼내올 stack을 전달받고 마지막에 Push된 node를 return

	Node* tempNode;					// return 할 node를 보관할 임시 node pointer

	// when stack is empty
	if (Empty(Stack)) {
		return -1;			// Pop할 node가 없으므로 -1 return
	}
	// when stack is not empty
	else {
		tempNode = Stack->peek;		// 현재 최상단 node(peer)를 임시 노드에 보관
		Stack->peek = Stack->peek->next;	// 최상단 node가 가르키는 peek을 다음 노드로 이동
		Stack->size--;		// stack 사이즈 감소
	}

	return tempNode->data;		// 임시 보관되어 있는 최상단 node data return 
}

// Top(Stack) - stack에서 가장 위에 있는 node의 data를 return하는 함수
int Top(listStack* Stack) {		// Pop함수는 자료를 빼내올 stack을 전달받고 마지막에 Push된 node를 return

	// when stack is empty
	if (Empty(Stack)) {
		return -1;			// Pop할 node가 없으므로 -1 return
	}
	// when stack is not empty
	else {
		return Stack->peek->data;		// 현재 최상단 node(peer)의 data return
	}
}

// Size(Stack) - stack의 size를 return하는 함수
int Size(listStack* Stack) {

	return Stack->size;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, X;
	string command;

	listStack* Stack;		// stack 구조체 선언
	createStack(&Stack);	// stack 생성

	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> command;

		if (command == "push") {
			cin >> X;
			Push(Stack, createNode(X));
		}
		else if (command == "pop") {
			cout << Pop(Stack) << endl;
		}
		else if (command == "size") {
			cout << Size(Stack) << endl;
		}
		else if (command == "empty") {
			cout << Empty(Stack) << endl;
		}
		else if (command == "top") {
			cout << Top(Stack) << endl;
		}
	}

	return 0;
}