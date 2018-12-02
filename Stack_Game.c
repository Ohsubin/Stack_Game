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
		printf("������ ���� á���ϴ�.\n");
		return;
	}
	else
		stack[++top] = item;
}

void pop() {
	if (top <= -1) {
		printf("������ ������ϴ�.\n");
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
	char heart[6][20] = {"    ��       ��","  ����   ����","����������","  ��������","     �����","       ���"};

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
		printf("���� ���� ����\n");
		return;
	}

	printf("���� ���� ����\n");

	while ( (c = fgetc(fp)) != EOF ) {
		fscanf(fp, "%s", &words[line]);
		line++;
	}
	printf("%d\n", line);
	//char korea[34][10] = { "�ѱԵ�","�ڼ���","������","�̽���","��ä��","�輺��","�ѱ���","��ְ�","�Ѽ���","�ѱԿ�","����ȯ","���ι�","�ź���","�̼���",
	//  "�ں���","ȣ����","�ٶ���","û�ָ�","��","����","��","��","�䳢","ġŸ","������","����","�����","�ܵ��Ƹ�","����",
	//  "����","��Ʈ��","����","å��","���" }; 
	char input[100];
	int cnt = 0;
	int num, reg;
	
	printf(" *******�ѱ� Ÿ�� Game******* \n");
	printf("������ ���� ��Ʈ����� �ϼ��ϸ� �̱�ϴ�.\n\n");

	while (print_stack_hap() != 6) {
		srand(time(NULL));
		num = rand() % line;
		
		printf("���� : %s\n", words[num]);
		printf("�Է� : ");
		gets(input);

		reg = strcmp(input, words[num]);
		
		if (reg == 0) {
			printf("�����Դϴ�.\n");
			push(1);
			printf("%d���Դϴ�.\n", print_stack_hap());
			print_heart(print_stack_hap());
			if (print_stack_hap() == 6) {
				printf("*****Game Win*****\n");
			}
		}
		else {
			printf("Ʋ�Ƚ��ϴ�.\n");
			pop();
			if (print_stack_hap() == 0) {
				printf("0���Դϴ�.\n����� ����� �����ϴ�.\n");
			}
			else {
				printf("%d���Դϴ�.\n", print_stack_hap());
				print_heart(print_stack_hap());
			}

		}
		
	}
	fclose(fp);
}