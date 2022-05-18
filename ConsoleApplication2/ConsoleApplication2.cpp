#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ChangeNumbers(int *p1, int *p2)
{
	int temp = *p1; //swap하는 작업.
	*p1 = *p2;
	*p2 = temp;

}

int main(void)
{
	int num1;
	int num2;

	printf("숫자1:");
	scanf("%d", &num1);
	printf("숫자2:");
	scanf("%d", &num2);

	printf("바꾸기 전..\n 숫자1:%d\n,숫자2:%d\n", num1, num2);
	ChangeNumbers(&num1, &num2);
	printf("바꾼 후..\n 숫자1:%d\n숫자2:%d\n", num1, num2);
	
	return 0;

	/*int icecream = 1235;
	int *ic = &icecream;

	printf("아이스크림 값: %d\n", icecream);
	printf("아이스크림 주소: %d\n", &icecream);
	printf("ic가 가르키고 있는 아이스크림의 주소: %d\n", ic);
	printf("ic가 가르키고 있는 아이스크림의 실제 가격: %d\n\n", *ic);
	
	return 0; */
}