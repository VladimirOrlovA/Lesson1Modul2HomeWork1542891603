#include<stdio.h>	// ���������� ���������� ������ - ������� ������� ��� ������ � �������
#include<iostream>	// o������� �����/������ �����������
#include<cmath>		// ������ � �������� �������
#include<locale.h>	// ���������� ���������
//using namespace std	// �������� �����������, ��� ����� ������������ ������ �������, ������� �������� ������ ����������� ����������

int main()			// ��� ������ �������� �����������, ��� ���� ������� � ������ main

{
	setlocale(LC_ALL, ""); //  ���������� ������������ ������ ������ ����������

/// Task 1.

	/*int a, d, q;
	float r;

	a = 5;
	d = abs(2);	// ����� �������� �� ������
	q = a / d;
	r = a % d;  // �������� ��� ������� ��������������� r ����� �� ����� ���������� 1, ������ 1,0000
	printf("\n������� q = %d , ������� r = %f \n", q,r); */

/// Task 2. var2 - ok ����������� ���������� � - && � ���� ��� ������� ���� ���������

		/*int x, y, count=1;

		do
		{
			count++;

			printf("Enter x = ");
			scanf_s("%d", &x);
			printf("Enter y = ");
			scanf_s("%d", &y);

			if (x == 0 && y == 0)		// ���������� �������� "�" ��������� &&
			{
				printf("x & y = 0 \n\n");
			}

			if (y == 0 && x != 0)		// x != 0 - �������������� ��� ������ �������� x �� ����� 0
			{
				printf("12/x = %d \n\n", 12 / x);
			}


			if (x == 0 && y != 0)
			{
				printf("12/y = %d \n\n", 12 / y);
			}

			if (x != 0 && y != 0)
			{
				printf("144 / (x * y) = %d \n\n", 144 / (x * y));
			}
		} while (count < 5); */

/// Task 2. ������ ��������������, �� �� ����������� ��������� - ���������� ������� "�". �������� ������� var2

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


/// Task 3.

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

///// Task 4. var2 - ok ����������� ���������� � - && � ���� ��� ������� ���� ���������

/*int x, y, count = 1;
do
{
count++;
printf("Enter x = ");
scanf_s("%d", &x);
printf("Enter y = ");
scanf_s("%d", &y);

if (x > 0 && y > 0) // �������� ������� ��� ��������� �������� => 0
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
printf("�� ����� �������� <=0, ���������� ��� ��� \n\n");
}

} while (count < 5); */

/// Task 4.

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
printf("�� ����� �������� <=0, ���������� ��� ��� \n\n");
}
}
else
{
printf("�� ����� �������� <=0, ���������� ��� ��� \n\n");
}
} while (c < 5); */

/// Task 5. var2 - ok ����������� ���������� � - && � ���� ��� ������� ���� ���������

/*int x, y, z, k, count=1;
double m,n,p;

do
{
count++;

printf("Enter x = ");
scanf_s("%d", &x);
printf("Enter y = ");
scanf_s("%d", &y);
printf("Enter z = ");
scanf_s("%d", &z);

// �������� �������� x,y,z > 0

if (x > 0 && y > 0 && z > 0)
{

// ���������� �� ����
m = (double)(x + y + z) / 3;
printf("\n������� �������� ��������� ����� m = %f \n", m);


// ���������� ������� �������� �� x,y,z � ����������� ��� k
if (x < y && x < z)
{
printf("\nx=%d ������� �� x,y,z ����� k=%d\n", x, x);
k = x;
}

if (y < x && y < z)
{
printf("\ny=%d ������� �� x,y,z ����� k=%d\n", y, y);
k = y;
}

if (z < x && z < y)
{
printf("\nz=%d ������� �� x,y,z ����� k=%d\n", z, z);
k = z;
}

// ���������� ������� �������� �� x,y,z � ����������� ��� n
if (x > y && x > z)
{
printf("\nx=%d , ������� �� x,y,z ����� n=%d\n", x, x);
n = x;
}

if (y > x && y > z)
{
printf("\ny=%d ������� �� x,y,z ����� n=%d\n", y, y);
n = y;
}

if (z > x && z > y)
{
printf("\nz=%d ������� �� x,y,z ����� n=%d\n", z, z);
n = z;
}

p = (double)m *(double)n / k;
printf("\nm *n / k = %f \n\n\n", p);
}
else
{
printf("�� ����� �������� <=0, ���������� ��� ��� \n\n");
}

} while (count < 5);*/

/// Task 5.

