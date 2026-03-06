#define _CRT_SECURE_NO_WARNINGS
/*
26082번 WARBOY
warboy가성비는 무조건 3배

#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	b /= a;
	printf("%d", 3 * b * c);

	return 0;
}*/

/*
11866번 요세푸스 문제 0
*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 1000
typedef struct node{
	int n;
	struct node* next, *prev;
}node;

node* head = 0;
node* tail = 0;
void push(int num) {
	node* new = (node*)malloc(sizeof(node));
	new->n = num;
	new->next = 0;
	if (head == 0) {
		head = new;
		tail = new;
	}
	else {
		tail->next = new;
		tail = tail->next;
	}
}
void pop(int k) {

}
void yo(int k) {
	printf("<");



	printf(">");
}

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++) {
		push(i);
	}
	return 0;
}