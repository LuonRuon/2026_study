/*16486번 운동장 한 바퀴
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double d1, d2, ans = 0;
	scanf("%lf %lf", &d1, &d2);
	ans = (d1 * 2) + (d2 * 3.141592 * 2);
	printf("%lf", ans);


	return 0;
}*/

/*34509번 2,4,6,8
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N = 10, reverse, sum;
	for (N; N < 100; N++) {
		reverse = (N % 10) * 10 + ((N / 10) % 10);
		sum = (N % 10) + ((N / 10) % 10);
		if (reverse % 4 == 0 && sum % 6 == 0 && N%10 != 8 && ((N / 10) % 10) != 8) {
			printf("%d", N);
			return 0;
		}

	}



	return 0;
}*/

/*17614번 369
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, cnt =0, temp;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		temp = i;
		while (temp != 0) {
			if (temp % 10 == 3 || temp % 10 == 6 || temp % 10 == 9) {
				cnt++;
			}
			temp /= 10;
		}
	}
	printf("%d", cnt);

	return 0;
}*/

/*17450번 과자 사기
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	float s[6];
	float max = 0;
	int flag = 6;

	scanf("%f %f", &s[0], &s[1]);
	scanf("%f %f", &s[2], &s[3]);
	scanf("%f %f", &s[4], &s[5]);
	
	for (int i = 0; i < 6; i += 2) {
		if (s[i] * 10 >= 5000) {
			s[i] = (s[i + 1] * 10) / ((s[i] * 10) - 500);
		}
		else {
			s[i] = (s[i + 1] * 10) / (s[i] * 10);
		}
		if (s[i] >= max) {
			max = s[i];
			flag = i;
		}
	}

	if (flag == 0) printf("S");
	else if (flag == 2) printf("N");
	else printf("U");


	return 0;
}*/

/*
//14592번, 14593번 2017 아주대학교 프로그래밍 경시대회 (Small, Large)
최대 10000명의 참가자
점수의 총합이 제일 높은 경우 그 사람 출력
(flag = 1)총합이 같으면, 제출 횟수가 적은 참가자가 높은 순위
max를 찾으면 flag =0, 해당 인덱스 기록, 이전 인덱스 삭제
값이 같으면 flag = 1, 해당 인덱스 기록(최소 2명)
제출 횟수 또한 같으면 업로드 시간이 빠른 사람이 높은 순위

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int equal[10001] = { 0 }, s[10001] = { 0 }, c[10001] = { 0 }, l[10001] = { 0 };
	int N, flag = 0, max_score = 0, min_times = 51, min_upload = 180;
	
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%d %d %d", &s[i], &c[i], &l[i]);

		if (s[i] > max_score) {
			max_score = s[i];
			flag = 0; //새로운 max값이 등장했으므로 이전 같은 값은 무시
			for (int j = 1; j < i; j++) equal[j] = 0; //기록해둔 인덱스 또한 0으로 초기화
			equal[i] = 1; //새로운 max값의 인덱스에 1로 표시
		}
		else if (s[i] == max_score) {
			flag = 1; //동일한 값이 등장했으므로 flag = 1로 표시
			equal[i] = 1; //동일한 값이 등장하는 인덱스를 표시
		}
	}

	if (flag == 0) {
		//동일한 값이 없는 경우
		for (int i = 1; i <= N; i++) {
			if (equal[i] == 1) {
				printf("%d", i); //해당 값을 출력하고 프로그램 종료
				return 0;
			}
		}
	}
	else {
		//제출 횟수로 판단하기
		flag = 0; //flag 초기화 (새로운 값에서 써야함)
		for (int j = 1; j <= N; j++) equal[j] = 0; //equal 안의 모든 값 초기화
		for (int i = 1; i <= N; i++) {
			if (c[i] < min_times) {
				min_times = c[i];
				flag = 0;
				for (int j = 1; j < i; j++) equal[j] = 0; //그 전에 기록해둔 값 초기화
				equal[i] = 1;
			}
			else if (c[i] == min_times) {
				flag = 1;
				equal[i] = 1;
			}
		}
	}

	if (flag == 0) {
		//동일한 값이 없는 경우
		for (int i = 1; i <= N; i++) {
			if (equal[i] == 1) {
				printf("%d", i); //해당 값을 출력하고 프로그램 종료
				return 0;
			}
		}
	}
	else {
		for (int j = 1; j <= N; j++) equal[j] = 0; //equal 안의 모든 값 초기화
		for (int i = 1; i <= N; i++) {
			if (l[i] < min_upload) {
				min_upload = l[i];
				for (int j = 1; j < i; j++) equal[j] = 0; //그 전에 기록해둔 값 초기화
				equal[i] = 1;
			}
		}
	}

	for (int i = 1; i <= N; i++) {
		if (equal[i] == 1) {
			printf("%d", i); //해당 값을 출력하고 프로그램 종료
			return 0;
		}
	}

}*/

