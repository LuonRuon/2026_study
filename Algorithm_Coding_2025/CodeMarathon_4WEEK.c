//8370번 PLANE 
/*비즈니스석 n열, 이코노미석 n2열, 비즈니스열에 k1좌석, 이코노미석 각 열에 k2개 좌석
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n1, n2, k1, k2;
	scanf("%d %d %d %d", &n1, &k1, &n2, &k2);
	printf("%d", (n1 * k1) + (n2 * k2));


	return 0;
}
*/

/*32326번 Conveyor Belt Sushi
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int R, G, B;
	scanf("%d %d %d", &R, &G, &B);
	printf("%d", (R * 3) + (G * 4) + (B * 5));


	return 0;
}
*/

/*31656번 Sticky Keys
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char s[1001] = { 0 };

	gets(s);
	
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == s[i + 1]) continue;
		printf("%c", s[i]);
	}


	return 0;
}*/

/*24768번 Left Beehind
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int sweet, sour;
	
	while (1) {
		scanf("%d %d", &sweet, &sour);
		if (sweet == 0 && sour == 0) break;
		
		if ((sweet + sour) == 13) printf("Never speak again.\n");
		else if (sweet > sour) printf("To the convention.\n");
		else if (sweet < sour) printf("Left beehind.\n");
		else if (sweet == sour) printf("Undecided.\n");
	}



	return 0;
}*/

/*13484번 Tarifa
// X : 페루에 달마다 제공되는 데이터양 , N : 몇 달동안의 데이터인지, Pi => 달 별 사용량
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int X, N, P, ans = 0;
	scanf("%d %d", &X, &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &P);
		ans += X - P;
	}
	printf("%d", ans + X);

	return 0;
}
*/

//10708번 크리스마스 파티
/*
타켓은 자기자신 이름을 꼭 적어야함.
예상이 맞으면 1점, 틀리면 0점, 타켓은 틀린사람의 숫자만큼 +1점
N = 친구들 수 (100까지)
M = 게임 수 (100까지)
Target = 게임별 타겟
Vote = 각자 투표 결과
Score = 각자 획득 점수


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, M, Target[101] = { 0 }, Vote[101] = { 0 }, Score[101] = { 0 }, temp;
	scanf("%d %d", &N, &M);
	//라운드별 타겟 정보
	for (int i = 1; i <= M; i++) {
		scanf("%d", &Target[i]);
	}
	for (int j = 1; j <= M; j++) {
		for (int k = 1; k <= N; k++) {
			scanf("%d", &Vote[k]);
			if (Vote[k] == Target[j]) Score[k]++;
			else Score[Target[j]]++;
		}
	}
	for (int q = 1; q <= N; q++) {
		printf("%d\n", Score[q]);
	}

	return 0;
}
*/

/*
24389번 2의 보수
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//S= N의 보수
int main() {
	unsigned int N, M = 1;
	int cnt = 0;
	scanf("%u", &N);

	N = N ^ ((~N) + 1);


	for (int i = 0; i < 32; i++) {
		if ((N & M) > 0) {
			cnt++;
		}
		M = M << 1;
	}


	printf("%d", cnt);

	return 0;
}