#include<stdio.h>	// ���������� ���������� ������ - ������� ������� ��� ������ � �������
#include<iostream>	// o������� �����/������ �����������
#include<cmath>		// ������ � �������� �������
#include<locale.h>	// ���������� ���������
#include<time.h>	// ��� ������������� ���������� ��������� �����

//using namespace std	// �������� �����������, ��� ����� ������������ ������ �������, ������� �������� ������ ����������� ����������

	void Task1 ()
	{
		int a, d;
		
	start:

		printf("\n������� ����� ������������� ����� \"a\" : ");
		scanf_s("%d", &a);

		printf("������� ����� ������������� ����� \"d\" : ");
		scanf_s("%d", &d);

		if (a > 0 && d > 0)
		{
			printf("\n������� q = %d , ������� r = %d \n", a / d, a % d);
		}
		else { printf("\n�� ����� ���� �� ����� � ������������� ���������. ���������� ��� ���... \n\n"); goto start; }
	}

	void Task2 () // var2 - ok ����������� ���������� � - && � ���� ��� ������� ���� ���������
	{
		int x, y, count=1;

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
		} while (count < 5);
	}



/*/// Task 2. ������ ��������������, �� �� ����������� ��������� - ���������� ������� "�". �������� ������� var2
int x, y;
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


	void Task3()
	{
		int x, y;
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
			printf("y-x=%d \n", y - x);
		}
	}

	void Task4() // var2 - ok ����������� ���������� � - && � ���� ��� ������� ���� ���������
	{
		int x, y, count = 1;
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

		} while (count < 5);
	}

	/* // Task4 ()
	{

		int x, y, c = 1;
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
		} while (c < 5);
	}

	void Task5 () // var2 - ok ����������� ���������� � - && � ���� ��� ������� ���� ���������
	{
		int x, y, z, k, count = 1;
		double m, n, p;

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

		} while (count < 5);
	} */

	void Task5()
	{
		int x, y, z;
		double   k, m, n, p;
		
		start:

		printf("Enter x = ");
		scanf_s("%d", &x);
		printf("Enter y = ");
		scanf_s("%d", &y);
		printf("Enter z = ");
		scanf_s("%d", &z);


		if (x == y && x == z && y == z)

		{printf("�� ����� ���������� �������� x,y,z. ���������� ��� ���...\n\n"); goto start;}
		
		if (x < 0 || y < 0 || z < 0)
		{printf("�� ����� ���� �� �������� �������������. ���������� ��� ���...\n\n"); goto start;}

		// �������� �� ���� ���� ����������� ��������
		if (x == y && x < z)
		{printf("�� ����� ��� ����������� ��������. ���������� ��� ���...\n\n"); goto start;}
		if (x == z && y > z)
		{printf("�� ����� ��� ����������� ��������. ���������� ��� ���...\n\n"); goto start;}
		if (y == z && x > y)
		{printf("�� ����� ��� ����������� ��������. ���������� ��� ���...\n\n"); goto start;}

		// �������� �� ���� ���� ������������ ��������
		if (x == y && x > z)
		{printf("�� ����� ��� ������������ ��������. ���������� ��� ���...\n\n"); goto start;}
		if (x == z && y < z)
		{printf("�� ����� ��� ������������ ��������. ���������� ��� ���...\n\n"); goto start;}
		if (y == z && x < y)
		{printf("�� ����� ��� ������������ ��������. ���������� ��� ���...\n\n"); goto start;}

					if (x < y && x < z) // ���������� ������� �������� �� x,y,z � ����������� ��� k
					{
						printf("\nx=%d ������� �� x,y,z ����� k=%d\n", x, x);
						k = (double)x;
					}
					
					if (y < x && y < z) // ���������� ������� �������� �� x,y,z � ����������� ��� k
					{
						printf("\nx=%d ������� �� x,y,z ����� k=%d\n", y, y);
						k = (double)y;
					}

					if (z < x && z < y && z != x && z != y) // ���������� ������� �������� �� x,y,z � ����������� ��� k
					{
						printf("\nx=%d ������� �� x,y,z ����� k=%d\n", z, z);
						k = (double)z;
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

					m = (double)(x + y + z) / 3;
					printf("\n������� �������� ��������� ����� m = %f \n", m);

					p = (double)m *(double)n / k;
					printf("\nm *n / k = %f \n\n\n", p);

	}


	void Task6() //var 2 - ok ����������� ���������� � - && � ���� ��� ������� ���� ���������
	{
		int a, b, c, count = 1;

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
		} while (count < 4);
	}

	/* // Task7() ����������
	

		int a, b, c, count = 1;

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
		} while (count < 4);
	*/

	void Task7() //var 2 - ok ����������� ���������� � - && � ���� ��� ������� ���� ��������� 
	{
		int a, b, c, count = 1;

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

		} while (count < 4);
	}

										

		/* /// Task 7
		int a, b, c, count = 1;

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
		} while (count < 4);
	*/


	void Task8()
	{

		int x = 2, y = 2, z = 4;

		if (pow(x, 2) + pow(y, 2) == pow(z, 2))
		{
			printf("true\n");
		}
		else { printf("false\n"); }
	}

	void Task9()
	{

		int x = 2, y = 2;

		if (x%y == 0 && y%x == 0)
		{
			printf("true\n");
		}
		else
		{
			printf("false\n");
		}
	}


	void Task10()
	{
		int x = 1, y = 5, z = 7;

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
		else { printf("���� �� ��������� �������� x, y, z = 0 \n\n"); }
	}


	
	int main()			// ��� ������ �������� �����������, ��� ���� ������� � ������ main
	{
		setlocale(LC_ALL, ""); //  ���������� ������������ ������ ������ ����������
		srand(time(NULL));

		int task;
		int flag;

	start:

		printf("\nEnter number of Task from 1 to 10 => ");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1: {(Task1 ()); }break;
		case 2: {(Task2 ()); }break;
		case 3: {(Task3 ()); }break;
		case 4: {(Task4 ()); }break;
		case 5: {(Task5 ()); }break;
		case 6: {(Task6 ()); }break;
		case 7: {(Task7 ()); }break;
		case 8: {(Task8 ()); }break;
		case 9: {(Task9 ()); }break;
		case 10: {(Task10 ()); }break;

		default:
			break;
		}

		{
			printf("\nDo You want to continue... 0/1 \n");
			scanf_s("%d", &flag);
			if (flag == 1)
				goto start;

			system("pause");
		}
	

			/// How to use bool I don't know. Please show me how to use bool.
	}