/*
//14592번, 14593번 2017 아주대학교 프로그래밍 경시대회 (Small, Large)
최대 10000명의 참가자
점수의 총합이 제일 높은 경우 그 사람 출력
(flag = 1)총합이 같으면, 제출 횟수가 적은 참가자가 높은 순위
max를 찾으면 flag =0, 해당 인덱스 기록, 이전 인덱스 삭제
값이 같으면 flag = 1, 해당 인덱스 기록(최소 2명)
제출 횟수 또한 같으면 업로드 시간이 빠른 사람이 높은 순위

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef struct entry {
	int s, c, l, number;
}entry;

int main() {
	int n;
	entry ans, now;
	scanf("%d", &n);
	scanf("%d %d %d", &ans.s, &ans.c, &ans.l);
	ans.number = 1;
	for (int i = 2; i <= n; i++) {
		scanf("%d %d %d", &now.s, &now.c, &now.l);
		now.number = i;

		if (now.s == ans.s && now.c == ans.c && now.l < ans.l) {
			ans = now;
			continue;
		}
		if (now.s == ans.s && now.c < ans.c) {
			ans = now;
			continue;
		}
		if (now.s > ans.s) {
			ans = now;
			continue;
		}
	}
	printf("%d", ans.number);
}*/


/*
//16917번 양념 반 후라이드 반

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, c, x, y, ans =0, ans1 =0;
	scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);
	if ((c * 2) < (a + b)) {
		//반반 두마리가 후라이드 1, 양념 1보다 싼 경우 : 반반 치킨을 최대한 많이 구매한 후 남은 것을 각각 구매
		//반반치킨으로 다 채운 경우랑 반반으로 채우고 나머지를 따로따로 산 경우랑 비교 후 출력
		if (x >= y) {
			ans += (y * 2) * c;
			ans += (x - y) * a;
			ans1 += (x * 2) * c;
			if (ans1 < ans) ans = ans1;
		}
		else {
			ans += (x * 2) * c;
			ans += (y - x) * b;
			ans1 += (y * 2) * c;
			if (ans1 < ans) ans = ans1;
		}
	}
	else {
		ans += (a * x) + (b * y);
	}
	printf("%d", ans);

	return 0;
}*/

/*
//15814 야바위 대장

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char str[101], temp;
	int t, a, b;
	scanf("%s", str);
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		temp = str[a];
		str[a] = str[b];
		str[b] = temp;
	}
	printf("%s", str);


	return 0;
}*/

/*
//1543번 문서검색

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
int main() {
	char str[2501] = { 0 }, ans[51] = { 0 }, cmp[51] = { 0 };
	char* temp;
	int length_str, length_ans, cnt = 0;
	gets(str);
	gets(ans);

	temp = str; //temp는 str의 위치를 가리키는 포인터

	length_ans = strlen(ans);
	length_str = strlen(str);

	for (int i = 0; i < length_str; i++) {
		strncpy(cmp, temp, length_ans);
		temp += 1;
		if (strcmp(ans, cmp) == 0) {
			temp += length_ans-1;
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}*/

