#include<stdio.h>
#include<iostream>
#include<cmath>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "");

	// Task 1.

	/*int a, d, q;
	float r;

	a = 5;
	d = abs(2);
	q = a / d;
	r = a % d;  // подумать как сделать переопределение r чтобы на экран выводилось 1, вместо 1,0000
	printf("\nЧастное q = %d , остаток r = %f \n", q,r); */

	// Task 2.

	/*int x, y;
	printf("Enter x = ");
	scanf_s("%d", &x);
	printf("Enter y = ");
	scanf_s("%d", &y);

	if (x == 0)
	{
	if (y == 0)
	{
	printf("x & y = 0 \n");
	}
	}

	if (y==0)
	{
	if (x!=0)
	{
	printf("12/x = %d \n", 12/x);
	}
	}

	if (x == 0)
	{
	if (y != 0)
	{
	printf("12/y = %d \n", 12 / y);
	}
	}

	if (x != 0)
	{
	if (y != 0)
	{
	printf("144 / (x * y) = %d \n", 144 / (x * y));
	}
	} */

	// Task 3.

	/*int x, y;
	printf("Enter x = ");
	scanf_s("%d", &x);
	printf("Enter y = ", x);
	scanf_s("%d", &y);

	if (x > y)
	{
	printf("x>y, x-y=%d \n", x - y);
	}
	else
	{
	printf("y-x=%d \n", y-x);
	} */

	// Task 4.

	/*int x, y, c = 1;
	do
	{
		c++;
		printf("Enter x = ");
		scanf_s("%d", &x);
		printf("Enter y = ");
		scanf_s("%d", &y);

		if (x > 0)
		{
			if (y > 0)
			{
				if (x > y)
				{
					printf("x>y, x/y=%f \n\n", (double)x / (double)y);
				}
				else
				{
					printf("y/x=%f \n\n", (double)y / (double)x);
				}
			}
		}
		else
		{
			printf("Вы ввели значения <=0, попробуйте еще раз \n\n");
		}
	} while (c < 5);*/

	// Task 5.

	int x, y, z, m, n, k;

	printf("Enter x = ");
	scanf_s("%d", &x);
	printf("Enter y = ");
	scanf_s("%d", &y);
	printf("Enter z = ");
	scanf_s("%d", &z);

	m = (double)(x + y + z) / (double)3;
	
	if (x < y)
	{
		if(x<z)
		{
			printf("x наименьшее из x,y,z", x);
		}
	}

	system("pause");
}