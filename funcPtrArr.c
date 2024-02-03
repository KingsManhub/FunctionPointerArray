/** I want to create four functions. I want the user to enter the values and then pick
 * as instructed the type of function to use. I am going to use a function pointer to
 * point to each function to be used. I want the program to ask you if you still wish to
 * continue or not by entering a value.
 */
#include <stdio.h>
#include <stdlib.h>


int add(int, int);
int sub(int, int);
int mul(int, int);

int main(void)
{
	int cont;
	int n1, n2;
	int choice;


	int (*func_ptr[3])(int, int) = {add, sub, mul};
	do
	{
		printf("Enter value 1: ");
		scanf("%d", &n1);
		printf("Enter value 2: ");
		scanf("%d", &n2);
		printf("\nEnter 0 to add, 1 to subtract or 2 to multiply: ");
		scanf("%d", &choice);
		switch (choice)
		{
			case 0:
				printf("%d + %d = %d\n", n1, n2, func_ptr[0](n1, n2));
				break;
			case 1:
				printf("%d - %d = %d\n", n1, n2, func_ptr[1](n1, n2));
				break;
			case 2:
				printf("%d * %d = %d\n", n1, n2, func_ptr[2](n1, n2));
				break;
			default:
				printf("\nEnter the correct value as instructed\n");
				break;
		}
		printf("\nDo you wish to continue? Enter 1 for yes and 0 for no\n");
		scanf("%d", &cont);
	}while (cont == 1);
}

int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mul(int a, int b) { return (a * b); }
