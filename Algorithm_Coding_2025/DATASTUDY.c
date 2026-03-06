//수행시간 측정
/*
#include <stdio.h>
#include <time.h> //clock() <-- 호출할 때의 clock cnt
                  //start <-- clock(100),, end <-- clock(2000)
                  // 2000- 100 == 1900
void main() {
    clock_t start_time, end_time;// int , char 같은 데이터 타입
    start_time = clock();
    
    //duration -- clock cnt
    // // duration / CLOCKS_PER_SEC --> 초단위로 변화 (보통 0초 나옴)
    // 
    // 
    //WORK

    end_time = clock();
    printf("%d\n", end_time - start_time);
}*/
/*
//Singly Linked List 만들어보기
#include<stdio.h>
#include<stdlib.h> //malloc과 free는 여기에 정의됨
struct node {
    int i; //데이터 저장할 공간
    struct node *next;//다음을 가리키는 포인터 
};

struct node *head = 0;

//SLL add (SLL의 맨 뒤에 붙이는 경우)
void addToSLL(int n){
    struct node *new = (struct node *)malloc(sizeof(struct node)); //새로운 값을 넣을 node를 만든다.
    new->i = n;                                                   //new에 n을 저장한다.
    new->next = 0;                                                //new의 next를 0으로 지정한다.. (0부터 시작)
    if (head == 0) {
        head = new;
        return;
    }
    else {
        struct node *last = 0;
        last = head;
        while (last->next != 0) {
            last = last->next;
        }
        //last는 마지막 노드 가리킴
        last->next = new;
        return;
    }
}
//SLL destroy
void destroySLL() {
    struct node* cur = head;
    while (1) {
        if (head == 0) {
            break;
        }
        head = head->next;
        free(cur);
        cur = head;

    }


}
//SLL insert
void insertToSLL(int n, int k) {
    struct node* cur = head;


    //일단 위치를 찾아야지요
    while (cur != 0) {
        if (cur->i == n) {
            //cur의 i가 n인 곳을 찾을떄
            struct node *new = (struct node *)malloc(sizeof(struct node));
            new->i = k;
            new->next = cur->next;
            cur->next = new;

            return;
        }
        else {
            cur = cur->next;
        }

    }
    //위치를 찾았으니 삽입
    


}
//SLL delete
void deleteFromSLL(int n) {
    struct node* del_before, * del;
    del_before = head;

    if (head->i == n) {
        del = head;
        head = head->next;
        free(del);
        return;
    }
    else {
        //지울 노드 찾기
        while (del_before->next != 0) {
            if (del_before->next->i == n) {
                del = del_before->next;
                del_before->next = del->next;
                free(del);
                return;
            }
            else {
                del_before = del_before->next;
            }
        }


    }

}


//SLL print
void printSLL() {
    struct node *cur = head;

    while (cur != 0) {
        printf("%d \n", cur->i);
        cur = cur->next;
    }

}

int main() {
    addToSLL(1);
    addToSLL(2);
    addToSLL(3);

    insertToSLL(2, 10);
    deleteFromSLL(10);
    printSLL();


    return 0;
}
*/
#include <stdio.h>
#include <stdbool.h>
#define MAXIMUM_STACK_SIZE 10
#define true 1
#define false 0
typedef int boolean;
int stack[MAXIMUM_STACK_SIZE];
int top = -1;

//boolean isEmpty : returns true if the stack is empty
boolean isEmpty(void) {

}
//boolean isFull : returns true if the stack is full