#define _CRT_SECURE_NO_WARNINGS
/*15680번 연세대학교
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	if (N == 0) printf("YONSEI");
	else printf("Leading the Way to the Future");

	return 0;
}*/

/*5354번 J박스
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int N, J;
	scanf("%d", &J);
	for (int k = 0; k < J; k++) {
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			if (i == 0 || i == N - 1) {
				for (int j = 0; j < N; j++) {
					printf("#");
				}
				printf("\n");
			}
			else {
				for (int j = 0; j < N; j++) {
					if (j == 0 || j == N - 1) printf("#");
					else printf("J");
				}
				printf("\n");
			}
		}
		printf("\n");
	}

	return 0;
}*/

/*18512번 점프 점프 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int X, Y, P1, P2, temp, i;
	scanf("%d %d %d %d", &X, &Y, &P1, &P2);
	temp = P2;
	for (i = 0; i < 1000; i++) {
		P1 += X;
		P2 = temp;
		for (int j = 0; j < 1000; j++) {
			if (P1 == P2) break;
			P2 += Y;
		}
		if (P1 == P2) break;
	}
	if (i == 1000) printf("-1");
	else printf("%d", P1);

	return 0;
}
*/

/*2475번 검증수
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, ans = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &n);
		ans += n * n;
	}

	printf("%d", ans % 10);

	return 0;
}
*/

/*2741번 N 찍기
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("%d\n", i);
	}

	return 0;
}*/

/*31403번 A + B - C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	char a[1000], b[1000], c[1000];
	scanf("%s", a);
	scanf("%s", b);
	scanf("%s", c);
	int A = atoi(a);
	int B = atoi(b);
	int C = atoi(c);

	printf("%d\n", A + B - C);
	if (B < 10) printf("%d", (10 * A + B) - C);
	else if (B < 100) printf("%d", (100 * A + B) - C);
	else if (B < 1000) printf("%d", (1000 * A + B) - C);
	else printf("%d", (10000 * A + B) - C);
	return 0;
}
*/

/*10250번 ACM 호텔
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T, H, W, N, X = 1, Y = 0;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &H, &W, &N);
		X = 1;
		Y = 0;
		for (int i = 0; i < N; i++) {
			if (Y == H) {
				Y = 1;
				X += 1;
				continue;
			}
			Y++;
		}
		if (X < 10) printf("%d0%d\n", Y, X);
		else printf("%d%d\n", Y, X);

	}


	return 0;
}*/

/*2577번 숫자의 개수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, C,max, ans[10] = { 0 };
	scanf("%d %d %d", &A, &B, &C);
	max = A * B * C;
	while (1) {
		if (max == 0) break;
		
		for (int i = 0; i < 10; i++) {
			if (max % 10 == i) {
				ans[i] += 1;
				max /= 10;
				break;
			}
		}
	}

	for (int j = 0; j < 10; j++) {
		printf("%d\n", ans[j]);
	}



	return 0;
}*/

/*2920번 음계
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N[8] = { 0 };
	int a = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%d", &N[i]);
	}

	for (int j = 0; j < 7; j++) {
		a += N[j + 1] - N[j];
	}
	if (a == 7) printf("ascending");
	else if (a == -7)printf("descending");
	else printf("mixed");

	return 0;
}*/

/*8958번 OX퀴즈
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int test, score = 0, now = 1;
	char str[81] = { 0 };

	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		scanf("%s", str);
		for (int j = 0; j < strlen(str); j++) {
			if (j != 0) {
				if (str[j] == 'O' && str[j - 1] == 'O') now += 1;
				else now = 1;
			}

			if (str[j] == 'O') score += now;
		}
		printf("%d\n", score);
		score = 0;
		now = 1;
	}
}
*/

/*4153번 직각삼각형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0) break;

		if ((c * c) == (a * a) + (b * b) || (a*a) == (b*b) + (c*c) || (b*b) == (a*a) + (c*c)) printf("right\n");
		else printf("wrong\n");
	}

	return 0;
}
*/

/*2579번 계단 오르기 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, score = 0, j = 0 ;
	int stair[301] = { 0 };

	scanf("%d", &N);

	// 옵션을 여러개 만들기? 다음 계단 오르기(flag를 만들어서 한 번만 가능하게) vs 다다음 계단 오르기 (이걸 선택하면 flag가 초기화)
	// 높은 점수의 계단을 최대한 많이 밟는게 고득점?
	for (int i = 0; i < N; i++) scanf("%d", &stair[i]);

	//첫계단 스타트 둘째계단 스타트 정하기
	if (N == 1) {
		printf("%d", stair[0]);
		return 0;
	}
	else if (N == 2) {
		printf("%d", stair[0] + stair[1]);
		return 0;
	}
	else if (N == 3) {
		if (stair[0] + stair[1] > stair[0] + stair[2] && stair[0] + stair[1] > stair[1] + stair[2]) printf("%d", stair[0] + stair[1]);
		else if (stair[0] + stair[2] > stair[1] + stair[2]) printf("%d", stair[0] + stair[2]);
		else printf("%d", stair[1] + stair[2]);
		return 0;
	}
	else if (N == 4) {
		if (stair[0] + stair[1] + stair[3] > stair[0] + stair[2] + stair[3] && stair[0] + stair[1] + stair[3] > stair[1] + stair[2] && stair[0] + stair[1] + stair[3] > stair[1] + stair[3]) printf("%d", stair[0] + stair[1] + stair[3]);
		else if (stair[0] + stair[2] + stair[3] > stair[1] + stair[2] && stair[0] + stair[2] + stair[3] > stair[1] + stair[3]) printf("%d", stair[0] + stair[2] + stair[3]);
		else if (stair[1] + stair[2] > stair[1] + stair[3])printf("%d", stair[1] + stair[2]);
		else printf("%d", stair[1] + stair[3]);
		return 0;
	}

	else if (N > 5) {
		if ((stair[1] + stair[2] + stair[4] > stair[0] + stair[1] + stair[3]) && (stair[1] + stair[3] + stair[4] > stair[0] + stair[2] + stair[3]) && (stair[1] + stair[3] + stair[5] > stair[0] + stair[2] + stair[4])) {
			j = 1;
		}
		else j = 0;
	}

	while(j < N) {
		if (((stair[j] + stair[j + 1] + stair[j + 3]) > (stair[j] + stair[j + 2] + stair[j + 3])) && ((stair[j] + stair[j + 1] + stair[j + 3]) > (stair[j] + stair[j + 2] + stair[j + 4]))) {
			score += stair[j] + stair[j + 1];
			j += 3;
		}
		else {
			score += stair[j] + stair[j + 2];
			if ((stair[j] + stair[j + 2] + stair[j + 4]) > (stair[j] + stair[j + 1] + stair[j + 3])) j += 4;
			else j += 3;
		}
	}
	
	printf("%d", score);


	return 0;
}*/

