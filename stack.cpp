/*#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>


   
#pragma comment(lib, "winmm.lib")
#define TEXTLEN 512 //���ڿ� ���̸� ����

char texts[][TEXTLEN] = {"������","�ڼ���","��ä��","�̽���","�ѱԵ�","�輺��"};

//   char input[][100] = {""};
const int size = sizeof(texts) / sizeof(texts[0]); //�迭�� ����� ���� Ȯ��

int gettext(char *str)
{
     gets(str); //Ű���� �Է��� ����
     int len = (int) strlen(str); //�Է¹��� ���ڼ��� Ȯ��
     int onebyte = 0;
     int twobyte = 0;

     for (int i=0; i<len; i++) //for���� ����Ͽ� ī��Ʈ�� ��
     {
      if (str[i] < 0) twobyte++;  // 2����Ʈ �ѱ�
      else onebyte++;           // 1����Ʈ ����
     }

     return onebyte+(twobyte / 2);
}
int main(void)
{
   int num;
   int reg;

   printf("�ѱ� Ÿ�� ���α׷��Դϴ�.\n");

   srand(time(NULL));
   num = rand()%8;

   printf("���� : %s\n", texts[num]);
   printf("�Է� : ");
   //scanf("%s",&str[0]);

   reg = strcmp(str[i],texts[num]);
   if(reg==0)
      printf("�½��ϴ�.\n");
   else
      printf("Ʋ�Ƚ��ϴ�.\n");
   return 0;
}*/


/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>





int stack[100];//stack����, ��� 0���� �ʱ�ȭ
int cnt=0;//���� �ڷ��� ����
 
void push(int answer, int *top){
	if(cnt==6){
        printf("Q\n");
        return;
    }
  
    top=&stack[(*top)++];
}
 
  
void pop(int *top){
    if(cnt==0){
        printf("���� �����ϴ�.\n");
        return;
    }
    else{
        top=&stack[--cnt];
    }
}
void show(){
    int n;
    for(n=cnt; n>0; --n){
        printf("%d ====> %d\n", n, stack[n-1]);
    }
}

int main(void)
{
	int answer;

   int num;
   int reg;
   int i;
   int answer_cnt=0;
   char korea [][100] = {"�ѱԵ�","�ڼ���","������","�̽���","��ä��","�輺��","�ѱ���","��ְ�","�Ѽ���","�ѱԿ�","����ȯ","���ι�","�ź���","�̼���",
      "�ں���","ȣ����","�ٶ���","û�ָ�","��","����","��","��","�䳢","ġŸ","������","����","�����","�ܵ��Ƹ�","����",
      "����","��Ʈ��","����","å��","���"};
   char input[][100] = {""};
   //printf("s\n", strlen(&korea[0][100]));

   printf("�ѱ� Ÿ�� ���α׷��Դϴ�.\n");
   for( i = 0 ; i < 100 ; i++)
   {

      srand(time(NULL));
      num = rand()%34;

      //printf("%d\n", num);

      printf("���� : %s\n", korea[num]);
      printf("�Է� : ");
      scanf("%s",&input[0]);

      reg = strcmp(input[0], korea[num]);
   
      if(reg==0)
      {
         printf("�½��ϴ�.\n\n");
         printf("���� �����Դϴ�.\n\n");
         answer_cnt++;
      }
      else
      {
         printf("���� �����Դϴ�.\n\n");
         printf("Ʋ�Ƚ��ϴ�.\n\n");
         answer_cnt--;
      }
      if(answer_cnt == 6)
      {
         printf("�̱�̽��ϴ�.\n\n");
         exit(1);
      }
   }
   return 0;
}

