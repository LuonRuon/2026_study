/*
22193번 Multiply
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int N, M, cnt_a, cnt_b, cnt_answer = 0, temp = 0;
	char A[50001] = { 0 }, B[50001] = { 0 }, answer[100001] = { 0 };

	scanf("%d %d", &N, &M);
	
	scanf("%s", A), scanf("%s", B);

	cnt_a = strlen(A);
	cnt_b = strlen(B);

	if (cnt_a > cnt_b) {
		for (int i = cnt_a - 1; i >= 0; i--) {
			cnt_answer = temp;

			for (int j = cnt_b - 1; j >= 0; j--) {
				answer[cnt_answer] += (A[i] - '0') * (B[j] - '0');

				if (answer[cnt_answer] >= 10) {
					answer[cnt_answer + 1] += answer[cnt_answer] / 10;
					answer[cnt_answer] %= 10;
				}

				cnt_answer++;
			}

			temp++; //자릿수 변경
		}

		printf("%s", answer);
	}

	else {
		for (int i = cnt_b - 1; i >= 0; i--) {
			cnt_answer = temp;

			for (int j = cnt_a - 1; j >= 0; j--) {
				answer[cnt_answer] += ((A[j] -'0') * (B[i] - '0');

				if (answer[cnt_answer] >= 10) {
					answer[cnt_answer + 1] += answer[cnt_answer] / 10;
					answer[cnt_answer] %= 10;
				}

				cnt_answer++;
			}

			temp++; //자릿수 변경
		}
		
		printf("%s", answer);
	}



	return 0;
}