/*1920번 수 찾기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, M;
	int A[100000] = { 0 }, arr;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", &A[i]);
	scanf("%d", &M);
	for (int j = 0; j < M; j++) {
		scanf("%d", &arr);
		for (int k = 0; k <= N; k++) {
			if (k == N) {
				printf("0\n");
				break;
			}
			if (A[k] == arr) {
				printf("1\n");
				break;
			}
		}
	}
	return 0;
}
*/

/*1312번 소수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//직접 나누는 과정을 만들어야할듯? 
	//N번째를 출력?
	int A, B, N; 
	scanf("%d %d %d", &A, &B, &N);

	//A/B * B한 값을 A에서 빼고, A에서 뺴고 남은값에 10을 곱해서, 나누기 시작하면 소숫점 첫자리부터 시작, 그 후 계속 10 곱하면서 풀기
	
	for (int i = 0; i <= N; i++) {
		if (i == N) printf("%d", A / B);
		A -= (A / B) * B;
		A *= 10;
	}

	return 0;
}*/

/*2751 수 정렬하기 2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, temp =0;
	int arr[1000];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", &arr[i]);

	for (int j = N - 1; j >0; j--) {
		for (int k = 0; k < j; k++) {
			if (arr[k] > arr[k + 1]) {
				temp = arr[k + 1];
				arr[k + 1] = arr[k];
				arr[k] = temp;
			}
		}
	}
	for (int i = 0; i < N; i++) printf("%d\n", arr[i]);
	

	return 0;
}*/ 

/*1914번 하노이 탑
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int cnt = 0;

void hanoi(int n, char from, char temp, char to) {
	if (n == 1) {
		printf("%c %c\n", from, to);
	}
	else {
		hanoi(n - 1, from, to, temp);
		printf("%c %c\n", from, to);
		hanoi(n - 1, temp, from, to);
	}
}
void hanoi_cnt(int n, char from, char temp, char to) {
	if (n == 1) {
		cnt++;
	}
	else {
		hanoi_cnt(n - 1, from, to, temp);
		cnt++;
		hanoi_cnt(n - 1, temp, from, to);
	}
}

int main() {
	int n = 0;
	scanf("%d", &n); 
	hanoi_cnt(n, '1','2','3');
	printf("%d\n", cnt);
	hanoi(n, '1', '2', '3');
	return 0;
}*/


/*25501번 재귀의 귀재
틀렸던 이유 : isPalindrome(S)를 바로 출력하는 방법을 사용했지만, printf하는 과정에서 함수보다 cnt 값이 먼저 사용됐고, 그래서 답이 틀림.
그러므로 pal이라는 변수를 만들어 그 안에 isPalindrome(S)의 값을 저장하는 과정을 거쳐서 전역변수 cnt의 값이 안전하게 먼저 계산되도록 함.
전역변수 사용시 주의해야할 듯
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int cnt = 0;

int recursion(const char* s, int l, int r) {
	cnt++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
	cnt = 0;
	return recursion(s, 0, strlen(s) - 1);
}

int main() {
	int T, pal;
	char S[1001] = { 0 };
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		cnt = 0;
		scanf("%s", S);
		pal = isPalindrome(S);
		printf("%d %d\n", pal, cnt);
	}
	return 0;
}*/

/*
23250번 하노이탑 K / 수학, 재귀

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count = 0;

void hanoi(int n, char from, char temp, char to, int k) {
	if (n == 1) {
		count += 1;
		if (k == count) printf("%c %c", from, to);
	}
	hanoi(n - 1, from, to, temp, k);
	count += 1;
	if (k == count) printf("%c %c", from, to);
	hanoi(n - 1, temp, from, to, k);
}
int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	hanoi(n, '1', '2', '3', k);

	return 0;
}
*/

//1158번 요세푸스 문제 
/*
틀린이유 : killSLL 함수에서 k번째를 찾는 과정이 잘못되었다.
	for (int i = 0; i < k-1; i++) {
		find_before = find;
		find = find->next;
	}
	이렇게 하니까 실행이 됩니다.
	내가 전에 한 방법은
	for (int i = 0; i < k- 1; i++) {
		find_before = find_before->next;
}
	find = find_before->next;

이거였다
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int ans = 0; //전역변수 만듬
typedef struct SLL{
	int i;
	struct SLL* next;
} node;

node* head = 0;

void addToSLL(int n) {
	node* new = (struct SLL*)malloc(sizeof(struct SLL));
	new->i = n;
	new->next = 0;

	if (head == 0) {
		head = new;
		return;
	}

	else {
		node* last = 0;
		last = head;
		while (last->next != 0) {
			last = last->next;
		}

		last->next = new;
		return;
	}
}

void circleSLL() {
	//head와 end를 이어주는 그런거
	node* last = head;

	while (last->next != 0) {
		last = last->next;
	}
	last->next = head;
	return;
}

void killSLL(int k) {
	//어쨌든 마지막에 삭제될 데이터 값을 ans에 넣기
	node* find = head;
	node* find_before = head;

	//k번째를 찾아봅시다.

	for (int i = 0; i < k-1; i++) {
		find_before = find;
		find = find->next;
	}


	find_before->next = find->next;
	ans = find->i;

	if (find == head) {
		head = find->next;
	}

	free(find);

	//새로운 head를 만들어야함.
	head = find_before->next;

	return;
}


int main() {
	int N, K;
	scanf("%d %d", &N, &K);
	
	for (int i = 1; i <= N; i++) {
		//N번 만큼 SLL에 새로운 값을 추가하는 함수 돌리기
		addToSLL(i);
	}
	circleSLL();
	//K번째 사람을 없애는 함수, 죽일때마다 그 next를 head로 만들면 될듯 , 그리고 그 전 값의 next를 head로 하고
	printf("<");
	for (int i = 0; i < N; i++) {
		killSLL(K);
		if (i == N - 1) printf("%d>", ans);
		else printf("%d, ", ans); //전역변수에 데이터를 넣기 (i의 값을 ans에)
	}
	


	return 0;
}
*/
/*30802번 웰컴키트
//티셔츠 S M L XL XXL XXXL 6가지 종류 / 같은 사이즈 T장 묶음 주문
//펜은 한 종류 P자루 묶음 or 한 자루
//티셔츠를 T장씩 최소 몇 묶음 주문해야하는가? 펜을 P자루씩 최대 몇 묶음?, 그때 펜을 한 자루씩 몇 개 주문?
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N, T, P, size[6] = { 0 }, ans_T =0;
	scanf("%d", &N);
	for (int i = 0; i < 6; i++) scanf("%d", &size[i]);
	scanf("%d %d", &T, &P);

	for (int j = 0; j < 6; j++) {
		if (size[j] == 0) continue; //만약 0장 필요하다면 다음 걸로 넘어가기
		ans_T += size[j] / T;
		if (size[j] % T != 0) ans_T += 1; //남은 티셔츠도 사야하므로
	}

	printf("%d\n%d %d\n", ans_T, N/P, N%P);

	return 0;
}*/