/*#include <stdio.h>
#include <stdlib.h>
 
int stack[100];//stack����, ��� 0���� �ʱ�ȭ
int cnt=0;//���� �ڷ��� ����
 
void push(int data, int *top){
    if(cnt==100){
        printf("warning : over flow\n");
        return;
    }
    printf("\n\ndata : %d\n\n", data);
    stack[cnt]=data;
    ++cnt;
    top=&stack[(*top)++];
}
 
void pop(int *top){
    if(cnt==0){
        printf("���� �����ϴ�.\n");
        return;
    }
    else{
        top=&stack[--cnt];
    }
}
 
void show(){
    int n;
    for(n=cnt; n>0; --n){
        printf("%d ====> %d\n", n, stack[n-1]);
    }
}             
 
int main(){
    int i, input;
    int the_number_of_stack;
    int *top;
    int data;
    printf("�⺻ �ڷ� ���� �Է� : ");
    scanf("%d", &input);
    cnt+=input;
    for(i=0; i<input; ++i){
        printf("stack[%d] : ", i);
        scanf("%d", &stack[i]);
    }
    top=&stack[input];
    while(1){
        printf("\n\n");
        printf("0 : ����\n");
        printf("1 : PUSH\n");
        printf("2 : POP\n");
        printf("3 : SHOW\n");
        printf("0~3 ���� : ");
        scanf("%d", &input);
        if(input==0){
            return 0;
        }
        else if(input==1){
            printf("data �Է� : ");
            scanf("%d", &data);
            push(data, top);
        }
        else if(input==2){
            pop(top);
        }
        else if(input==3){
            show();
        }
    }
 
}*/


/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define STACK_SIZE 6

typedef char element;
element stack[STACK_SIZE];
int top=-1;

void push(element item)
{
   if(top>=STACK_SIZE-1){
      printf("\n\n Stack is FULL !\n");
      return;
   }
   else stack[++top] = item;
}

element pop()
{
   if(top==-1){
      printf("\n\n Stack is Empty!!\n");
      return 0;
   }
   else return stack[top--];
}

void printStack()
{
   int i;
   printf("STACK [");
   for( i=0; i<=top; i++)
      printf("%d", stack[i]);
   printf("]\n\n\n");
}

int main(void)
{
   int num;
   int reg;
   int i;
   
   int answer_cnt=0;
   char korea [][100] = {"�ѱԵ�","�ڼ���","������","�̽���","��ä��","�輺��","�ѱ���","��ְ�","�Ѽ���","�ѱԿ�","����ȯ","���ι�","�ź���","�̼���",
      "�ں���","ȣ����","�ٶ���","û�ָ�","��","����","��","��","�䳢","ġŸ","������","����","�����","�ܵ��Ƹ�","����",
      "����","��Ʈ��","����","å��","���"};
   char input[][100] = {""};
   //printf("s\n", strlen(&korea[0][100]));

   printf("�ѱ� Ÿ�� ���α׷��Դϴ�.\n");
   for( i = 0 ; i < 100 ; i++)
   {

      srand(time(NULL));
      num = rand()%34;

      //printf("%d\n", num);

      printf("���� : %s\n", korea[num]);
      printf("�Է� : ");
      scanf("%s",&input[0]);

      reg = strcmp(input[0], korea[num]);
   
      if(reg==0)
      {
         printf("�½��ϴ�.\n\n");
         answer_cnt++;
         push(0);
         printStack();

         printf("���� �����Դϴ�.\n\n");
          
      }
      else
      {
         printf("���� �����Դϴ�.\n\n");
         answer_cnt--;
         pop();
         printStack();

         printf("Ʋ�Ƚ��ϴ�.\n\n");
         
      }
      if(answer_cnt == 6)
      {   
         printf("�̱�̽��ϴ�.\n\n");
         exit(0);
      }
   }
   return 0;
}*/

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define STACK_SIZE 100




typedef int element;
element stack[STACK_SIZE];
int top = -1;

void push(element item)
{
   if(top >= STACK_SIZE-1){
      printf("\n\n Stack is FULL ! \n");
      return;
   }
   else stack[++top]=item;
}

element pop()
{
   if(top==-1) {
      printf("\n\n Stack is Empty!! \n");
      return 0;
   }
   else return stack[top--];
}

void printStack()
{
	int i;
	printf("STACK[");
   for(i=0; i<=top; i++)
      printf("%c\n", stack[i]);
   printf("]\n\n\n");
}

