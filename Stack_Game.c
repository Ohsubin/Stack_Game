#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define STACK_MAX_SIZE 7

typedef int element;
element stack[STACK_MAX_SIZE];
int top = -1;

void push(element item) {
	if (top >= STACK_MAX_SIZE - 1) {
		printf("스택이 가득 찼습니다.\n");
		return;
	}
	else
		stack[++top] = item;
}

void pop() {
	if (top <= -1) {
		printf("스택이 비었습니다.\n");
		return;
	}
	else
		top--;
}

int print_stack_hap() {
	int hap = 0;
	for (int i = 0; i <= top; i++) {
		hap += stack[i];
	}
	return hap;
}

void print_heart(int cnt) {
	int i;
	char heart[6][20] = {"    ■       ■","  ■■■   ■■■","■■■■■■■■■","  ■■■■■■■","     ■■■■","       ■■"};

	printf("\n");
	for (i = 0; i < cnt; i++) {
			printf("%s\n", heart[i]);	
	}
	printf("\n");
}

void main() {
	int line=0, c;
	char words[170][100];
	FILE *fp = NULL;
	fp = fopen("korea_words.txt", "r");
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return;
	}

	printf("파일 열기 성공\n");

	while ( (c = fgetc(fp)) != EOF ) {
		fscanf(fp, "%s", &words[line]);
		line++;
	}
	printf("%d\n", line);
	//char korea[34][10] = { "한규동","박선희","오수빈","이승재","김채원","김성공","한광희","김애경","한서현","한규옥","윤여환","박인범","신병오","이선경",
	//  "박병휘","호랑이","다람쥐","청솔모","뱀","여우","곰","쥐","토끼","치타","독수리","참새","고양이","햄동아리","산융",
	//  "가방","노트북","의자","책상","통신" }; 
	char input[100];
	int cnt = 0;
	int num, reg;
	
	printf(" *******한글 타자 Game******* \n");
	printf("정답을 맞춰 하트모양을 완성하면 이깁니다.\n\n");

	while (print_stack_hap() != 6) {
		srand(time(NULL));
		num = rand() % line;
		
		printf("문제 : %s\n", words[num]);
		printf("입력 : ");
		gets(input);

		reg = strcmp(input, words[num]);
		
		if (reg == 0) {
			printf("정답입니다.\n");
			push(1);
			printf("%d점입니다.\n", print_stack_hap());
			print_heart(print_stack_hap());
			if (print_stack_hap() == 6) {
				printf("*****Game Win*****\n");
			}
		}
		else {
			printf("틀렸습니다.\n");
			pop();
			if (print_stack_hap() == 0) {
				printf("0점입니다.\n취득한 모양이 없습니다.\n");
			}
			else {
				printf("%d점입니다.\n", print_stack_hap());
				print_heart(print_stack_hap());
			}

		}
		
	}
	fclose(fp);
}