//2231번 분해합
/*
분해합 : 어떤 자연수 N과 N을 이루는 각 자릿수의 합
245의 분해합은 256(245, 2, 4, 5)
따라서 245는 256의 생성자이다. 가장 작은 생성자를 구해내는 프로그램 작성
**생성자가 없을 수도 있음**
* 

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int digits(int N) {
	int digit = 0;

	while (N != 0) {
		digit += N % 10;
		N /= 10;
	}
	return digit;
}
//생성자는 대상 자연수보다 클 수 없다.
void decom(int N) {
	int ans = 0;
	for (int i = 1; i < N; i++) {
		//자릿수의 합을 구하자
		ans = i + digits(i);
		if (ans == N) {
			printf("%d", i);
			return;
		}
	}
	printf("0");
	return;

}
int main() {
	int N;
	scanf("%d", &N);
	decom(N);
	
	return 0;
}*/

/* 2798번 블랙잭

합 21이 안될때 최대한 크게 만들기
딜러가 고른 M 보다 높지 않고 최대한 가깝게 만듬
N장의 카드 중 3장의 카드 고름

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N, M, card[100] = { 0 }, max =0;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) scanf("%d", &card[i]);
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				if (card[i] + card[j] + card[k] <= M && card[i] + card[j] + card[k] > max) {
					max = card[i] + card[j] + card[k];
				}
			}
		}
	}
	printf("%d", max);
	return 0;
}
*/

/*10989번 수 정렬 천만개 숫자
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[10000000] = { 0 };
void bubble(int arr[], int N) {
	int temp;
	for (int i = N - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return;
}
int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	bubble(arr, N);
	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}
}
*/

/*14489번 치킨 두 마리
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d\n%d", &a, &b, &c);
	if (a + b >= c * 2) {
		printf("%d", a + b - (c * 2));
	}
	else printf("%d", a + b);

	return 0;
}*/

/*27959 번 초코바
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	if ((N * 100) >= M) printf("Yes");
	else printf("No");

	return 0;
}*/

/*21964번 선린인터넷고 교가
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int N;
	char S[100000];
	scanf("%d", &N);
	scanf("%s", S);
	for (int i = N-5; i < N; i++) {
		printf("%c", S[i]);
	}

	return 0;
}*/

/*32025번 체육은 수학과목입니다
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int H, W;
	scanf("%d %d", &H, &W);
	if (H > W) {
		printf("%d", W * 100 / 2);
	}
	else printf("%d", H * 100 / 2);


	return 0;
}*/

/*2292번 벌집
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
1~N번방 까지 최소개수방 지나가는 방법 찾기
1개 1
2개 2~7
3개 8~19
4개 20~37

int main() {




	return 0;
}*/

/* 1406번 에디터(풀려고 했으나 doubly linked list 필요함)
* 
* //코드에 불필요한게 많음 다시 만들기
* 굳이 함수를 많이 만들 필요가 없다.


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct SLL {
	char c;
	struct SLL* next; //다음 노드
	struct SLL* prev; //이전 노드
} node;

node* head = 0;
node* tail = 0;
node* cur = 0;


void addToFirst(char str) {
	node* new = (node*)malloc(sizeof(node));
	new->c = str;
	new->next = 0;
	new->prev = 0;
	if (head == 0) {
		head = new;
		tail = new;
		return;
	}
	else {
		tail->next = new; //지금 마지막 node를 가리키는 tail의 다음이 next가 되도록 하고

		new->prev = tail; //new의 이전 값은 tail을 가리킨다

		tail = new; //tail이 가리키는 위치를 next로 변경한다.

		cur = new;

		return;
	}
}

void printSLL() {
	node* now = head;
	while (now != 0) {
		printf("%c", now->c);
		now = now->next;
	}
	return;
}

void cursorLeft() {
	if (cur == head) return; //커서가 문장 맨 앞을 가리킨다면 무시하기
	else {
		cur = cur->prev; //커서는 커서의 이전 값을 가리키도록 한다.
		return;
	}

}

void cursorRight() {
	if (cur->next == 0) return; //커서가 문장 맨 뒤를 가리킨다면 무시하기
	else {
		cur = cur->next;
		return;
	}
}

void cursorDelete() {
	//cur가 가리키고 있는 것을 삭제함,  그 동시에 cur를 앞으로 옮겨야함
	node *delete_before = cur->prev, *delete = cur;
	if (cur == head) return; // cur가 맨 앞에 있으면 무시하기
	else if (cur == tail) {
		cur = delete_before;
		delete_before->next = delete->next;
		free(delete);
		return;
	}
	else {
		cur = delete_before;
		delete_before->next = delete->next;
		delete->next->prev = delete_before;
		free(delete);
		return;
	}

}

void cursorAdd(char str) {
	node* new = (node*)malloc(sizeof(node));
	new->c = str;
	new->prev = head;
	new->next = head;
	if (cur == head) {
		new->next = cur;
		cur->prev = new;
		head = new;
		return;
	}
	else if (cur == tail) {
		tail->next = new;
		new->prev = tail;
		tail = new; 
		return;
	}
	else {
		//커서의 왼쪽에 끼워넣기
		// 오른쪽 값부터 계싼
		new->next = cur->next;
		cur->next->prev = new;
		//왼쪽값 계산
		cur->next = new;
		new->prev = cur;

		cur = new;
		return;
	}
}

int main() {
	char str, temp;
	int M;
	while (~scanf("%c", &str)) { //문자의 입력을 계속 받는다
		if (str == '\n') break; //만약 줄바꿈이 나오면 그만 받는다.
		addToFirst(str);
	}

	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		scanf(" %c", &temp);
		//커서는 맨 처음엔 뒤에 위치한다
		if (temp == 'L') {
			cursorLeft();
		}
		else if (temp == 'D') {
			cursorRight();
		}
		else if (temp == 'B') {
			cursorDelete();
		}
		else {
			scanf("%c", &temp);
			cursorAdd(temp);
		}
	}
	printSLL();


	return 0;
}*/

