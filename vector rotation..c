#define_CRT_SECURE_NO_WARNINGS
#include "header.h"
#include <stdio.h>
#include <stdlib.h>

char *trivial_rotation(int num, int d, char *ary, int length) {
	static char answer[30] = { 0 };
	char temp = 0;
	for (int i = 0; i < 30; i++)
		answer[i] = ary[i];

	if (d < 0) {
		for (int i = 0; i < num; i++) {
			temp = answer[0];
			for (int j = 0; j < length - 1; j++)
				answer[j] = answer[j + 1];
			answer[length - 1] = temp;
		}
	}
	else if (d > 0) {
		for (int i = 0; i < num; i++) {
			temp = answer[length - 1];
			for (int j = length - 2; j > -1; j--)
				answer[j + 1] = answer[j];
			answer[0] = temp;
		}
	}
	return answer;
}

int main(void) {
	int num = 0, d = 0, length = 0;
	char ary[30] = { 0 };
	char *ans = 0;
	printf("Enter Input : ");
	scanf("%d %d %s", &num, &d, ary);
	while (ary[length])
		length++;
	ans = trivial_rotation(num, d, ary, length);
	printf("answer : ");
	puts(ans);
	
	return 0;
}
