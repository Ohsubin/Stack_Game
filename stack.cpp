/*#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>


   
#pragma comment(lib, "winmm.lib")
#define TEXTLEN 512 //문자열 길이를 정의

char texts[][TEXTLEN] = {"오수빈","박선희","김채원","이승재","한규동","김성공"};

//   char input[][100] = {""};
const int size = sizeof(texts) / sizeof(texts[0]); //배열에 저장된 행을 확인

int gettext(char *str)
{
     gets(str); //키보드 입력을 받음
     int len = (int) strlen(str); //입력받은 글자수를 확인
     int onebyte = 0;
     int twobyte = 0;

     for (int i=0; i<len; i++) //for문을 사용하여 카운트를 샘
     {
      if (str[i] < 0) twobyte++;  // 2바이트 한글
      else onebyte++;           // 1바이트 영문
     }

     return onebyte+(twobyte / 2);
}
int main(void)
{
   int num;
   int reg;

   printf("한글 타자 프로그램입니다.\n");

   srand(time(NULL));
   num = rand()%8;

   printf("문제 : %s\n", texts[num]);
   printf("입력 : ");
   //scanf("%s",&str[0]);

   reg = strcmp(str[i],texts[num]);
   if(reg==0)
      printf("맞습니다.\n");
   else
      printf("틀렸습니다.\n");
   return 0;
}*/


/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>





int stack[100];//stack선언, 모두 0으로 초기화
int cnt=0;//현재 자료의 개수
 
