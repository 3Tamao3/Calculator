#include <stdio.h>
#include <math.h>

int main(void)
{
	char oper;
	float n1, n2, res;

	printf("******************************************************\n");

    	printf(" + : Addition\n");
    	printf(" - : Subtraction\n");
    	printf(" * : Multiplication\n");
    	printf(" / : Division\n");
    	printf(" s/S : Square Root\n");
    	printf(" p/P : Power\n");
	printf(" f/F : Factorial\n");

	printf("\n");
	
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

		case 'f':
		case 'F':
			res = 1;
			printf("Enter a number: ");
			scanf("%f", &n1);
			if (n1 >= 0)
			{
				for (int i = 1; i <= n1; ++i)
				{
					res = res *= i;
				}
				printf("\nResult: %f\n", res);
			}
			else
			{
				printf("Invalid number");
			}
			break;
		
		default:
			printf("invalid operator\n");
	}
	
	printf("******************************************************\n");

	return (0);
}