int main(void)
{
   int item;
   int num;
   int reg;
   int i;
   int answer_cnt=0;
   char korea [][100] = {"�ѱԵ�","�ڼ���","������","�̽���","��ä��","�輺��","�ѱ���","��ְ�","�Ѽ���","�ѱԿ�","����ȯ","���ι�","�ź���","�̼���",
      "�ں���","ȣ����","�ٶ���","û�ָ�","��","����","��","��","�䳢","ġŸ","������","����","�����","�ܵ��Ƹ�","����",
      "����","��Ʈ��","����","å��","���"};
   char input[][100] = {""};
   //printf("s\n", strlen(&korea[0][100]));

   printf("�ѱ� Ÿ�� ���α׷��Դϴ�.\n");
   for( i = 0 ; i < 100 ; i++)
   {

      srand(time(NULL));
      num = rand()%34;

      //printf("%d\n", num);

      printf("���� : %s\n", korea[num]);
      printf("�Է� : ");
      scanf("%s",&input[0]);

      reg = strcmp(input[0], korea[num]);
   
      if(reg==0)
      {
         printf("�½��ϴ�.\n\n");
       answer_cnt++;
       printf("���� ���\n");
       if(answer_cnt == 1)
          push(1);
       else if(answer_cnt ==2)
          push(2);
       else if(answer_cnt ==3)
          push(3);
       else if(answer_cnt ==4)
          push(4);
       else if(answer_cnt ==5)
          push(5);
       else if(answer_cnt ==6)
          push(6);
       if(answer_cnt ==1) 
		   printf("  ��       ��\n",push);
	   else if(answer_cnt==1,answer_cnt==2)
		   printf("  ��       ��\n����   ����\n",push);
	   else if(answer_cnt==3)
		   printf("   ��       ��\n ����   ����\n����������\n",push);
	   else if(answer_cnt==4)
		   printf("   ��       ��\n ����   ����\n����������\n  ��������\n",push);
	   else if(answer_cnt==5)
		   printf("   ��       ��\n ����   ����\n����������\n  ��������\n     �����\n",push);
	   else if(answer_cnt==6)
		   printf("   ��       ��\n ����   ����\n����������\n  ��������\n     �����\n       ���\n",push);
       printStack();


         printf("���� �����Դϴ�.\n\n");
      }
      else
      {
         printf("Ʋ�Ƚ��ϴ�.\n\n");
       printf("�������\n");
	   if(answer_cnt==1)
		   printf(" Stack is Empty!!\n",pop);
	   else if(answer_cnt==1,answer_cnt==2)
		   printf("  ��       ��\n",pop);
	    else if(answer_cnt==1,answer_cnt==2,answer_cnt==3)
		   printf("  ��       ��\n����   ����\n",pop);
	   else if(answer_cnt==1,answer_cnt==2,answer_cnt==3,answer_cnt==4)
		   printf("   ��       ��\n ����   ����\n����������\n",pop);
		else if(answer_cnt==1,answer_cnt==2,answer_cnt==3,answer_cnt==4,answer_cnt==5)
		   printf("   ��       ��\n ����   ����\n����������\n  ��������\n",pop);
	   else if(answer_cnt==1,answer_cnt==2,answer_cnt==3,answer_cnt==4,answer_cnt==5,answer_cnt==6)
		   printf("   ��       ��\n ����   ����\n����������\n  ��������\n     �����\n",pop);
		else if(answer_cnt==1,answer_cnt==2,answer_cnt==3,answer_cnt==4,answer_cnt==5,answer_cnt==6)
		   printf("   ��       ��\n ����   ����\n����������\n  ��������\n     �����\n       ���\n",pop);
         answer_cnt--;
       pop();
       printStack();
      }
      if(answer_cnt == 6)
      {
         printf("�̱�̽��ϴ�.\a\n\n");
         exit(1);
      }
   }
   return 0;
}*/

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define STACK_SIZE 30

typedef char element;
element stack[STACK_SIZE];
int top=-1;

void push(element item)
{
   if(top>=STACK_SIZE-1){
      printf("\n\n Stack is FULL !\n");
      return;
   }
   else stack[++top] = item;
}

