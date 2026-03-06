/*
군 전역 후 알고리즘 공부 
처음 배웠던 내용 복습부터 자료구조까지 진행하는게 목표
github에 자동으로 커밋됨.
*/

//25.11.30 랜덤 마라톤 78

/*
2392번 Rook

#include <stdio.h>

int main() {
	printf("  ___  ___  ___\n");
	printf("  | |__| |__| |\n");
	printf("  |           |\n");
	printf("   \\_________/\n");
	printf("    \\_______/\n");
	printf("     |     |\n");
	printf("     |     |\n");
	printf("     |     |\n");
	printf("     |     |\n");
	printf("     |_____|\n");
	printf("  __/       \\__\n");
	printf(" /             \\\n");
	printf("/_______________\\\n");

	return 0;
}

*/

/*
21300번 Bottle Return

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int refund = 0, bottle;
	for (int i = 0; i < 6; i++) {
		scanf("%d", &bottle);
		refund += bottle * 5;
	}

	printf("%d", refund);

	return 0;
}
*/

/*
13163번 닉네임에 갓 붙이기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void shift(char* str) {
	int len = strlen(str);

	for (int i = len; i >= 0; i--) {
		str[i + 1] = str[i];
	}

}

int main() {
	int time = 0, flag =0;
	char Nickname[100];

	scanf("%d\n", &time);
	for (int i = 0; i < time; i++) {
		gets(Nickname);
		//공백의 첫 등장시기를 찾는 코드
		for (int j = 0; j < strlen(Nickname); j++) {
			if (Nickname[j] == ' ') {
				flag = j;
				break;
			}
		}
		//공백 등장시점에 따라 변화
		if (flag < 2) {
			shift(Nickname);
			Nickname[0] = 'g';
			Nickname[1] = 'o';
			Nickname[2] = 'd';
		}
		else {
			Nickname[0] = 'g';
			Nickname[1] = 'o';
			Nickname[2] = 'd';
			for (int p = 3; p <= flag; p++) {
				Nickname[p] = ' ';
			}
		}

		//공백을 제외한 모든 글자 출력
		for (int k = 0; k < strlen(Nickname); k++) {
			if (Nickname[k] != ' ') printf("%c", Nickname[k]);
		}
		printf("\n");
		flag = 0;
	}

}
*/

/*
15921번 수찬은 마린보이야!

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N = 0;
	scanf("%d", &N);

	if (N == 0) printf("divide by zero");
	else printf("1.00");

}


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int TestCase = 0, Grade = 0;
	char Name[11];
	
	scanf("%d", &TestCase);

	for (int i = 0; i < TestCase; i++) {
		scanf("%s %d", Name, &Grade);
		if (Grade >= 97) printf("%s A+\n", Name);
		else if (Grade >= 90) printf("%s A\n", Name);
		else if (Grade >= 87) printf("%s B+\n", Name);
		else if (Grade >= 80) printf("%s B\n", Name);
		else if (Grade >= 77) printf("%s C+\n", Name);
		else if (Grade >= 70) printf("%s C\n", Name);
		else if (Grade >= 67) printf("%s D+\n", Name);
		else if (Grade >= 60) printf("%s D\n", Name);
		else printf("%s F\n", Name);
		
	}


	return 0;
}
*/

/*
28062번 준석이의 사탕 사기
어쨋든 사탕을 최대한 가져가려면 제일 많이 들어있는 묶음 순서로 가져간다고 생각해야함. 그러므로 버블정렬하고 계산ㄱㄱ
홀수개 사탕이 짝수면 가져가고 아니면 안가져감


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void bubble_sort(int arr[], int cnt);

int main() {
	int N, j, i, max = 0, cnt =0, flag =0;
	int candy[1000] = { 0, };

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &candy[i]);
		if (candy[i] % 2 != 0) cnt++;
	}
	bubble_sort(candy, N);

	for (j = N -1; j >= 0; j--) {
		if (candy[j] % 2 == 0) max += candy[j];
		else if (cnt % 2 == 0 || flag == 1) max += candy[j];
		else if (flag == 0 && cnt % 2 != 0) flag = 1;
	}


	printf("%d", max);


	return 0;
}

void bubble_sort(int arr[], int cnt) {
	int i, j, temp;

	for (i = cnt - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}

	}

	return;
}
*/

/*
4344번 평균은 넘겠지

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int C, N, cnt =0;
	float average = 0, answer =0, grade[1000] = { 0 }, temp;

	scanf("%d", &C);
	for (int i = 0; i < C; i++) {
		scanf("%d ", &N);

		average = 0; //평균 초기화
		cnt = 0; //cnt 초기화
		temp = N; //N을 float형 변수에 저장

		for (int j = 0; j < N; j++) {
			scanf("%f ", &grade[j]);
			average += grade[j];
		}

		average /= N; //평균 구하기

		for (int k = 0; k < N; k++) {
			if (grade[k] > average) cnt++;
		}

		answer = (cnt / temp)* 100;

//평균 넘는 학생의 비율을 프린트 하는거임
		printf("%.3f%%\n", answer);
	}

	return 0;
}
*/

/*
2309번 일곱 난쟁이
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void BubbleSort(int arr[], int cnt);

int main(){
	int i = 0, j = 0, k = 0, key[10] = { 0 }, sum = 0, temp1, temp2;

	for (i = 0; i < 9; i++) {
		scanf("%d", &key[i]);
		sum += key[i];
	}

	BubbleSort(key, 9);

	for (j = 0; j < 9; j++) {
		for (k = j + 1; k < 9; k++) {
			if (sum - (key[j] + key[k]) == 100) {
				temp1 = j; temp2 = k;
				break;
			}
		}
		if (sum - (key[j] + key[k]) == 100) break;
	}

	for (int q = 0; q < 9; q++) {
		if (q != temp1 && q != temp2) printf("%d\n", key[q]);
	}

	return 0;
}

void BubbleSort(int arr[], int cnt) {
	int i,j,temp;
	
	for (i = cnt - 1 ; i > 0; i--) {
		for (j = 0 ; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}

	}
	return;

}