void push(int answer, int *top){
	if(cnt==6){
        printf("Q\n");
        return;
    }
  
    top=&stack[(*top)++];
}
 
  
void pop(int *top){
    if(cnt==0){
        printf("값이 없습니다.\n");
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
   char korea [][100] = {"한규동","박선희","오수빈","이승재","김채원","김성공","한광희","김애경","한서현","한규옥","윤여환","박인범","신병오","이선경",
      "박병휘","호랑이","다람쥐","청솔모","뱀","여우","곰","쥐","토끼","치타","독수리","참새","고양이","햄동아리","산융",
      "가방","노트북","의자","책상","통신"};
   char input[][100] = {""};
   //printf("s\n", strlen(&korea[0][100]));

   printf("한글 타자 프로그램입니다.\n");
   for( i = 0 ; i < 100 ; i++)
   {

      srand(time(NULL));
      num = rand()%34;

      //printf("%d\n", num);

      printf("문제 : %s\n", korea[num]);
      printf("입력 : ");
      scanf("%s",&input[0]);

      reg = strcmp(input[0], korea[num]);
   
      if(reg==0)
      {
         printf("맞습니다.\n\n");
         printf("다음 문제입니다.\n\n");
         answer_cnt++;
      }
      else
      {
         printf("다음 문제입니다.\n\n");
         printf("틀렸습니다.\n\n");
         answer_cnt--;
      }
      if(answer_cnt == 6)
      {
         printf("이기셨습니다.\n\n");
         exit(1);
      }
   }
   return 0;
}

/*#include <stdio.h>
#include <stdlib.h>
 
int stack[100];//stack선언, 모두 0으로 초기화
int cnt=0;//현재 자료의 개수
 
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
        printf("값이 없습니다.\n");
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
    printf("기본 자료 개수 입력 : ");
    scanf("%d", &input);
    cnt+=input;
    for(i=0; i<input; ++i){
        printf("stack[%d] : ", i);
        scanf("%d", &stack[i]);
    }
    top=&stack[input];
    while(1){
        printf("\n\n");
        printf("0 : 종료\n");
        printf("1 : PUSH\n");
        printf("2 : POP\n");
        printf("3 : SHOW\n");
        printf("0~3 선택 : ");
        scanf("%d", &input);
        if(input==0){
            return 0;
        }
        else if(input==1){
            printf("data 입력 : ");
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
   char korea [][100] = {"한규동","박선희","오수빈","이승재","김채원","김성공","한광희","김애경","한서현","한규옥","윤여환","박인범","신병오","이선경",
      "박병휘","호랑이","다람쥐","청솔모","뱀","여우","곰","쥐","토끼","치타","독수리","참새","고양이","햄동아리","산융",
      "가방","노트북","의자","책상","통신"};
   char input[][100] = {""};
   //printf("s\n", strlen(&korea[0][100]));

   printf("한글 타자 프로그램입니다.\n");
   for( i = 0 ; i < 100 ; i++)
   {

      srand(time(NULL));
      num = rand()%34;

      //printf("%d\n", num);

      printf("문제 : %s\n", korea[num]);
      printf("입력 : ");
      scanf("%s",&input[0]);

      reg = strcmp(input[0], korea[num]);
   
      if(reg==0)
      {
         printf("맞습니다.\n\n");
         answer_cnt++;
         push(0);
         printStack();

         printf("다음 문제입니다.\n\n");
          
      }
      else
      {
         printf("다음 문제입니다.\n\n");
         answer_cnt--;
         pop();
         printStack();

         printf("틀렸습니다.\n\n");
         
      }
      if(answer_cnt == 6)
      {   
         printf("이기셨습니다.\n\n");
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
   char korea [][100] = {"한규동","박선희","오수빈","이승재","김채원","김성공","한광희","김애경","한서현","한규옥","윤여환","박인범","신병오","이선경",
      "박병휘","호랑이","다람쥐","청솔모","뱀","여우","곰","쥐","토끼","치타","독수리","참새","고양이","햄동아리","산융",
      "가방","노트북","의자","책상","통신"};
   char input[][100] = {""};
   //printf("s\n", strlen(&korea[0][100]));

   printf("한글 타자 프로그램입니다.\n");
   for( i = 0 ; i < 100 ; i++)
   {

      srand(time(NULL));
      num = rand()%34;

      //printf("%d\n", num);

      printf("문제 : %s\n", korea[num]);
      printf("입력 : ");
      scanf("%s",&input[0]);

      reg = strcmp(input[0], korea[num]);
   
      if(reg==0)
      {
         printf("맞습니다.\n\n");
       answer_cnt++;
       printf("얻은 모양\n");
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
		   printf("  ■       ■\n",push);
	   else if(answer_cnt==1,answer_cnt==2)
		   printf("  ■       ■\n■■■   ■■■\n",push);
	   else if(answer_cnt==3)
		   printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n",push);
	   else if(answer_cnt==4)
		   printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n",push);
	   else if(answer_cnt==5)
		   printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n     ■■■■\n",push);
	   else if(answer_cnt==6)
		   printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n     ■■■■\n       ■■\n",push);
       printStack();


         printf("다음 문제입니다.\n\n");
      }
      else
      {
         printf("틀렸습니다.\n\n");
       printf("얻은모양\n");
	   if(answer_cnt==1)
		   printf(" Stack is Empty!!\n",pop);
	   else if(answer_cnt==1,answer_cnt==2)
		   printf("  ■       ■\n",pop);
	    else if(answer_cnt==1,answer_cnt==2,answer_cnt==3)
		   printf("  ■       ■\n■■■   ■■■\n",pop);
	   else if(answer_cnt==1,answer_cnt==2,answer_cnt==3,answer_cnt==4)
		   printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n",pop);
		else if(answer_cnt==1,answer_cnt==2,answer_cnt==3,answer_cnt==4,answer_cnt==5)
		   printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n",pop);
	   else if(answer_cnt==1,answer_cnt==2,answer_cnt==3,answer_cnt==4,answer_cnt==5,answer_cnt==6)
		   printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n     ■■■■\n",pop);
		else if(answer_cnt==1,answer_cnt==2,answer_cnt==3,answer_cnt==4,answer_cnt==5,answer_cnt==6)
		   printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n     ■■■■\n       ■■\n",pop);
         answer_cnt--;
       pop();
       printStack();
      }
      if(answer_cnt == 6)
      {
         printf("이기셨습니다.\a\n\n");
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
   
   char korea [][100] = {"한규동","박선희","오수빈","이승재","김채원","김성공","한광희","김애경","한서현","한규옥","윤여환","박인범","신병오","이선경",
      "박병휘","호랑이","다람쥐","청솔모","뱀","여우","곰","쥐","토끼","치타","독수리","참새","고양이","햄동아리","산융",
      "가방","노트북","의자","책상","통신"};

   char korea2 [][100]={"에미야 바람이 차다","에미야 국이 짜다", "에미야 남편은 일하는데..","에미야 불좀때라.",
   "에미야!!!","에미야 용돈좀", "에미야 커피!", "사랑해용 껄껄"};

   char input[][100] = {""};
   //printf("s\n", strlen(&korea[0][100]));

   printf("외국인을 위한 한글 타자 연습 게임 프로그램입니다.\n");
   printf("초급과 중급이 있으며 초급을 통과하면 중급 라운드를 시작합니다.\n");
   printf("초급 라운드를 시작합니다. 6개를 맞추시면 통과합니다.\n");
   for( i = 0 ; i < 100 ; i++)
   {

      srand(time(NULL));
      num = rand()%34;

      //printf("%d\n", num);

      printf("문제 : %s\n", korea[num]);
      printf("입력 : ");
      scanf("%s",&input[0]);
     fflush(stdin);
      reg = strcmp(input[0], korea[num]);
   
      if(reg==0)
      {
         printf("맞습니다.\n\n");

         push('0');
         printStack();

         printf("다음 문제입니다.\n\n");
          
      }
      else
      {
         printf("틀렸습니다.\n\n");

         pop();
         printStack();
       printf("다음 문제입니다.\n\n");
         printf("틀렸습니다.\n\n");
         
      }

     count=strlen(stack);
    // printf("\n%d\n",count);

      if(count == 6)
      {   
         printf("초급 라운드 통과 축하드립니다.\n\n");
       break;
     }
   }


       printf("중급 라운드를 시작합니다. 6개를 맞추시면 통과입니다.\n");
      for( i = 0 ; i < 100 ; i++)
        {
       printf("문제 : %s\n",korea2 [num]);//코리아2 왜 출력안되지
         printf("입력 : ");
         scanf("%s",&input[0]);
       fflush(stdin);

         reg = strcmp(input[0], korea2[num]);//num잘못된듯
   
         if(reg==0)
         {
          printf("맞습니다.\n\n");
          push('0');
          printStack();

          printf("다음 문제입니다.\n\n");
          
      }
      else
      {
          printf("틀렸습니다.\n\n");
        pop();
          printStack();

        printf("다음 문제입니다.\n\n");
         
      }

     count=strlen(stack);
     printf("\n%d\n",count);
      if(count == 12)
      {   
         printf("중급 라운드 통과 축하드립니다.\n 당신도 이제 한국어 고수!\n");
         exit(0);
      }
      if(count==0)
         printf("실패 초급자이십니다.\n");
         
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
   char korea [][100] = {"한규동","박선희","오수빈","이승재","김채원","김성공","한광희","김애경","한서현","한규옥","윤여환","박인범","신병오","이선경",
      "박병휘","호랑이","다람쥐","청솔모","뱀","여우","곰","쥐","토끼","치타","독수리","참새","고양이","햄동아리","산융",
      "가방","노트북","의자","책상","통신"};
   char input[][100] = {""};
   

   printf("한글 타자 프로그램입니다.\n\n\a");
   for( i = 0 ; i < 100 ; i++)
   {

      srand(time(NULL));
      num = rand()%34;

      

      printf("문제 : %s\n", korea[num]);
      printf("입력 : ");
      scanf("%s",&input[0]);

      reg = strcmp(input[0], korea[num]);
   
      if(reg==0)
      {
         printf("맞습니다.\n\n");
		answer_cnt++;
     //  answer_cnt=strlen(stack);
	 //  push('0');
       printf("얻은 모양\n");
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
         printf("  ■       ■\n");
      else if(answer_cnt==1,answer_cnt==2)
         printf("  ■       ■\n■■■   ■■■\n");
      else if(answer_cnt==3)
         printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n");
      else if(answer_cnt==4)
         printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n");
      else if(answer_cnt==5)
         printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n     ■■■■\n");
      else if(answer_cnt==6)
         printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n     ■■■■\n       ■■\n");
       printStack();


         printf("다음 문제입니다.\n\n");
      }
      else
      {
         printf("틀렸습니다.\n\n");
       printf("얻은모양\n");
      if(answer_cnt==1)
         printf(" Stack is Empty!!\n");
      else if(answer_cnt==1,answer_cnt==2)
         printf("  ■       ■\n");
       else if(answer_cnt==1,answer_cnt==2,answer_cnt==3)
         printf("  ■       ■\n■■■   ■■■\n");
      else if(answer_cnt==1,answer_cnt==2,answer_cnt==3,answer_cnt==4)
         printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n");
      else if(answer_cnt==1,answer_cnt==2,answer_cnt==3,answer_cnt==4,answer_cnt==5)
         printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n");
      else if(answer_cnt==1,answer_cnt==2,answer_cnt==3,answer_cnt==4,answer_cnt==5,answer_cnt==6)
         printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n     ■■■■\n");
      else if(answer_cnt==1,answer_cnt==2,answer_cnt==3,answer_cnt==4,answer_cnt==5,answer_cnt==6)
         printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n     ■■■■\n       ■■\n");
         answer_cnt--;
       pop();
       printStack();
      }
      if(top == 5)
      {
         printf("이기셨습니다.\a\n\n");
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
#define STACK_SIZE 7//문자형 스택이니까 NULL까지 고려하여 7로 선언




typedef char element; //char 문자형을 스택에 저장할꺼니까
element stack[STACK_SIZE];
int top = -1;
int bottom =0;

//**************push함수***************************************************
void push(element item)
{
   if(top >= STACK_SIZE-1){
      printf("\n\n Stack is FULL ! \n");//꽉 찾다를 출력
      return;//종료
   }
   else stack[++top]=item;//아니면 탑 값을 1증가시키고 데이터를 넣는다.
}
//***************pop함수***************************************************
element pop()
{
   if(top==-1 ) {
      printf("\n\n 스택이 비었습니다. 빵점입니다. \n");
      return 0;
   }
   else return stack[top--];//아니면 현재 탑의 스택값 리턴한 후!  top--로 탑이 내려간다.
}
//****************스택안에 들어있는 데이터 출력용 함수*********************
void printStack()
{
   int i;
   for(i=0; i<=top; i++)//현재 탑이 가리키는 데이터까지만 출력
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
   char korea [][100] = {"한규동","박선희","오수빈","이승재","김채원","김성공","한광희","김애경","한서현","한규옥","윤여환","박인범","신병오","이선경",
      "박병휘","호랑이","다람쥐","청솔모","뱀","여우","곰","쥐","토끼","치타","독수리","참새","고양이","햄동아리","산융",
      "가방","노트북","의자","책상","통신"};
   char input[][100] = {""};

   printf("한글 타자 프로그램입니다.\n\a");//안내
   printf("맞으면 0이 1개씩 추가되며 6문제를 맞출 시 통과입니다.\n");//안내
   for( i = 0 ; i < 100 ; i++)//for문 돌리기 여유있게 100번
   {


      srand(time(NULL));//랜덤한 숫자를 넣어주기 위해
      num = rand()%34;//랜덤한 숫자를 넣어주기 위해

      

      printf("문제 : %s\n", korea[num]);
      printf("입력 : ");
      scanf("%s",&input[0]);

      reg = strcmp(input[0], korea[num]);// 문자열 비교함수
   
      if(reg==0)//맞을경우
      {
       printf("맞습니다.\n\n");//맞을 경우
      push('0');//맞을 경우 문자 '0'입력

      answer_cnt=0; //계속 0으로 초기화 해줘야함 안그러면 전꺼에서 숫자를 갯수를 더함
      
      for(i=0; i<=top; i++)
       answer_cnt++;//맞은 거 갯수세기 현재 top까지
       
      printf("현재 맞은 갯수는 :");
      printStack();//먼저 push로 추가했으니 이번에 맞은 것까지 나옴
      printf("\n얻은 모양\n");
      if(answer_cnt==0)//스택안에 문자가 0개 일 때 
         printf(" 현재 빵점이라 얻은 모양이 없습니다. \n");
      else if(answer_cnt==1) //1개일 때
         printf("  ■       ■\n");
      else if(answer_cnt==2) //2개 일때
         printf("  ■       ■\n■■■   ■■■\n");
      else if(answer_cnt==3)
         printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n");
      else if(answer_cnt==4)
         printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n");
      else if(answer_cnt==5)
         printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n     ■■■■\n");
      else if(answer_cnt==6)
         {
          printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n     ■■■■\n       ■■\n");
          printf("이기셨습니다.\a\n\n");
         break;//i가 100이니까 6개가 되면 for문 탈출하도록 브레이크 선언
        }
       printf("다음 문제입니다.\n\n");
      }
      else//틀렸을 겨우
      {
       printf("틀렸습니다.\n\n");
      pop();//먼저빼고
      
      answer_cnt2=0; //계속 0으로 초기화 해줘야함 안그러면 전꺼에서 숫자를 갯수를 더함
      for(i=0; i<=top; i++)
       answer_cnt2++;//2는 틀렸을 때 카운터 용으로 팝하고 현재 스택에 저장된 것까지 수를 셈
      
      
      printf("현재 맞은 갯수는 :");
      printStack();
       printf("\n얻은모양\n");
      if(answer_cnt2==0)
         printf(" 현재 빵점이라 얻은 모양이 없습니다. \n");
      else if(answer_cnt2==1)
         printf("  ■       ■\n");
       else if(answer_cnt2==2)
         printf("  ■       ■\n■■■   ■■■\n");
      else if(answer_cnt2==3)
         printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n");
      else if(answer_cnt2==4)
         printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n");
        /*5,6 없는 이유는
        6에서는 5로 내려갈 경우는 없다. 6이 되면 종료되니까 그래서 5없음
        6맞으면 끝이라 7에서 6으로 내려올 것 없음 그래서 6 없음*/

     /*   }




      if(answer_cnt == 6)//브레이크로 위의 if문에서 탈출한 후 6개 맞췄으니 탈출
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
#define STACK_SIZE 7//문자형 스택이니까 NULL까지 고려하여 7로 선언
                    //사실 NULL로 선언했으니 NULL도 세서 6으로 해도됨
                    //그러나 문자열은 NULL을 고려해주는게 옳바름으로 그냥 7로 선언


typedef char element; //char 문자형을 스택에 저장할꺼니까
element stack[STACK_SIZE];
int top = -1;
int bottom =0;

//**************push함수***************************************************
void push(element item)
{
   if(top >= STACK_SIZE-1){
      printf("\n\n Stack is FULL ! \n");//꽉 찾다를 출력
      return;//종료
   }
   else stack[++top]=item;//아니면 탑 값을 1증가시키고 데이터를 넣는다.
}
//***************pop함수***************************************************
element pop()
{
   if(top==-1 ) {
      printf("\n 스택이 비었습니다. 빵점입니다. \n");
      return 0;
   }
   else return stack[top--];//아니면 현재 탑의 스택값 리턴한 후!  top--로 탑이 내려간다.
}
//****************스택안에 들어있는 데이터 출력용 함수*********************
void printStack()
{
   int i;
   for(i=0; i<=top; i++)//현재 탑이 가리키는 데이터까지만 출력
      printf("%c", stack[i]); //"%s\n",&stack[i]
}
//*************************************************************************
int main(void)
{
   int num; //단어 배열안에 램덤으로 인덱스 값 구할때 사용
   int reg; //사용자 입력단어와 제공된 단어 비교 같으면 0 다르면 1
   int i; // for문 사용을 위해
   int answer_cnt=0; 
   int answer_cnt2=0;
   char korea [][100] = {"한규동","박선희","오수빈","이승재","김채원","김성공","한광희","김애경","한서현","한규옥","윤여환","박인범","신병오","이선경",
      "박병휘","호랑이","다람쥐","청솔모","뱀","여우","곰","쥐","토끼","치타","독수리","참새","고양이","햄동아리","산융",
      "가방","노트북","의자","책상","통신"}; //단어 배열
   char input[][100] = {""}; //사용자가 입력한 단어 저장

   printf("%4 *******한글 타자 프로그램입니다.******* \n\a");//안내
   printf("맞으면 1점씩 더해지고 문제를 틀리면 1점씩 감점되는 프로그램입니다.6점을 만들면 이깁니다.\n\n");//안내
   for( i = 0 ; i < 100 ; i++)//for문 돌리기 여유있게 100번
   {


      srand(time(NULL));//랜덤한 숫자를 넣어주기 위해
      num = rand()%35;//랜덤한 숫자를 넣어주기 위해

      

      printf("문제 : %s\n", korea[num]);
      printf("입력 : ");
      scanf("%s",&input[0]);

      reg = strcmp(input[0], korea[num]);// 문자열 비교함수
   
      if(reg==0)//맞을경우,일치할경우
      {
		  printf("맞습니다.\n\n");//맞을 경우
		  push('1');//맞을 경우 문자 '1'입력
		  answer_cnt=0; //계속 0으로 초기화 해줘야함 안그러면 전꺼에서 숫자 갯수를 더함
      
		  for(i=0; i<=top; i++)
			  answer_cnt++;//맞은 거 갯수세기 현재 top까지
       
		  printf("현재 맞은 점수는 :");
		  printStack();//먼저 push로 추가했으니 이번에 맞은 것까지 나옴
		  printf("\n\n얻은 모양\n");
		  if(answer_cnt==0)//스택안에 문자가 0개 일 때 
			  printf(" 현재 빵점이라 얻은 모양이 없습니다. \n");
		 else if(answer_cnt==1) //1개일 때
         printf("  ■       ■\n");
      else if(answer_cnt==2) //2개 일때
         printf("  ■       ■\n■■■   ■■■\n");
      else if(answer_cnt==3)
         printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n");
      else if(answer_cnt==4)
         printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n");
      else if(answer_cnt==5)
         printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n     ■■■■\n");
      else if(answer_cnt==6)
         {
          printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n     ■■■■\n       ■■\n");
          printf("\n\n이기셨습니다.\a\n\n");
         break;//i가 100이니까 6개가 되면 for문 탈출하도록 브레이크 선언
        }
       printf("\n다음 문제입니다.\n\n");
      }
      else//틀렸을 겨우
      {
       printf("틀렸습니다.\n\n");
      pop();//먼저빼고
      
      answer_cnt2=0; //계속 0으로 초기화 해줘야함 안그러면 전꺼에서 숫자를 갯수를 더함
      for(i=0; i<=top; i++)
       answer_cnt2++;//2는 틀렸을 때 카운터 용으로 팝하고 현재 스택에 저장된 것까지 수를 셈
      
      
      printf("현재 맞은 갯수는 :");
      printStack();
       printf("\n\n얻은모양\n");
      if(answer_cnt2==0)
         printf(" 현재 빵점이라 얻은 모양이 없습니다. \n");
      else if(answer_cnt2==1)
         printf("  ■       ■\n");
       else if(answer_cnt2==2)
         printf("  ■       ■\n■■■   ■■■\n");
      else if(answer_cnt2==3)
         printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n");
      else if(answer_cnt2==4)
         printf("   ■       ■\n ■■■   ■■■\n■■■■■■■■■\n  ■■■■■■■\n");
	  printf("\n다음 문제입니다.\n\n");
        /*5,6 없는 이유는
        6에서는 5로 내려갈 경우는 없다. 6이 되면 종료되니까 그래서 5없음
        6맞으면 끝이라 7에서 6으로 내려올 것 없음 그래서 6 없음*/

        }




      if(top == 5)//브레이크로 위의 if문에서 탈출한 후 0~5까지 top이 꽉차서 프로그램 종료
      {
         exit(1);
      }
   }
   return 0;
} 