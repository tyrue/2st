#include <stdio.h>
#include <stdlib.h>
void num1(void);
void num2(void);
void num3(int num,int b);
int main(void)
{
	int num,b,c;
	while(1)
	{
		printf("\n원하는 메뉴를 누르세요\n\n");
		printf("(1)자기소개\n(2)시 출력\n(3)구구단 출력\n(4)프로그램 종료\n");
		scanf("%d",&num);
		if(num==1)
			num1();
		else if(num==2)
			num2();
		else if(num==3)
		{
			while(1)
			{
				printf("원하는 메뉴를 누르세요.\n");
				printf("(1) 구구단 전체 출력\n(2) 원하는 구구단 출력\n");
				scanf("%d",&b);
				if(b==1)
				{
					num3(0,b);
					break;
				}
				if(b==2)
				{
					printf("원하는 구구단을 입력하세요\n");
					scanf("%d",&c);
					num3(c,b);
					break;
				}
				if(b<1||b>2)
				{
					printf("다시 입력하세요\n\n");
				}
			}
		}
		else if(num==4)
		{
				break;
		}
		else if(num<1||num>4)
		{
			printf("다시 입력하세요\n");
		}
	}
	system("pause");
}
void num1(void)
{
	printf("안녕하세요? 제 이름은 김두현입니다.\n");
	printf("저는 대전 서구 가수원동에 살고 있습니다.\n");
	printf("앞으로 c++프로그램을 열심히 배우겠습니다. 감사합니다\n");
}

void num2(void)
{
	printf("\t- 풀꽃 -\n\t\t나태주\n\n 자세히 보아야 예쁘다\n 오래 보아야 사랑스럽다\n 너도 그렇다\n\n");
}

void num3(int num,int b)
{
	int i,j;
	if(b==1)
	{
		for(i=1;i<10;i++)
		{
			printf("- %d단 출력 -\n\n",i);
			for(j=1;j<10;j++)
			{
				printf("%d X %d = %d\n",i,j,i*j);
			}
			printf("\n");
		}
	}
	if(b==2)
	{
		printf("- %d단 출력 -\n\n",num);	
		for(i=1;i<10;i++)
		{
			printf("%d X %d = %d\n",num,i,num*i);
		}
	}	
}