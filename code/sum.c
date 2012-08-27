#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
	return(a+b);
}

int main()
{
	int num1, num2;
	char temp[5];

	printf("Enter number 1: ");
	scanf("%s",temp);
	num1 = atoi(temp);

	printf("Enter number 2: ");
	scanf("%s",temp);
	num2 = atoi(temp);

	printf("The sum of those two numbers is %d\n", add(num1,num2));
	return(0);
}
