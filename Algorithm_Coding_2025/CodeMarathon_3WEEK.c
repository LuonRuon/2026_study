
/*18301 Rats 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n1, n2, n12, answer;
	scanf("%d %d %d", &n1, &n2, &n12);

	answer = ((n1 + 1) * (n2 + 1) / (n12 + 1)) - 1;
	printf("%d", answer);


	return 0;
}
*/

/*28691번 정보보호학부 동아리 소개
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char name = 0;

	scanf("%c", &name);

	if (name == 'M') printf("MatKor");
	else if (name == 'W') printf("WiCys");
	else if (name == 'C') printf("CyKor");
	else if (name == 'A') printf("AlKor");
	else printf("$clear");



	return 0;
}
*/


/*30087번 진흥원 세미나
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int N =	0;
	char name[30] = { 0 };
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", name);

		if (strcmp(name, "Algorithm")==0) printf("204\n");
		else if (strcmp(name, "DataAnalysis")==0) printf("207\n");
		else if (strcmp(name, "ArtificialIntelligence")==0) printf("302\n");
		else if (strcmp(name, "CyberSecurity")==0) printf("B101\n");
		else if (strcmp(name, "Network")==0) printf("303\n");
		else if (strcmp(name, "Startup")==0) printf("501\n");
		else if (strcmp(name, "TestStrategy")==0) printf("105\n");

	}


	return 0;
}
*/

/*30224번 Lucky 7
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int Number = 0, flag1 = 0, flag2 = 0; //flag1은 7로 나누어지는가 판단, flag2는 7이 포함되어 있는가 판단

	scanf("%d", &Number);
	
	if (Number % 7 == 0) flag1 = 1;

	for (int i = Number; i > 0; i /= 10) {
		if (i % 10 == 7) {
			flag2 = 1;
			break;
		}
	}

	if (flag2 == 1) {
		if (flag1 == 1) printf("3");
		else printf("2");
	}
	else {
		if (flag1 == 1) printf("1");
		else printf("0");
	}

	return 0;
}
*/

/*17874번 Piece of Cake!
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int thick = 4, n, h, v, max = 0;
	scanf("%d %d %d", &n, &h, &v);

	max = h * v; //1사분면
	if (max < (n - h) * v) max = (n - h) * v; //2사분면
	if (max < (n - h) * (n - v)) max = (n - h) * (n - v); //3사분면
	if (max < h * (n - v)) max = h * (n - v); //4사분면

	printf("%d", max * 4);




	return 0;
}*/

/*31822번 재수강
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, count = 0;
	char subject[11], retake[11];
	scanf("%s", subject);
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", retake);
		ㄹor (int j = 0; j < 5; j++) {
			if (subject[j] != retake[j]) break;

			if (j == 4) count++;
		}
	}
	printf("%d", count);


	return 0;
}*/

/*2386번 도비의 영어 공부
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char sentence[251] = { 0 };
	char alphabet = 0;
	int count = 0;
	while (1) {
		scanf("%c", &alphabet);
		gets(sentence);
		if (alphabet == '#') break; //#입력 받을시 종료
		//대소문자 고려하기 
		for (int i = 0; i < strlen(sentence); i++) {
			if (sentence[i] == alphabet || sentence[i] == (alphabet - 32)) count++;
		}
		printf("%c %d\n", alphabet, count);
		count = 0;
	}


	return 0;
}*/

/*20492번 세금
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	printf("%d %d", (N - (N / 100 * 22)), (N - ((N / 100 * 20) / 100 * 22)));


	return 0;
}*/

