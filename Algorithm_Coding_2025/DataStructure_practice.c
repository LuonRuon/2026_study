/*
빌딩 하나마다 스택을 만들기
예를들어 빌딩 6개면 ㄹㅇ 6번 반복
맨 왼쪽 빌딩을 기준으로 잡아서 큰게 나올때까지 스택
하지만 빌딩 최대 8만개라 불가능
*/
//1111
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int n;
	struct node* next;
}node;
node* head = 0;

void add(int digit) {
	node* new = (node*)malloc(sizeof(node));
	new->n = digit;
	new->next = 0;

	if (head == 0) {
		head = new;
		return;
	}
	else {
		node* now = head;
		while (now->next != 0) {
			now = now->next;
		}
		now->next = new;
	}
}

void printSLL() {
	node* now = head;
	while (now != 0) {
		printf("%d ", now->n);
		now = now->next;
	}
	
}

int main() {
	int n, digit;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &digit);
		add(digit);
	}

	printSLL();

	return 0;
}


#endif
//1112
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int n;
	struct node* next;
}node;
node* head = 0;

void add(int digit) {
	node* new = (node*)malloc(sizeof(node));
	new->n = digit;
	new->next = 0;

	if (head == 0) {
		head = new;
		return;
	}
	else {
		node* now = head;
		while (now->next != 0) {
			now = now->next;
		}
		now->next = new;
	}
	return;
}

void printSLL() {
	node* now = head;
	while (now != 0) {
		printf("%d ", now->n);
		now = now->next;
	}
	return;
}
void deleteSLL(int digit) {
	if (head == NULL) return;
	node* now = head;
	node* prev = head;
	if (now->n == digit) {
		head = now->next;
		free(now);
		return;
	}

	while (now->n != digit) {
		if (now->next == NULL) return;
		prev = now;
		now = now->next;
	}

	node* delete = now;
	prev->next = now->next;
	free(delete);
	return;
}

int main() {
	int n, digit;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &digit);
		add(digit);
	}
	scanf("%d", &digit);
	deleteSLL(digit);

	printSLL();

	return 0;
}

#endif

//1113
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int n;
	struct node* next;
}node;
node* head = 0;

void add(int digit) {
	node* new = (node*)malloc(sizeof(node));
	new->n = digit;
	new->next = 0;

	if (head == 0) {
		head = new;
		return;
	}
	else {
		node* now = head;
		while (now->next != 0) {
			now = now->next;
		}
		now->next = new;
	}
	return;
}

void printSLL() {
	node* now = head;
	while (now != 0) {
		printf("%d ", now->n);
		now = now->next;
	}
	return;
}

void deleteSLL(int pos) {
	if (head == NULL) return;
	node* now = head;
	node* prev = head;
	int cnt = 1;
	if (pos == 1) {
		head = head->next;
		free(now);
		return;
	}

	while (now != 0) {
		if (pos == cnt) {
			prev->next = now->next;
			free(now);
			return;
		}

		prev = now;
		now = now->next;
		cnt++;
	}

	return;
}

int main() {
	int n, digit, pos;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &digit);
		add(digit);
	}
	scanf("%d", &pos);

	if (pos > n) {
		printSLL();
		return 0;
	}

	deleteSLL(pos);
	printSLL();


	return 0;
}

#endif

//1114
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int n;
	struct node* next;
	struct node* prev;
}node;
node* head = 0;
node* tail = 0;

void add(int digit) {
	node* new = (node*)malloc(sizeof(node));
	new->n = digit;
	new->next = 0;

	if (head == 0) {
		head = new;
		tail = new;
		new->prev = NULL;
		return;
	}
	else {
		node* now = head;
		while (now->next != 0) {
			now = now->next;
		}
		now->next = new;
		new->prev = now;
		tail = new;
	}
}

void printSLL() {
	node* now = tail;
	while (now != 0) {
		printf("%d ", now->n);
		now = now->prev;
	}

}

int main() {
	int n, digit;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &digit);
		add(digit);
	}

	printSLL();

	return 0;
}


#endif

//1115
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int n;
	struct node* next;
}node;
node* head = 0;

void add(int num) {
	node* new = (node*)malloc(sizeof(node));
	new->n = num;
	new->next = 0;

	if (head == 0) {
		head = new;
		return;
	}
	else {
		node* now = head;
		while (now->next != 0) {
			now = now->next;
		}
		now->next = new;
	}
}

void printSLL() {
	node* now = head;
	while (now != 0) {
		printf("%d ", now->n);
		now = now->next;
	}

}
void specialADD(int x, int y) {
	node* now = head;
	node* new = (node*)malloc(sizeof(node));
	new->n = y;
	new->next = NULL;
	while (now->n != x) {
		now = now->next;
		if (now == NULL) break;
	}
	if (now == NULL) {
		now = new;
		now->next = head;
		head = now;
		return;
	}
	else {
		new->next = now->next;
		now->next = new;
		return;
	}
}

int main() {
	int n, num, x,y;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		add(num);
	}
	scanf("%d %d", &x, &y);
	specialADD(x, y);
	printSLL();

	return 0;
}


#endif

//1116
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int n;
	struct node* next;
	struct node* prev;
}node;
node* head = 0;

void add(int num) {
	node* new = (node*)malloc(sizeof(node));
	new->n = num;
	new->next = 0;

	if (head == 0) {
		head = new;
		return;
	}
	else {
		node* now = head;
		while (now->next != 0) {
			now = now->next;
		}
		now->next = new;
		new->prev = now;
	}
}

void printSLL() {
	node* now = head;
	while (now != 0) {
		printf("%d ", now->n);
		now = now->next;
	}

}
void specialADD(int x, int y) {
	node* now = head;
	node* new = (node*)malloc(sizeof(node));
	new->n = y;
	new->next = NULL;
	while (now->n != x) {
		if (now->next == NULL) break;
		now = now->next;
	}
	if (now->next == NULL) {
		now->next = new;
		new->prev = now;
		return;
	}
	else {
		now->prev->next = new;
		new->prev = now->prev;
		new->next = now;
		now->prev = new;
		return;
	}
}

int main() {
	int n, num, x, y;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		add(num);
	}
	scanf("%d %d", &x, &y);
	specialADD(x, y);
	printSLL();

	return 0;
}

#endif

//1117
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int n;
	struct node* next;
}node;
node* head_1 = 0;
node* head_2 = 0;

int count = 0, n, m;

void add_1(int num) {
	node* new = (node*)malloc(sizeof(node));
	new->n = num;
	new->next = 0;

	if (head_1 == 0) {
		head_1 = new;
		return;
	}
	else {
		node* now = head_1;
		while (now->next != 0) {
			now = now->next;
		}
		now->next = new;
	}
}
void add_2(int num) {
	node* new = (node*)malloc(sizeof(node));
	new->n = num;
	new->next = 0;

	if (head_2 == 0) {
		head_2 = new;
		return;
	}
	else {
		node* now = head_2;
		while (now->next != 0) {
			now = now->next;
		}
		now->next = new;
	}
}
void compareSLL() {
	node* now_1 = head_1;
	node* now_2 = head_2;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (now_1->n == now_2->n) {
				count++;
				break;
			}
			if (now_2->next == NULL) break;
			now_2 = now_2->next;
		}
		if (now_1 == NULL) return;
		now_1 = now_1->next;
		now_2 = head_2;
	}
}


int main() {
	int num;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		add_1(num);
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &num);
		add_2(num);
	}

	compareSLL();

	printf("%d", count);

	return 0;
}


#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {


	return 0;
}


#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {


	return 0;
}


#endif