/*14626번 ISBN
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int check = 0, arr[13] = { 0 }, sub = 0;
	char str[14] = { 0 };
	scanf("%s", str);
	for (int i = 0; i < 13; i++) {
		if (str[i] == '*') {
			check = i;
			continue; //만약 *이면 건너뛰기
		}
		arr[i] = str[i] - '0';
	}

	for (int j = 0; j < 12; j++) {
		if (j == check) {
			continue;
		}
		if (j % 2 == 0) {
			sub += arr[j];
		}
		else {
			sub += 3 * arr[j];
		}
	}
	if (arr[12] == 0) {
		for (int k = 0; k < 10; k++) {
			if (check % 2 == 0) {
				if (0 ==  ((sub + k) % 10)) printf("%d", k);
			}
			else {
				if (0 ==((sub + (3 * k)) % 10)) printf("%d", k);
			}
		}
	}
	//135 + x + 0 % 10 == 0
	else {
		for (int k = 0; k < 10; k++) {
			if (check % 2 == 0) {
				if (arr[12] == 10 - ((sub + k) % 10)) printf("%d", k);
			}
			else {
				if (arr[12] == 10 - ((sub + (3 * k)) % 10)) printf("%d", k);
			}
		}
	}

	return 0;
}
*/

/*1406번 에디터 (DLL ,자료 구조 ,스택, 연결 리스트)

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//연결리스트 만들기 위한 구조체 작성
typedef struct node {
	char c;
	struct node* prev, * next;
}node;
node* head;
node* tail;
node* cursor;
//head의 위치 초기화 (맨처음실행) 커서를 맨 앞으로 보낸다고 생각하면 됩니다
void init() {
	head = (node*)malloc(sizeof(node));
	head->next = NULL;
	head->prev = NULL;
	tail = head;
	cursor = head;
}
void cursorAdd(char s) {
	node* new = (node*)malloc(sizeof(node));
	new->c = s;
	
	new->next = cursor->next;
	new->prev = cursor;

	if (cursor->next != NULL) cursor->next->prev = new;
	else tail = new;

	cursor->next = new;
	cursor = new; //커서 옮겨주기

	return;
}

void cursorDelete() {
	if (cursor == head) return; //만약 커서가 문장의 맨 앞이면 무시하기
	else {
		node* target = cursor;
		cursor->prev->next = cursor->next;
		if (cursor->next != NULL) cursor->next->prev = cursor->prev;
		else tail = cursor->prev;
		//cursor위치 옮겨주기 
		cursor = cursor->prev;
		free(target);
		return;
	}

}

void printDLL() {
	node* now = head->next;
	while (now != NULL) {
		printf("%c", now->c);
		now = now->next;
	}
	return;
}

int main() {
	init();
	char s;
	//입력 받을때 \n이 받아지지 않도록 조건을 넣어야함.
	while (scanf("%c", &s) != EOF && s != '\n') {
		cursorAdd(s);
	}

	int M;
	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		scanf(" %c", &s);
		if (s == 'L') {
			if (cursor != head)  cursor = cursor->prev; //커서가 맨 앞이 아닐때만 실행
		}
		else if (s == 'D') {
			if (cursor->next != NULL) cursor = cursor->next; //커서가 맨 뒤가 아닐때만 실행
		}
		else if (s == 'B') {
			cursorDelete();
		}
		else if (s == 'P'){
			char temp;
			scanf(" %c", &temp);
			cursorAdd(temp);
		}
	}

	printDLL();

	return 0;
}
*/

/*2292번 벌집
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1개 1     1개
//2개 2~7   6개
//3개 8~ 19 12개
//4개 20~37 18개

int main() {
	int N, cnt = 1;
	scanf("%d", &N);
	for (int i = 1; i <= 2000000000; ) {
		if (N <= i) {
			printf("%d", cnt);
			break;
		}
		i += 6 * cnt;
		cnt++;
	}
	return 0;
}*/

/*15829번 Hashing
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {
	int N, M = 1234567891, r = 31;
	char str[51];
	long long hash = 0, R = 1;
	scanf("%d %s", &N,str);

	for (int i = 0; i < N; i++) {
		hash += ((str[i] - 'a' + 1) * R) % M;
		hash %= M;
		R *= r;
		R %= M;

	}
	printf("%lld", hash % M);
	return 0;
}*/

/*1259번 팰린드롬수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

isPalindrome(char* str) {
	int length = strlen(str);
	for (int i = 0; i < length; i++) {
			if (str[i] != str[length-1]) {
				printf("no\n");
				return;
			}
			length--;
		}
		printf("yes\n");
		return;
}

int main() {
	char str[6];
	while (scanf("%s", &str) != EOF) {
		if (strcmp(str, "0") == 0) break;
		isPalindrome(str); //문자열 인수로 보낼때 str로 해야함 (*str이 아니다) 왜냐하면 문자열은 str자체가 주소를 의미하기 때문이다.
	}

	return 0;
}*/

/*2775번 부녀회장이 될테야
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//0층에는 1, 2, 3, 4 ... 이런식
//최소 1층부터 스타트
//최대 14호까지 가능
int main() {
	int T, k, n, ans = 0;
	int house[15][15] = { 0};
	for (int i = 1; i < 15; i++) {
		house[0][i] = i;
	}

	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			house[i][j] = house[i][j - 1] + house[i - 1][j];
		}
	}
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", house[k][n]);
	}


	return 0;
}
*/

/*2869번 달팽이는 올라가고 싶다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, v, i = 0, ans = 0;
	scanf("%d %d %d", &a, &b, &v);
	ans = (v - b) / (a - b);
	if ((v - b) % (a - b) != 0) ans++;
	printf("%d", ans);
	

	return 0;
}*/

/*11050번 이항 계수 1 (n!/(r!(n-r)!)) 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fac(int a) {
	int ans = 1;
	for (int i = 1; i <= a; i++) {
		ans *= i;
	}
	return ans;
}
int main() {
	int n, k, ans;
	scanf("%d %d", &n, &k);
	printf("%d", fac(n) / (fac(k) * fac((n - k))));

	return 0;
}*/

