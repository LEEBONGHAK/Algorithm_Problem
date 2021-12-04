#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

// node 구조제 정의
typedef struct qNode {

	int data;			// node 데이터
	struct qNode* next;	// 다음 node 주소
} Node;

// queue 구조체 정의
typedef struct listQueue {

	Node* front;	// 제일 처음을 pointer하는 node
	Node* rear;		// 제일 마지막을 pointer하는 node
	int size;		// queue의 사이즈 기억
} listQueue;

// queue 구조체의 메모리, 초기값 세팅 함수
void createQueue(listQueue** Queue) {

	(*Queue) = (listQueue*)malloc(sizeof(listQueue));	// queue의 메모리 할당
	(*Queue)->front = NULL;	// 초기화
	(*Queue)->rear = NULL;	// 초기화
	(*Queue)->size = 0;		// 초기화
}

// queue을 구성하는 node의 메모리와 초기값 설정 함수
Node* createNode(int newData) {

	Node* newNode = (Node*)malloc(sizeof(Node));	// node의 메모리 할당
	newNode->data = newData;
	newNode->next = NULL;		// list의 next를 가르키는 link 초기화

	return newNode;
}

// 맨 앞에 node를 알려주는 함수
Node* Peek(listQueue* Queue) {
	return Queue->front;
}

// Enqueue(Queue, Node) - queue에 데이터를 집어넣는 함수
void Enqueue(listQueue* Queue, Node* newNode) {		// Enqueue 함수는 target queue과 넣고자 하는 node를 전달 받는다.

	// when queue is empty
	if (Queue->size == 0) {		// = if (Queue->peek == NULL) {

		Queue->front = newNode;	// queue가 비어 있다면 집어 넣는 node front로 설정
		Queue->rear = newNode;
	}
	// when queue is not empty
	else {

		Queue->rear->next = newNode;	// LILO의 특성에 따라 새로운 노드를 현재 마지막 node(rear)의 next link로 설정
		Queue->rear = newNode;			// 새로운 node를 새로운 queue의 마지막 node(rear)로 설정
	}
	Queue->size++;		// queue 사이즈 증가
}


// Dequeue(Queue) - queue에서 가장 처음 Enqueue된 node의 data를 빼내오는 함수
int Dequeue(listQueue* Queue) {		// Dequeue함수는 자료를 빼내올 qeue을 전달받고 가장 처음 Enqueue된 node의 data를 return

	Node* tempNode;					// return 할 node를 보관할 임시 node pointer

	// when queue is empty
	if (Queue->size == 0) {			// = if (Stack->peer == NULL) {

		return -1;			// Dequeue할 node가 없으므로 -1 return
	}
	// when queue is not empty
	else {

		tempNode = Queue->front;		// 현재 맨 처음 node(front)를 임시 노드에 보관
		Queue->front = Queue->front->next;	// 최상단 node가 가르키는 front을 다음 노드로 이동
		Queue->size--;		// queue 사이즈 감소
	}

	return tempNode->data;		// 임시 보관되어 있는 맨 처음 node data return 
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string command;
	int N, X;

	listQueue* Queue;		// queue 구조체 선언
	createQueue(&Queue);	// queue 생성

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> command;

		if (command == "push") {
			cin >> X;
			Enqueue(Queue, createNode(X));	// node 생성 후 queue에 node를 넣음
		}
		else if (command == "pop") {
			cout << Dequeue(Queue) << endl;
		}
		else if (command == "size") {
			cout << Queue->size << endl;
		}
		else if (command == "empty") {
			if (Queue->size == 0) {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
		else if (command == "front") {
			if (Queue->size == 0) {
				cout << -1 << endl;
			}
			else {
				cout << Queue->front->data << endl;
			}
		}
		else if (command == "back") {
			if (Queue->size == 0) {
				cout << -1 << endl;
			}
			else {
				cout << Queue->rear->data << endl;
			}
		}
	}

	return 0;
}