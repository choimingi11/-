#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void text(char letter[40]);
int many(int Apple, int Banana, int Orange);

int main()
{
	char car[40];

	printf("문자를 입력하세요:");
	scanf("%s", car);

	text(car);

	int Apple;
	int Banana;
	int Orange;

	printf("\n정수를 입력하시오:");
	scanf("%d %d %d", &Apple, &Banana, &Orange);

	int fruit;
	fruit = many(Apple, Banana, Orange);
	
	printf("%d", fruit);

	return 0;
}

void text(char letter[40])
{
	int num = 0;

	for (int i = 0; letter[i]!='\0'; i++)
	{
		num += 1;
	}
	printf("%d", num);

}


int many(int Apple, int Banana, int Orange)
{
	if (Apple > Banana && Apple > Orange)
	{
		return Apple;
	}
	else if (Banana > Apple && Banana > Orange)
	{
		return Banana;
	}
	else
	{
		return Orange;
	}
}