/*10989번 수 정렬하기3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int counting[10001] = { 0 };
	int N, temp;
	scanf("%d", &N);

	for (int j = 0; j < N; j++) {
		scanf("%d", &temp);
		counting[temp] += 1;
	}
	for (int k = 0; k < 10001; k++) {
		for (int q = 0; q < counting[k]; q++) {
			printf("%d\n", k);
		}
	}
	return 0;
}*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, cnt = 0;
	char gg;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%c", &gg);
		if (gg == 'O') cnt++;
	}
	if (n % 2 == 0) {
		//짝수
		if (2 * cnt >= (n)) printf("Yes");
		else printf("No");
	}
	else {
		if (2 * cnt > (n)) printf("Yes");
		else printf("No");
	}
	return 0;
}
*/

/*
//10699번 오늘 날짜


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	char str[3];
	scanf("%s", str);
	if (str[0] == 'A') {
		if (str[1] == '+') printf("4.3");
		else if (str[1] == '0') printf("4.0");
		else printf("3.7");
	}
	else if (str[0] == 'B') {
		if (str[1] == '+') printf("3.3");
		else if (str[1] == '0') printf("3.0");
		else printf("2.7");
	}
	else if (str[0] == 'C') {
		if (str[1] == '+') printf("2.3");
		else if (str[1] == '0') printf("2.0");
		else printf("1.7");
	}
	else if (str[0] == 'D') {
		if (str[1] == '+') printf("1.3");
		else if (str[1] == '0') printf("1.0");
		else printf("0.7");
	}
	else printf("0.0");

	return 0;
}
*/

/*
//15964 이상한 기호

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%.lf", (a + b) * (a - b));
	return 0;
}*/

/*
//28702번 FizzBuzz
만약 세번째 문자열이 숫자라면 그 전은 다 무시하고 다음 숫자 출력
만약 두번째가 숫자면 다음다음 숫자 출력
만약 첫번째가 숫자면 다음다음 숫자 출력
모두 숫자가 아니라면? 

일단 문자열을 숫자로 바꿔주는 함수 만들기 (있으면 편하겠지)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//atoi 함수 = 문자열을 정수로 바꿔준다.
void Fizz(int n) {
	if (n % 15 == 0)printf("FizzBuzz");
	else if (n % 3 == 0) printf("Fizz");
	else if (n % 5 == 0)printf("Buzz");
	else printf("%d", n);

	return;
}
int main() {
	char str1[9], str2[9], str3[9];
	int num = 0, ans = 0;
	scanf("%s %s %s", str1, str2, str3);

	if (str3[0] >= '0' && str3[0] <= '9') {
		ans = atoi(str3) + 1; //답은 그 다음 숫자이므로 1 더하기
		//fizz buzz fizzbuzz 확인
		Fizz(ans);
		return 0;
	}
	if (str2[0] >= '0' && str2[0] <= '9') {
		ans = atoi(str2) + 2; //답은 그 다음다음 숫자이므로 2 더하기
		//fizz buzz fizzbuzz 확인
		Fizz(ans);
		return 0;
	}
	if (str1[0] >= '0' && str1[0] <= '9') {
		ans = atoi(str1) + 3; //답은 그 다음다음다음 숫자이므로 3 더하기
		//fizz buzz fizzbuzz 확인
		Fizz(ans);
		return 0;
	}
	//문자열 3개 전부 숫자가 아닐때는 없네요~

}
*/
/*
//24262번 알고리즘 수업 - 알고리즘의 수행 시간 1
//어떤 값이 와도 코드 한 번 수행함 O(1)
MenOfPassion(A[], n) {
	i = ⌊n / 2⌋;
	return A[i]; # 코드1
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	printf("1\n0");
	return 0;
}
*/

/*
//24263번 알고리즘 수업 - 알고리즘의 수행 시간2
MenOfPassion(A[], n) {
	sum <- 0;
	for i <- 1 to n
		sum <- sum + A[i]; # 코드1
	return sum;
}
i가 1부터 n까지 총 n번 반복되므로 수행시간은 O(n)이다.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n1",n);
	return 0;
}*/

/*
24264번 알고리즘 수업 - 알고리즘의 수행 시간 3
MenOfPassion(A[], n) {
	sum <- 0;
	for i <- 1 to n
		for j <- 1 to n
			sum <- sum + A[i] × A[j]; # 코드1
	return sum;
}
O(n*2)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double n;
	scanf("%lf", &n);
	printf("%.lf\n2", n*n);
	return 0;
}*/

/*
24265번 알고리즘 수업	 - 알고리즘의 수행 시간 4
MenOfPassion(A[], n) {
	sum <- 0;
	for i <- 1 to n - 1
		for j <- i + 1 to n
			sum <- sum + A[i] × A[j]; # 코드1
	return sum;
}
1부터 n-1까지 
i+1부터 n까지



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double n;
	scanf("%lf", &n);
	printf("%.lf\n2", (n*(n-1)) /2);
	return 0;
}*/

/*
24266번 알고리즘 수업 - 알고리즘의 수행 시간 5
MenOfPassion(A[], n) {
	sum <- 0;
	for i <- 1 to n
		for j <- 1 to n
			for k <- 1 to n
				sum <- sum + A[i] × A[j] × A[k]; # 코드1
	return sum;
}
O(n^3)
정수형 변수를 사용해야한다.
왜냐하면 실수형 변수 사용시 오차 범위가 있기 때문 10^15


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long n;
	scanf("%lld", &n);
	printf("%lld\n3", n*n*n);
	return 0;
}
*/

/*
//24267번 알고리즘 수업 - 알고리즘의 수행 시간 6
MenOfPassion(A[], n) {
	sum <- 0;
	for i <- 1 to n - 2
		for j <- i + 1 to n - 1
			for k <- j + 1 to n
				sum <- sum + A[i] × A[j] × A[k]; # 코드1
	return sum;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long n;
	scanf("%lld", &n);
	printf("%lld\n3",((n-2)*(n-1)*(n)) / 6 );
	return 0;
}*/

/*
//34552번 디딤돌 장학금
i분위 M만원
B:분위
L학기 평점
S:취득 학점
장학금 총액을 구해라

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct human {
	int b;
	float l;
	int s;
}human;
int main() {
	int n, ans = 0;
	int money[11];
	human student;
	for (int i = 0; i < 11; i++) {
		scanf("%d", &money[i]);
	}
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %f %d", &student.b, &student.l, &student.s);
		if (student.s < 17) continue;
		if (student.l < 2.0) continue;
		ans += money[student.b];
	}
	printf("%d", ans);

	return 0;
}*/

