#include <stdio.h>
#include <math.h>

int main(void)
{
	char oper;
	float n1, n2, res;

	printf("******************************************************\n");
	
	printf("s/S = square root, p/P = power\n");
	printf("Enter operation (+, -, *, /, s or S, p or P): ");
	scanf(" %c", &oper);

	switch(oper)
	{
		case '+':
			printf("Enter two numbers(space between): ");
			scanf("%f %f", &n1, &n2);
			res = n1 + n2;
			printf("\nResult: %f\n", res);
			break;
		case '-':
			printf("Enter two numbers(space between): ");
			scanf("%f %f", &n1, &n2);
			res = n1 - n2;
			printf("\nResult: %f\n", res);
			break;
		case '*':
			printf("Enter two numbers(space between): ");
			scanf("%f %f", &n1, &n2);
			res = n1 * n2;
			printf("\nResult: %f\n", res);
			break;
		case '/':
			printf("Enter two numbers(space between): ");
			scanf("%f %f", &n1, &n2);
			res = n1 / n2;
			printf("\nResult: %f\n", res);
			break;
		case 's':
		case 'S':
			printf("Enter a number: ");
			scanf("%f", &n1);
			if (n1 >= 0)
			{
				res = sqrt(n1);
				printf("\nResult: %f\n", res);
			}
			else
			{
				printf("Cannot find a square root of a negative number\n");
			}
			break;
		case 'p':
		case 'P':
			printf("Enter base and exponent(space between): ");
			scanf("%f %f", &n1, &n2);
			res = pow(n1, n2);
			printf("\nResult: %f\n", res);
			break;
		
		default:
			printf("invalid operator\n");
	}
	
	printf("******************************************************\n");

	return (0);
}