element pop()
{
   if(top==-1){
      printf("\n\n Stack is Empty!!\n");
      return 0;
   }
   else return stack[top--];
}

void printStack()
{
   int i;
   printf("STACK [");
   for( i=0; i<=top; i++)
      printf("%c", stack[i]);
   printf("]\n\n\n");
}

int main(void)
{
   int num;
   int reg;
   int i;
   int count;
   
   char korea [][100] = {"�ѱԵ�","�ڼ���","������","�̽���","��ä��","�輺��","�ѱ���","��ְ�","�Ѽ���","�ѱԿ�","����ȯ","���ι�","�ź���","�̼���",
      "�ں���","ȣ����","�ٶ���","û�ָ�","��","����","��","��","�䳢","ġŸ","������","����","�����","�ܵ��Ƹ�","����",
      "����","��Ʈ��","����","å��","���"};

   char korea2 [][100]={"���̾� �ٶ��� ����","���̾� ���� ¥��", "���̾� ������ ���ϴµ�..","���̾� ��������.",
   "���̾�!!!","���̾� �뵷��", "���̾� Ŀ��!", "����ؿ� ����"};

   char input[][100] = {""};
   //printf("s\n", strlen(&korea[0][100]));

   printf("�ܱ����� ���� �ѱ� Ÿ�� ���� ���� ���α׷��Դϴ�.\n");
   printf("�ʱް� �߱��� ������ �ʱ��� ����ϸ� �߱� ���带 �����մϴ�.\n");
   printf("�ʱ� ���带 �����մϴ�. 6���� ���߽ø� ����մϴ�.\n");
   for( i = 0 ; i < 100 ; i++)
   {

      srand(time(NULL));
      num = rand()%34;

      //printf("%d\n", num);

      printf("���� : %s\n", korea[num]);
      printf("�Է� : ");
      scanf("%s",&input[0]);
     fflush(stdin);
      reg = strcmp(input[0], korea[num]);
   
      if(reg==0)
      {
         printf("�½��ϴ�.\n\n");

         push('0');
         printStack();

         printf("���� �����Դϴ�.\n\n");
          
      }
      else
      {
         printf("Ʋ�Ƚ��ϴ�.\n\n");

         pop();
         printStack();
       printf("���� �����Դϴ�.\n\n");
         printf("Ʋ�Ƚ��ϴ�.\n\n");
         
      }

     count=strlen(stack);
    // printf("\n%d\n",count);

      if(count == 6)
      {   
         printf("�ʱ� ���� ��� ���ϵ帳�ϴ�.\n\n");
       break;
     }
   }


       printf("�߱� ���带 �����մϴ�. 6���� ���߽ø� ����Դϴ�.\n");
      for( i = 0 ; i < 100 ; i++)
        {
       printf("���� : %s\n",korea2 [num]);//�ڸ���2 �� ��¾ȵ���
         printf("�Է� : ");
         scanf("%s",&input[0]);
       fflush(stdin);

         reg = strcmp(input[0], korea2[num]);//num�߸��ȵ�
   
         if(reg==0)
         {
          printf("�½��ϴ�.\n\n");
          push('0');
          printStack();

          printf("���� �����Դϴ�.\n\n");
          
      }
      else
      {
          printf("Ʋ�Ƚ��ϴ�.\n\n");
        pop();
          printStack();

        printf("���� �����Դϴ�.\n\n");
         
      }

     count=strlen(stack);
     printf("\n%d\n",count);
      if(count == 12)
      {   
         printf("�߱� ���� ��� ���ϵ帳�ϴ�.\n ��ŵ� ���� �ѱ��� ���!\n");
         exit(0);
      }
      if(count==0)
         printf("���� �ʱ����̽ʴϴ�.\n");
         
      }
   return 0;
   }
   */

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//#include <math.h>
#define STACK_SIZE 6




typedef int element; //char
element stack[STACK_SIZE];
int top = -1;
int bottom =0;

void push(element item)
{
   if(top >= STACK_SIZE-1){
      printf("\n\n Stack is FULL ! \n");
      return;
   }
   else stack[++top]=item;
}