/*
//34553번 알파벳 점수 계산기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char s[100001];
	int now = 1, ans =1;
	scanf("%s", s);
	//0일때는 생략
	for (int i = 1; i < strlen(s); i++) {
		if (s[i] > s[i - 1]) {
			now++;
			ans += now;
		}
		else {
			now = 1;
			ans += now;
		}
	}
	printf("%d", ans);
	return 0;
}
*/
/*
//34554 특수한 정수 쌍
1. A<B
2. B-A = n
3. A*B의 약수 개수 정확히 2개
곱해서 소수가 나와야함.? 이게 말이 되나

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int a) {
	if (a == 2) return 1;
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			return 0; //나누어 떨어지는 수가 있다면 0리턴
		}
	}
	return 1;
}

int main() {
	int t, n, cnt = 0, a =1, b;

	scanf("%d", &t);
	
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		b = n + a;
		if (isPrime(a * b) == 1) {
			printf("1\n1 %d\n", b);
		}
		else {
			printf("0\n");
		}
		
	}
	return 0;
}*/

/*
//34557번 횃불이의 모험
맵 크기 n*n
프레임 길이 m
Down: 직전 프레임에는 키가 눌리지 않았는데 이번 프레임에 키가 눌리면 발생합니다.
Stay: 직전 프레임과 이번 프레임 모두 키가 눌리면 발생합니다.
Up: 직전 프레임에는 키가 눌렸지만 이번 프레임에는 키가 눌리지 않으면 발생합니다.
프레임마다 누른 키
빈공간 0 
장애물 1
시작위치 2
맵을 벗어난 곳 3

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
typedef struct key {
	char name;
	char event[10];
}key;
int n, frame, location_x = 0, location_y = 0;
int flag = 0; //flag가 1일때. 이전에 키 입력, 0일때 이전 입력 없음.
key w, a, s, d, prev = { 0, "" }, insert = { 0, "" }; //구조체 선언하여 WASD만듬, 후 name에 각자 키의 이름 할당 , prev는 이전에 눌린 키
int map[105][105] = { 0 };

int main() {
	w.name = 'W';
	a.name = 'A';
	s.name = 'S';
	d.name = 'D';
	scanf("%d %d", &n, &frame);

	//맵 만들기
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &map[i][j]);
			if (map[i][j] == 2) {
				location_x = j;
				location_y = i;
			}
		}
	}
	scanf("%s %s %s %s", &w.event, &a.event, &s.event, &d.event); //키에 이벤트 값 할당
	
	//키 입력 받을 차례
	
	for (int i = 0; i < frame; i++) {
		scanf(" %c", &insert.name);
		
		//W
		if (insert.name == 'W') {
			if (prev.name == insert.name && strcmp(w.event, "Stay") == 0) {
				if (location_y - 1 >= 0 && map[location_y - 1][location_x] != 1) {
					location_y -= 1; //위로 이동
				}
			}
			else if (prev.name != insert.name && strcmp(w.event, "Down") == 0) {
				if (location_y - 1 >= 0 && map[location_y - 1][location_x] != 1) {
					location_y -= 1; //위로 이동
				}
			}
			strcpy(insert.event, w.event); //prev.event 업데이트
		}
		//A
		if (insert.name == 'A') {
			if (prev.name == insert.name && strcmp(a.event, "Stay") == 0) {
				if (location_x - 1 >= 0 && map[location_y][location_x - 1] != 1) {
					location_x -= 1; //왼쪽으로 이동
				}
			}
			else if (prev.name != insert.name && strcmp(a.event, "Down") == 0) {
				if (location_x - 1 >= 0 && map[location_y][location_x - 1] != 1) {
					location_x -= 1; //왼쪽으로 이동
				}
			}
			strcpy(insert.event, a.event); //prev.event 업데이트
		}
		//S
		if (insert.name == 'S') {
			if (prev.name == insert.name && strcmp(s.event, "Stay") == 0) {
				if (location_y + 1 < n && map[location_y + 1][location_x] != 1) {
					location_y += 1; //아래로 이동
				}
			}
			else if (prev.name != insert.name && strcmp(s.event, "Down") == 0) {
				if (location_y + 1 < n && map[location_y + 1][location_x] != 1) {
					location_y += 1; //아래로 이동
				}
			}
			strcpy(insert.event, s.event); //prev.event 업데이트
		}
		//D
		if (insert.name == 'D') {
			if (prev.name == insert.name && strcmp(d.event, "Stay") == 0) {
				if (location_x + 1 < n && map[location_y][location_x + 1] != 1) {
					location_x += 1; //오른쪽으로 이동
				}
			}
			else if (prev.name != insert.name && strcmp(d.event, "Down") == 0) {
				if (location_x + 1 < n && map[location_y][location_x + 1] != 1) {
					location_x += 1; //오른쪽으로 이동
				}
			}
			strcpy(insert.event, d.event); //prev.event 업데이트
		}
		//prev.event == "Up"일때의 것도 작성 (맨위에 최우선으로 if문 사용할 것)
		//UP이벤트 판단
		if (strcmp(prev.event, "Up") == 0 && prev.name != insert.name) {
			if (prev.name == 'W') {
				if (location_y - 1 >= 0 && map[location_y - 1][location_x] != 1) {
					location_y -= 1; //위로 이동
				}
			}
			if (prev.name == 'A') {
				if (location_x - 1 >= 0 && map[location_y][location_x - 1] != 1) {
					location_x -= 1; //왼쪽으로 이동
				}
			}
			if (prev.name == 'S') {
				if (location_y + 1 < n && map[location_y + 1][location_x] != 1) {
					location_y += 1; //아래로 이동
				}
			}
			if (prev.name == 'D') {
				if (location_x + 1 < n && map[location_y][location_x + 1] != 1) {
					location_x += 1; //오른쪽으로 이동
				}
			}
		}

		prev.name = insert.name;
		strcpy(prev.event, insert.event);
		//prev의 이벤트는 각각 설정 ㄱ
	}

	printf("%d %d", location_y + 1, location_x + 1);

	return 0;
}*/

