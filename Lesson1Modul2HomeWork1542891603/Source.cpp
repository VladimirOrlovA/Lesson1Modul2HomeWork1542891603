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
			else
			{
				printf("Вы ввели значение <=0, попробуйте еще раз \n\n");
			}
		}
		else
		{
			printf("Вы ввели значение <=0, попробуйте еще раз \n\n");
		}
	} while (c < 5); */

	// Task 5.

	/*int x, y, z, k;
	double m,n,p;

	printf("Enter x = ");
	scanf_s("%d", &x);
	printf("Enter y = ");
	scanf_s("%d", &y);
	printf("Enter z = ");
	scanf_s("%d", &z);

	// проверка значений x,y,z > 0 

	if (x > 0)
	{
		if (y > 0)
		{
			if (z > 0)
			{

				// определяем ср ариф
				m = (double)(x + y + z) / 3;
				printf("\nсреднее значение введенных чисел m = %f \n", m);


				// определяем меньшее значение из x,y,z и присваиваем его k 
				if (x < y)
				{
					if (x < z)
					{
						printf("\nx=%d меньшее из x,y,z тогда k=%d\n", x, x);
						k = x;
					}
				}

				if (y < x)
				{
					if (y < z)
					{
						printf("\ny=%d меньшее из x,y,z тогда k=%d\n", y, y);
						k = y;
					}
				}

				if (z < x)
				{
					if (z < y)
					{
						printf("\nz=%d меньшее из x,y,z тогда k=%d\n", z, z);
						k = z;
					}
				}

				// определяем большее значение из x,y,z и присваиваем его n 
				if (x > y)
				{
					if (x > z)
					{
						printf("\nx=%d , большее из x,y,z тогда n=%d\n", x, x);
						n = x;
					}
				}

				if (y > x)
				{
					if (y > z)
					{
						printf("\ny=%d большее из x,y,z тогда n=%d\n", y, y);
						n = y;
					}
				}

				if (z > x)
				{
					if (z > y)
					{
						printf("\nz=%d большее из x,y,z тогда n=%d\n", z, z);
						n = z;
					}
				}

				p = (double)m *(double)n / k;
				printf("\nm *n / k = %f \n\n\n", p);
			}
			else
			{
				printf("Вы ввели значения <=0, попробуйте еще раз \n\n");
			}
		}
		else
		{
			printf("Вы ввели значения <=0, попробуйте еще раз \n\n");
		}
	}
	else
	{
		printf("Вы ввели значения <=0, попробуйте еще раз \n\n");
	}*/

	// Task 6.


	/*int a, b, c, count=1;

	do
	{
		count++;

	printf("Enter a = ");
	scanf_s("%d", &a);
	printf("Enter b = ");
	scanf_s("%d", &b);
	printf("Enter c = ");
	scanf_s("%d", &c);

	
		if (a < b)
		{
			if (a < c)
			{
				printf("\na=%d меньшее из введенных значений a,b,c\n\n\n", a);
			}
		}

		if (b < a)
		{
			if (b < c)
			{
				printf("\nb=%d меньшее из введенных значений a,b,c\n\n\n", b);
			}
		}

		if (c < a)
		{
			if (c < b)
			{
				printf("\nc=%d меньшее из введенных значений a,b,c\n\n\n", c);
			}
		}
	} while (count < 4);*/

	// Task 7.


	system("pause");
}