/*int x, y, z, k;
double m,n,p;

printf("Enter x = ");
scanf_s("%d", &x);
printf("Enter y = ");
scanf_s("%d", &y);
printf("Enter z = ");
scanf_s("%d", &z);

// �������� �������� x,y,z > 0

								if (x > 0)
								{
									if (y > 0)
									{
										if (z > 0)
										{

											// ���������� �� ����
											m = (double)(x + y + z) / 3;
											printf("\n������� �������� ��������� ����� m = %f \n", m);


											// ���������� ������� �������� �� x,y,z � ����������� ��� k
											if (x < y)
											{
												if (x < z)
												{
													printf("\nx=%d ������� �� x,y,z ����� k=%d\n", x, x);
													k = x;
												}
											}

											if (y < x)
											{
												if (y < z)
												{
													printf("\ny=%d ������� �� x,y,z ����� k=%d\n", y, y);
													k = y;
												}
											}

											if (z < x)
											{
												if (z < y)
												{
													printf("\nz=%d ������� �� x,y,z ����� k=%d\n", z, z);
													k = z;
												}
											}

											// ���������� ������� �������� �� x,y,z � ����������� ��� n
											if (x > y)
											{
												if (x > z)
												{
													printf("\nx=%d , ������� �� x,y,z ����� n=%d\n", x, x);
													n = x;
												}
											}

											if (y > x)
											{
												if (y > z)
												{
													printf("\ny=%d ������� �� x,y,z ����� n=%d\n", y, y);
													n = y;
												}
											}

											if (z > x)
											{
												if (z > y)
												{
													printf("\nz=%d ������� �� x,y,z ����� n=%d\n", z, z);
													n = z;
												}
											}

											p = (double)m *(double)n / k;
											printf("\nm *n / k = %f \n\n\n", p);
										}
										else
										{
											printf("�� ����� �������� <=0, ���������� ��� ��� \n\n");
										}
									}
									else
									{
										printf("�� ����� �������� <=0, ���������� ��� ��� \n\n");
									}
								}
								else
								{
									printf("�� ����� �������� <=0, ���������� ��� ��� \n\n");
								}*/


/// Task 6. var 2 - ok ����������� ���������� � - && � ���� ��� ������� ���� ���������

								/*int a, b, c, count = 1;

								do
								{
									count++;

									printf("Enter a = ");
									scanf_s("%d", &a);
									printf("Enter b = ");
									scanf_s("%d", &b);
									printf("Enter c = ");
									scanf_s("%d", &c);


									if (a < b && a < c)
									{
										printf("\na=%d ���������� �� ��������� �������� a,b,c\n\n\n", a);
									}
									if (a > b && c > b)
									{
										printf("\nb=%d ���������� �� ��������� �������� a,b,c\n\n\n", b);
									}
									if (a > c && b > c)
									{
										printf("\nc=%d ���������� �� ��������� �������� a,b,c\n\n\n", c);
									}
								} while (count < 4);*/

								/// Task 6.

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
												printf("\na=%d ���������� �� ��������� �������� a,b,c\n\n\n", a);
											}
										}

										if (b < a)
										{
											if (b < c)
											{
												printf("\nb=%d ���������� �� ��������� �������� a,b,c\n\n\n", b);
											}
										}

										if (c < a)
										{
											if (c < b)
											{
												printf("\nc=%d ���������� �� ��������� �������� a,b,c\n\n\n", c);
											}
										}
									} while (count < 4);*/

/// Task 7. var 2 - ok ����������� ���������� � - && � ���� ��� ������� ���� ��������� 

										/*int a, b, c, count = 1;

										do
										{
										count++;

										printf("Enter a = ");
										scanf_s("%d", &a);
										printf("Enter b = ");
										scanf_s("%d", &b);
										printf("Enter c = ");
										scanf_s("%d", &c);


										if (a > b && a > c)
										{
										printf("\na=%d ���������� �� ��������� �������� a,b,c\n\n\n", a);
										}

										if (b > a && b > c)
										{
										printf("\nb=%d ���������� �� ��������� �������� a,b,c\n\n\n", b);
										}

										if (c > a && c > b)
										{
										printf("\nc=%d ���������� �� ��������� �������� a,b,c\n\n\n", c);
										}

										} while (count < 4); */

										/// Task 7. 

										/* int a, b, c, count = 1;

										do
										{
											count++;

											printf("Enter a = ");
											scanf_s("%d", &a);
											printf("Enter b = ");
											scanf_s("%d", &b);
											printf("Enter c = ");
											scanf_s("%d", &c);


if (a > b)
{
if (a > c)
{
printf("\na=%d ���������� �� ��������� �������� a,b,c\n\n\n", a);
}
}

if (b > a)
{
if (b > c)
{
printf("\nb=%d ���������� �� ��������� �������� a,b,c\n\n\n", b);
}
}

if (c > a)
{
if (c > b)
{
printf("\nc=%d ���������� �� ��������� �������� a,b,c\n\n\n", c);
}
}
} while (count < 4); */

/// Task 8.

/*int x = 2, y = 2, z = 4;

if (pow(x, 2) + pow(y, 2) == pow(z, 2))
{ printf("true\n"); }
else { printf("false\n"); }*/

/// Task 9.

/*int x=2, y=2;

if (x%y == 0 && y%x == 0)
{	printf("true\n");}
else
{	printf("false\n");} */


/// Task 10.

/*		int x = 1, y = 5, z = 7;

		if (x > 0 && y > 0 && z > 0) // ��������� ��� �������� �� ����� 0
		{
			{
				if (x > y && x > z)
				{
					if (x < y + z) { printf(" x < y + z ������ ������� x, y, z ����� ���� ��������� ������������\n\n"); }
					else { printf("false\n\n"); }
				}
			}


			if (y > x && y > z)
			{
				if (y < x + z) { printf(" y < x + z ������ �������  x, y, z ����� ���� ��������� ������������\n\n"); }
				else { printf("false\n\n"); }
			}


			if (z > x && z > y)
			{
				if (z < x + y) { printf("z < x + y ������ ������� x, y, z ����� ���� ��������� ������������\n\n"); }
				else { printf("false\n\n"); }
			}
			
		}
		else { printf("���� �� ��������� �������� x, y, z = 0 \n\n"); } */

/// How to use bool i don't know. Please 

system("pause");
}