/*
임베디드 온라인 저지 - 1865: [2025 데이터구조 실습] SLL – 왼쪽으로 회전

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int i;
	struct node* next;
}node;
node* head = 0;
node* tail = 0;
void addToSLL(int i) {
	node* new = (node*)malloc(sizeof(node));
	new->i = i;
	new->next = 0;
	if (head == 0) {
		head = new;
		tail = new;
		return;
	}
	else {
		node* now = head;
		while (now->next != 0) {
			now = now->next;
		}
		now->next = new;
		tail = new;
		return;
	}
}
void rotateLeft() {
	if (head == 0 || head->next == 0) {
		return;
	}
	node* now = head;
	head = head->next;
	tail->next = now;
	now->next = 0;
}
void printSLL() {
	node* now = (node*)malloc(sizeof(node));
	now = head;
	while (now != 0) {
		if (now->next == 0) {
			printf("%d", now->i);
		}
		else {
			printf("%d ", now->i);
		}
		now = now->next;
	}
	return;
}
int main() {
	int n, k;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		addToSLL(k);
	}
	rotateLeft();
	printSLL();

	return 0;
}*/

/*
10828번 스택
push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 스택에 들어있는 정수의 개수를 출력한다.
empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int arr[10001];
int max = -1;

void push(int n) {
	if (max == 10000) {
		return;
	}
	max++;
	arr[max] = n;
	return;
}
void pop() {
	if (max == -1) {
		printf("-1\n");
		return;
	}
	printf("%d\n", arr[max]);
	max--;
	return;
}
void size() {
	if (max == -1) {
		printf("0\n");
		return;
	}
	printf("%d\n", max + 1);
	return;
}
int isEmpty() {
	if (max == -1) {
		return 1;
	}
	else
		return 0;
}
void top() {
	if (max == -1) {
		printf("-1\n");
		return;
	}
	printf("%d\n", arr[max]);
	return;
}


int main() {
	int test = 0, num;
	char command[6];
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%s", command);
		if (strcmp(command, "push") == 0) {
			scanf("%d", &num);
			push(num);
		}
		else if (strcmp(command, "pop") == 0) {
			pop();
		}
		else if (strcmp(command, "size") == 0) {
			size();
		}
		else if (strcmp(command, "empty") == 0) {
			printf("%d\n", isEmpty());
		}
		else if (strcmp(command, "top") == 0) {
			top();
		}
	}
	return 0;
}*/

/*
10773번 제로

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int top = -1;
int arr[100000];
int ans;
void pop(int n) {
	ans += n;
	top++;
	arr[top] = n;
	return;
}
void delete() {
	ans -= arr[top];
	top--;
	return;
}

int main() {
	int k, n;
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%d", &n);
		if (n == 0) {
			delete();
		}
		else {
			pop(n);
		}
	}
	printf("%d", ans);

	return 0;
}*/

/*
1874번 스택 수열
1~8 이렇게 주어졌을때
43687521을 만들어라.

3-1-2 패턴이 없어야한다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int stack[100000];
int top = -1;
char result[200005];
int index = 0;

int main() {
	int n, target, number = 1;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &target);
		while (target >= number) {
			stack[++top] = number++;
			result[index++] = '+';
		}
		if (stack[top] == target) {
			top--;
			result[index++] = '-';
		}
		else {
			printf("NO");
			return 0;
		}
	}
	for (int i = 0; i < index; i++) {
		printf("%c\n", result[i]);
	}

	return 0;
}*/

/*
2493번 탑
높이가 서로 다른 n개의 탑에서 레이저 발사
레이저 신호를 수신한 탑들의 번호 출력 // 수신X  = 0

스택 바로 뒤의 값이 자신의 값보다 크다면 저장


#include <stdio.h>

#define TOP_MAX 500000

typedef struct {
	int height;
	int index;
}top;

top stack[TOP_MAX]; //스택 만들기
int pos = -1; //스택 현재 위치

void push(int height, int index) {
	pos++;
	stack[pos].height = height;
	stack[pos].index = index;
}
void pop() {
	//스택에 값이 있으면 pos--
	if (pos >= 0) pos--;
	return;
}

int main() {
	int n, now;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &now);

		while (pos >= 0 && stack[pos].height < now) {
			pop();
		}
		
		//출력하기
		if (pos == -1) {
			printf("0 ");
		}
		else {
			printf("%d ", stack[pos].index);
		}
		push(now, i);
	}



	return 0;
}*/

/*
9020번 골드바흐의 추측
2보다 큰 모든 짝수는 두 소수의 합으로 나타낼 수 있다는 것
짝수를 두 소수의 합으로 나타내는 표현을 그 수의 골드바흐 파티션
10000보다 작거나 같은 모든 짝수 n에 대한 골드바흐 파티션은 존재
짝수 n이 주어졌을때 n의 골드바흐 파티션을 출력
(단, 여러 가지인 경우에는 두 소수의 차이가 가장 작은 것을 출력)

에라스토테네스의 체 (소수판별알고리즘)
math.h  헤더파일에 있는 함수 sqrt()이용
(제곱근)
*/

/*
2960번 에라토스테네스의 체

#include <stdio.h>

int main() {
	int n, k, cnt =0;
	int prime[1001] = { 0 };
	scanf("%d %d", &n, &k);
	for (int i = 2; i <= n; i++) {
		for (int j = i; j <= n; j += i) {
			if (prime[j] == 1) continue;
			cnt++;
			prime[j] = 1;
			if (cnt == k) {
				printf("%d", j);
				return 0;
			}
		}
	}
}*/

/*
1644번 소수의 연속합

#include<stdio.h>
int che[4000001] = { 0 };
int primes[300000];
int cnt = 0;
void isPrime(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (che[i] == 0) { // i가 소수일 때만 배수 제거
			for (int j = i * i; j <= n; j += i) {
				che[j] = 1;
			}
		}
	}
	for (int i = 2; i < n; i++) {
		if (che[i] == 0) {
			primes[cnt] = i;
			cnt++;
		}
	}
}
int stream(int n) {
	int ans_cnt = 0, sum = 0;
	int left = 0, right = 0;

	// 투 포인터 알고리즘 (O(M))
	while (1) {
		if (sum >= n) {
			if (sum == n) ans_cnt++;
			sum -= primes[left++]; // 합이 크면 왼쪽 포인터 이동
		}
		else if (right == cnt) {
			break;
		}
		else {
			sum += primes[right++]; // 합이 작으면 오른쪽 포인터 이동
		}
	}
	return ans_cnt;
}
int main() {
	int n;
	if (scanf("%d", &n) != 1 || n < 2) {
		if (n == 1) printf("0\n"); // 1은 소수가 아님
		else if (n >= 2) {} // 통과
		else return 0;
	}

	if (n >= 2) {
		isPrime(n);
		printf("%d\n", stream(n));
	}
	return 0;
}
*/

