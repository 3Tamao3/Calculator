#include <stdio.h>
#include <math.h>

float	ft_fibonacci(int index);

int main(void)
{
	char oper;
	float n1, n2, res;

	printf("******************************************************\n");
	printf("Operations->\n");
    	printf(" + : Addition\n");
    	printf(" - : Subtraction\n");
    	printf(" * : Multiplication\n");
    	printf(" / : Division\n");
    	printf(" ^ : Power\n");
	printf(" ! : Factorial\n");
    	printf(" s/S : Square Root\n");
	printf(" f/F : Fibonacci\n");

	printf("\n");
	
	printf("Enter operation: ");
	scanf(" %c", &oper);

	switch(oper)
	{
		case '+':
			printf("Enter two numbers(space between): ");
			scanf("%f %f", &n1, &n2);
			res = n1 + n2;
			printf("\nResult: %.3f\n", res);
			break;

		case '-':
			printf("Enter two numbers(space between): ");
			scanf("%f %f", &n1, &n2);
			res = n1 - n2;
			printf("\nResult: %.3f\n", res);
			break;

		case '*':
			printf("Enter two numbers(space between): ");
			scanf("%f %f", &n1, &n2);
			res = n1 * n2;
			printf("\nResult: %.3f\n", res);
			break;

		case '/':
			printf("Enter two numbers(space between): ");
			scanf("%f %f", &n1, &n2);
			res = n1 / n2;
			printf("\nResult: %.3f\n", res);
			break;

		case 's':
		case 'S':
			printf("Enter a number: ");
			scanf("%f", &n1);
			if (n1 >= 0)
			{
				res = sqrt(n1);
				printf("\nResult: %.3f\n", res);
			}
			else
			{
				printf("Cannot find a square root of a negative number\n");
			}
			break;

		case '^':
			printf("Enter base and exponent(space between): ");
			scanf("%f %f", &n1, &n2);
			res = pow(n1, n2);
			printf("\nResult: %.3f\n", res);
			break;

		case '!':
			res = 1;
			printf("Enter a number: ");
			scanf("%f", &n1);
			if (n1 >= 0)
			{
				for (int i = 1; i <= n1; ++i)
				{
					res = res *= i;
				}
				printf("\nResult: %.3f\n", res);
			}
			else
			{
				printf("Invalid number");
			}
			break;

		case 'f':
		case 'F':
			printf("Enter a number");
			scanf("%f", &res);
			printf("\nResult: %.3f\n", ft_fibonacci(res));
			
			break;
		
		default:
			printf("invalid operator\n");
	}
	
	printf("******************************************************\n");

	return (0);
}

float	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1 || index == 2)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