element pop()
{
   if(top==-1 ) {
      printf("\n\n Stack is Empty!! \n");
      return 0;
   }
   else return stack[top--];
}

void printStack()
{
   int i;
   for(i=0; i<=top; i++)
      printf("%d\n", stack[i]); //"%s\n",&stack[i]
}

int main(void)
{
   int item;
   int num;
   int reg;
   int i;
   int answer_cnt=0;
   char korea [][100] = {"�ѱԵ�","�ڼ���","������","�̽���","��ä��","�輺��","�ѱ���","��ְ�","�Ѽ���","�ѱԿ�","����ȯ","���ι�","�ź���","�̼���",
      "�ں���","ȣ����","�ٶ���","û�ָ�","��","����","��","��","�䳢","ġŸ","������","����","�����","�ܵ��Ƹ�","����",
      "����","��Ʈ��","����","å��","���"};
   char input[][100] = {""};
   

   printf("�ѱ� Ÿ�� ���α׷��Դϴ�.\n\n\a");
   for( i = 0 ; i < 100 ; i++)
   {

      srand(time(NULL));
      num = rand()%34;

      

      printf("���� : %s\n", korea[num]);
      printf("�Է� : ");
      scanf("%s",&input[0]);

      reg = strcmp(input[0], korea[num]);
   
      if(reg==0)
      {
         printf("�½��ϴ�.\n\n");
		answer_cnt++;
     //  answer_cnt=strlen(stack);
	 //  push('0');
       printf("���� ���\n");
       if(answer_cnt ==1)
		   push(1);
       else if(answer_cnt ==2)
          push(2);
       else if(answer_cnt ==3)
          push(3);
       else if(answer_cnt ==4)
          push(4);
       else if(answer_cnt ==5)
          push(5);
       else if(answer_cnt ==6)
          push(6);
	 if(answer_cnt<=-1)
		 printf(" Stack is Empty!! \n");
	  else if(answer_cnt ==1) 
         printf("  ��       ��\n");
      else if(answer_cnt==1,answer_cnt==2)
         printf("  ��       ��\n����   ����\n");
      else if(answer_cnt==3)
         printf("   ��       ��\n ����   ����\n����������\n");
      else if(answer_cnt==4)
         printf("   ��       ��\n ����   ����\n����������\n  ��������\n");
      else if(answer_cnt==5)
         printf("   ��       ��\n ����   ����\n����������\n  ��������\n     �����\n");
      else if(answer_cnt==6)
         printf("   ��       ��\n ����   ����\n����������\n  ��������\n     �����\n       ���\n");
       printStack();


         printf("���� �����Դϴ�.\n\n");
      }
      else
      {
         printf("Ʋ�Ƚ��ϴ�.\n\n");
       printf("�������\n");
      if(answer_cnt==1)
         printf(" Stack is Empty!!\n");
      else if(answer_cnt==1,answer_cnt==2)
         printf("  ��       ��\n");
       else if(answer_cnt==1,answer_cnt==2,answer_cnt==3)
         printf("  ��       ��\n����   ����\n");
      else if(answer_cnt==1,answer_cnt==2,answer_cnt==3,answer_cnt==4)
         printf("   ��       ��\n ����   ����\n����������\n");
      else if(answer_cnt==1,answer_cnt==2,answer_cnt==3,answer_cnt==4,answer_cnt==5)
         printf("   ��       ��\n ����   ����\n����������\n  ��������\n");
      else if(answer_cnt==1,answer_cnt==2,answer_cnt==3,answer_cnt==4,answer_cnt==5,answer_cnt==6)
         printf("   ��       ��\n ����   ����\n����������\n  ��������\n     �����\n");
      else if(answer_cnt==1,answer_cnt==2,answer_cnt==3,answer_cnt==4,answer_cnt==5,answer_cnt==6)
         printf("   ��       ��\n ����   ����\n����������\n  ��������\n     �����\n       ���\n");
         answer_cnt--;
       pop();
       printStack();
      }
      if(top == 5)
      {
         printf("�̱�̽��ϴ�.\a\n\n");
         exit(1);
      }
   }
   return 0;
} */

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define STACK_SIZE 7//������ �����̴ϱ� NULL���� ����Ͽ� 7�� ����




typedef char element; //char �������� ���ÿ� �����Ҳ��ϱ�
element stack[STACK_SIZE];
int top = -1;
int bottom =0;

//**************push�Լ�***************************************************
void push(element item)
{
   if(top >= STACK_SIZE-1){
      printf("\n\n Stack is FULL ! \n");//�� ã�ٸ� ���
      return;//����
   }
   else stack[++top]=item;//�ƴϸ� ž ���� 1������Ű�� �����͸� �ִ´�.
}
//***************pop�Լ�***************************************************
element pop()
{
   if(top==-1 ) {
      printf("\n\n ������ ������ϴ�. �����Դϴ�. \n");
      return 0;
   }
   else return stack[top--];//�ƴϸ� ���� ž�� ���ð� ������ ��!  top--�� ž�� ��������.
}
//****************���þȿ� ����ִ� ������ ��¿� �Լ�*********************
void printStack()
{
   int i;
   for(i=0; i<=top; i++)//���� ž�� ����Ű�� �����ͱ����� ���
      printf("%c", stack[i]); //"%s\n",&stack[i]
}
//*************************************************************************
int main(void)
{
   int item;
   int num;
   int reg;
   int i;
   int answer_cnt=0;
   int answer_cnt2=0;
   char korea [][100] = {"�ѱԵ�","�ڼ���","������","�̽���","��ä��","�輺��","�ѱ���","��ְ�","�Ѽ���","�ѱԿ�","����ȯ","���ι�","�ź���","�̼���",
      "�ں���","ȣ����","�ٶ���","û�ָ�","��","����","��","��","�䳢","ġŸ","������","����","�����","�ܵ��Ƹ�","����",
      "����","��Ʈ��","����","å��","���"};
   char input[][100] = {""};

   printf("�ѱ� Ÿ�� ���α׷��Դϴ�.\n\a");//�ȳ�
   printf("������ 0�� 1���� �߰��Ǹ� 6������ ���� �� ����Դϴ�.\n");//�ȳ�
   for( i = 0 ; i < 100 ; i++)//for�� ������ �����ְ� 100��
   {


      srand(time(NULL));//������ ���ڸ� �־��ֱ� ����
      num = rand()%34;//������ ���ڸ� �־��ֱ� ����

      

      printf("���� : %s\n", korea[num]);
      printf("�Է� : ");
      scanf("%s",&input[0]);

      reg = strcmp(input[0], korea[num]);// ���ڿ� ���Լ�
   
      if(reg==0)//�������
      {
       printf("�½��ϴ�.\n\n");//���� ���
      push('0');//���� ��� ���� '0'�Է�

      answer_cnt=0; //��� 0���� �ʱ�ȭ ������� �ȱ׷��� �������� ���ڸ� ������ ����
      
      for(i=0; i<=top; i++)
       answer_cnt++;//���� �� �������� ���� top����
       
      printf("���� ���� ������ :");
      printStack();//���� push�� �߰������� �̹��� ���� �ͱ��� ����
      printf("\n���� ���\n");
      if(answer_cnt==0)//���þȿ� ���ڰ� 0�� �� �� 
         printf(" ���� �����̶� ���� ����� �����ϴ�. \n");
      else if(answer_cnt==1) //1���� ��
         printf("  ��       ��\n");
      else if(answer_cnt==2) //2�� �϶�
         printf("  ��       ��\n����   ����\n");
      else if(answer_cnt==3)
         printf("   ��       ��\n ����   ����\n����������\n");
      else if(answer_cnt==4)
         printf("   ��       ��\n ����   ����\n����������\n  ��������\n");
      else if(answer_cnt==5)
         printf("   ��       ��\n ����   ����\n����������\n  ��������\n     �����\n");
      else if(answer_cnt==6)
         {
          printf("   ��       ��\n ����   ����\n����������\n  ��������\n     �����\n       ���\n");
          printf("�̱�̽��ϴ�.\a\n\n");
         break;//i�� 100�̴ϱ� 6���� �Ǹ� for�� Ż���ϵ��� �극��ũ ����
        }
       printf("���� �����Դϴ�.\n\n");
      }
      else//Ʋ���� �ܿ�
      {
       printf("Ʋ�Ƚ��ϴ�.\n\n");
      pop();//��������
      
      answer_cnt2=0; //��� 0���� �ʱ�ȭ ������� �ȱ׷��� �������� ���ڸ� ������ ����
      for(i=0; i<=top; i++)
       answer_cnt2++;//2�� Ʋ���� �� ī���� ������ ���ϰ� ���� ���ÿ� ����� �ͱ��� ���� ��
      
      
      printf("���� ���� ������ :");
      printStack();
       printf("\n�������\n");
      if(answer_cnt2==0)
         printf(" ���� �����̶� ���� ����� �����ϴ�. \n");
      else if(answer_cnt2==1)
         printf("  ��       ��\n");
       else if(answer_cnt2==2)
         printf("  ��       ��\n����   ����\n");
      else if(answer_cnt2==3)
         printf("   ��       ��\n ����   ����\n����������\n");
      else if(answer_cnt2==4)
         printf("   ��       ��\n ����   ����\n����������\n  ��������\n");
        /*5,6 ���� ������
        6������ 5�� ������ ���� ����. 6�� �Ǹ� ����Ǵϱ� �׷��� 5����
        6������ ���̶� 7���� 6���� ������ �� ���� �׷��� 6 ����*/

     /*   }




      if(answer_cnt == 6)//�극��ũ�� ���� if������ Ż���� �� 6�� �������� Ż��
      {
         exit(1);
      }
   }
   return 0;
}*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define STACK_SIZE 7//������ �����̴ϱ� NULL���� ����Ͽ� 7�� ����
                    //��� NULL�� ���������� NULL�� ���� 6���� �ص���
                    //�׷��� ���ڿ��� NULL�� ������ִ°� �ǹٸ����� �׳� 7�� ����


typedef char element; //char �������� ���ÿ� �����Ҳ��ϱ�
element stack[STACK_SIZE];
int top = -1;
int bottom =0;

//**************push�Լ�***************************************************
void push(element item)
{
   if(top >= STACK_SIZE-1){
      printf("\n\n Stack is FULL ! \n");//�� ã�ٸ� ���
      return;//����
   }
   else stack[++top]=item;//�ƴϸ� ž ���� 1������Ű�� �����͸� �ִ´�.
}
//***************pop�Լ�***************************************************
element pop()
{
   if(top==-1 ) {
      printf("\n ������ ������ϴ�. �����Դϴ�. \n");
      return 0;
   }
   else return stack[top--];//�ƴϸ� ���� ž�� ���ð� ������ ��!  top--�� ž�� ��������.
}
//****************���þȿ� ����ִ� ������ ��¿� �Լ�*********************
void printStack()
{
   int i;
   for(i=0; i<=top; i++)//���� ž�� ����Ű�� �����ͱ����� ���
      printf("%c", stack[i]); //"%s\n",&stack[i]
}
//*************************************************************************
int main(void)
{
   int num; //�ܾ� �迭�ȿ� �������� �ε��� �� ���Ҷ� ���
   int reg; //����� �Է´ܾ�� ������ �ܾ� �� ������ 0 �ٸ��� 1
   int i; // for�� ����� ����
   int answer_cnt=0; 
   int answer_cnt2=0;
   char korea [][100] = {"�ѱԵ�","�ڼ���","������","�̽���","��ä��","�輺��","�ѱ���","��ְ�","�Ѽ���","�ѱԿ�","����ȯ","���ι�","�ź���","�̼���",
      "�ں���","ȣ����","�ٶ���","û�ָ�","��","����","��","��","�䳢","ġŸ","������","����","�����","�ܵ��Ƹ�","����",
      "����","��Ʈ��","����","å��","���"}; //�ܾ� �迭
   char input[][100] = {""}; //����ڰ� �Է��� �ܾ� ����

   printf("%4 *******�ѱ� Ÿ�� ���α׷��Դϴ�.******* \n\a");//�ȳ�
   printf("������ 1���� �������� ������ Ʋ���� 1���� �����Ǵ� ���α׷��Դϴ�.6���� ����� �̱�ϴ�.\n\n");//�ȳ�
   for( i = 0 ; i < 100 ; i++)//for�� ������ �����ְ� 100��
   {


      srand(time(NULL));//������ ���ڸ� �־��ֱ� ����
      num = rand()%35;//������ ���ڸ� �־��ֱ� ����

      

      printf("���� : %s\n", korea[num]);
      printf("�Է� : ");
      scanf("%s",&input[0]);

      reg = strcmp(input[0], korea[num]);// ���ڿ� ���Լ�
   
      if(reg==0)//�������,��ġ�Ұ��
      {
		  printf("�½��ϴ�.\n\n");//���� ���
		  push('1');//���� ��� ���� '1'�Է�
		  answer_cnt=0; //��� 0���� �ʱ�ȭ ������� �ȱ׷��� �������� ���� ������ ����
      
		  for(i=0; i<=top; i++)
			  answer_cnt++;//���� �� �������� ���� top����
       
		  printf("���� ���� ������ :");
		  printStack();//���� push�� �߰������� �̹��� ���� �ͱ��� ����
		  printf("\n\n���� ���\n");
		  if(answer_cnt==0)//���þȿ� ���ڰ� 0�� �� �� 
			  printf(" ���� �����̶� ���� ����� �����ϴ�. \n");
		 else if(answer_cnt==1) //1���� ��
         printf("  ��       ��\n");
      else if(answer_cnt==2) //2�� �϶�
         printf("  ��       ��\n����   ����\n");
      else if(answer_cnt==3)
         printf("   ��       ��\n ����   ����\n����������\n");
      else if(answer_cnt==4)
         printf("   ��       ��\n ����   ����\n����������\n  ��������\n");
      else if(answer_cnt==5)
         printf("   ��       ��\n ����   ����\n����������\n  ��������\n     �����\n");
      else if(answer_cnt==6)
         {
          printf("   ��       ��\n ����   ����\n����������\n  ��������\n     �����\n       ���\n");
          printf("\n\n�̱�̽��ϴ�.\a\n\n");
         break;//i�� 100�̴ϱ� 6���� �Ǹ� for�� Ż���ϵ��� �극��ũ ����
        }
       printf("\n���� �����Դϴ�.\n\n");
      }
      else//Ʋ���� �ܿ�
      {
       printf("Ʋ�Ƚ��ϴ�.\n\n");
      pop();//��������
      
      answer_cnt2=0; //��� 0���� �ʱ�ȭ ������� �ȱ׷��� �������� ���ڸ� ������ ����
      for(i=0; i<=top; i++)
       answer_cnt2++;//2�� Ʋ���� �� ī���� ������ ���ϰ� ���� ���ÿ� ����� �ͱ��� ���� ��
      
      
      printf("���� ���� ������ :");
      printStack();
       printf("\n\n�������\n");
      if(answer_cnt2==0)
         printf(" ���� �����̶� ���� ����� �����ϴ�. \n");
      else if(answer_cnt2==1)
         printf("  ��       ��\n");
       else if(answer_cnt2==2)
         printf("  ��       ��\n����   ����\n");
      else if(answer_cnt2==3)
         printf("   ��       ��\n ����   ����\n����������\n");
      else if(answer_cnt2==4)
         printf("   ��       ��\n ����   ����\n����������\n  ��������\n");
	  printf("\n���� �����Դϴ�.\n\n");
        /*5,6 ���� ������
        6������ 5�� ������ ���� ����. 6�� �Ǹ� ����Ǵϱ� �׷��� 5����
        6������ ���̶� 7���� 6���� ������ �� ���� �׷��� 6 ����*/

        }




      if(top == 5)//�극��ũ�� ���� if������ Ż���� �� 0~5���� top�� ������ ���α׷� ����
      {
         exit(1);
      }
   }
   return 0;
} 