/*
10808번 알파벳 개수

#include <stdio.h>
#include <string.h>
int main() {
	char S[101];
	int ans[26] = { 0 };
	scanf("%s", S);
	for (int i = 0; i < strlen(S); i++) {
		ans[S[i] - 'a'] += 1;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", ans[i]);
	}
	return 0;
}*/
/*
주어진 길이 N의 int 배열 arr에서 합이 100인 서로 다른 위치의 두 원소가 존재하면 1을 존재하지 않으면 0을 반환하는 함수 func2(int arr[], int N)ㅇ르 작성하라
arr의 각 수는 0 이상 100이하이고 N은 1000이하이다.



#include <stdio.h>
int func2(int arr[], int N) {
	int occur[101] = {0};
	for (int i = 0; i < N; i++) {
		if (occur[100 - arr[1]] == 1)
			return 1;
		occur[arr[i]] = 1;
	}
	return 0;
}
int main() {

	return 0;
}*/

/*
10845번 큐
push X: 정수 X를 큐에 넣는 연산이다.
pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 큐에 들어있는 정수의 개수를 출력한다.
empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.

#include <stdio.h>
#include <string.h>
#define MAX 10005
int queue[MAX];
int head = 0;
int tail = 0;
int main() {
	int n, temp;
	char command[6];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", command);
		if (strcmp(command, "push") == 0) {
			scanf("%d", &temp);
			queue[tail++] = temp;
		}
		else if (strcmp(command, "pop") == 0) {
			if (tail == head) {
				printf("-1\n");
				continue;
			}
			printf("%d\n", queue[head]);
			head++;
		}
		else if (strcmp(command, "size") == 0) {
			printf("%d\n", tail - head);
		}
		else if (strcmp(command, "empty") == 0) {
			if (tail == head) printf("1\n");
			else printf("0\n");
		}
		else if (strcmp(command, "front") == 0) {
			if (tail == head)printf("-1\n");
			else printf("%d\n", queue[head]);
		}
		else if (strcmp(command, "back") == 0) {
			if (tail == head)printf("-1\n");
			else printf("%d\n", queue[tail-1]);
		}

	}

	return 0;
}*/

/*
18258번 큐2
push X: 정수 X를 큐에 넣는 연산이다.
pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 큐에 들어있는 정수의 개수를 출력한다.
empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.

#include <stdio.h>
#include <string.h>
#define MAX 2000005
int queue[MAX];
int head = 0;
int tail = 0;

int main() {
	int n, temp;
	char command[6];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", command);
		if (strcmp(command, "push") == 0) {
			scanf("%d", &temp);
			queue[tail++] = temp;
		}
		else if (strcmp(command, "pop") == 0) {
			if (tail == head) {
				printf("-1\n");
				continue;
			}
			printf("%d\n", queue[head]);
			head++;
		}
		else if (strcmp(command, "size") == 0) {
			printf("%d\n", tail - head);
		}
		else if (strcmp(command, "empty") == 0) {
			if (tail == head) printf("1\n");
			else printf("0\n");
		}
		else if (strcmp(command, "front") == 0) {
			if (tail == head)printf("-1\n");
			else printf("%d\n", queue[head]);
		}
		else if (strcmp(command, "back") == 0) {
			if (tail == head)printf("-1\n");
			else printf("%d\n", queue[tail - 1]);
		}

	}

	return 0;
}*/

/*
2164번 카드2
1번카드가 제일 위, N번 카드가 제일 아래
제일 위 카드 버리기, 제일 위 카드-> 제일 아래로


#include <stdio.h>

#define MAX 1000005
int queue[MAX];
int head = 1; //head 1부터 시작
int tail = 0;
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		queue[i] = i;
	}
	tail = n + 1; //tail 업데이트
	while (tail - head != 1) {
		head++;
		queue[tail++] = queue[head++];
		
	}
	printf("%d", queue[head]);

	return 0;
}*/

/*
10866번 덱
push_front X: 정수 X를 덱의 앞에 넣는다.
push_back X: 정수 X를 덱의 뒤에 넣는다.
pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 덱에 들어있는 정수의 개수를 출력한다.
empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.

#include<stdio.h>
#include <string.h>
#define MAX 10000
int deque[2 * MAX + 1];
int head = MAX;
int tail = MAX;

int main() {
	int n, number;
	char input[11];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", input);
		if (strcmp(input, "push_front") == 0) {
			scanf("%d", &number);
			deque[--head] = number;
		}
		else if (strcmp(input, "push_back") == 0) {
			scanf("%d", &number);
			deque[tail++] = number;
		}
		else if (strcmp(input, "pop_front") == 0) {
			if (head == tail) printf("-1\n");
			else {
				printf("%d\n", deque[head++]);
			}
		}
		else if (strcmp(input, "pop_back") == 0) {
			if (head == tail) printf("-1\n");
			else {
				printf("%d\n", deque[--tail]);
			}
		}
		else if (strcmp(input, "empty") == 0) {
			if (head == tail) printf("1\n");
			else printf("0\n");
		}
		else if (strcmp(input, "size") == 0) {
			printf("%d\n", tail - head);
		}
		else if (strcmp(input, "front") == 0) {
			if (head == tail) printf("-1\n");
			else {
				printf("%d\n", deque[head]);
			}
		}
		else if (strcmp(input, "back") == 0) {
			if (head == tail) printf("-1\n");
			else {
				printf("%d\n", deque[tail - 1]);
			}
		}
	}
	return 0;
}*/

/* 나중에 풀기
1021번 회전하는 큐
첫 번째 원소를 뽑아낸다. 이 연산을 수행하면, 원래 큐의 원소가 a1, ..., ak이었던 것이 a2, ..., ak와 같이 된다.
왼쪽으로 한 칸 이동시킨다. 이 연산을 수행하면, a1, ..., ak가 a2, ..., ak, a1이 된다.
오른쪽으로 한 칸 이동시킨다. 이 연산을 수행하면, a1, ..., ak가 ak, a1, ..., ak-1이 된다.
큐에 처음에 포함되어 있던 수 N이 주어진다. 그리고 지민이가 뽑아내려고 하는 원소의 위치가 주어진다. (이 위치는 가장 처음 큐에서의 위치이다.) 
이때, 그 원소를 주어진 순서대로 뽑아내는데 드는 2번, 3번 연산의 최솟값을 출력하는 프로그램을 작성하시오.

큐의 크기 N과 뽑아내려고 하는 수의 개수 M
지민이가 뽑아내려고 하는 수의 위치가 순서대로 주어진다
*/
