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
		printf("\n���ϴ� �޴��� ��������\n\n");
		printf("(1)�ڱ�Ұ�\n(2)�� ���\n(3)������ ���\n(4)���α׷� ����\n");
		scanf("%d",&num);
		if(num==1)
			num1();
		else if(num==2)
			num2();
		else if(num==3)
		{
			while(1)
			{
				printf("���ϴ� �޴��� ��������.\n");
				printf("(1) ������ ��ü ���\n(2) ���ϴ� ������ ���\n");
				scanf("%d",&b);
				if(b==1)
				{
					num3(0,b);
					break;
				}
				if(b==2)
				{
					printf("���ϴ� �������� �Է��ϼ���\n");
					scanf("%d",&c);
					num3(c,b);
					break;
				}
				if(b<1||b>2)
				{
					printf("�ٽ� �Է��ϼ���\n\n");
				}
			}
		}
		else if(num==4)
		{
				break;
		}
		else if(num<1||num>4)
		{
			printf("�ٽ� �Է��ϼ���\n");
		}
	}
	system("pause");
}
void num1(void)
{
	printf("�ȳ��ϼ���? �� �̸��� ������Դϴ�.\n");
	printf("���� ���� ���� ���������� ��� �ֽ��ϴ�.\n");
	printf("������ c++���α׷��� ������ ���ڽ��ϴ�. �����մϴ�\n");
}

void num2(void)
{
	printf("\t- Ǯ�� -\n\t\t������\n\n �ڼ��� ���ƾ� ���ڴ�\n ���� ���ƾ� ���������\n �ʵ� �׷���\n\n");
}

void num3(int num,int b)
{
	int i,j;
	if(b==1)
	{
		for(i=1;i<10;i++)
		{
			printf("- %d�� ��� -\n\n",i);
			for(j=1;j<10;j++)
			{
				printf("%d X %d = %d\n",i,j,i*j);
			}
			printf("\n");
		}
	}
	if(b==2)
	{
		printf("- %d�� ��� -\n\n",num);	
		for(i=1;i<10;i++)
		{
			printf("%d X %d = %d\n",num,i,num*i);
		}
	}	
}