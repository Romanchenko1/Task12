#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>


void task1()
{
//2.В прямоугольной матрице найти наибольший из минимальных элементов строк матрицы
	int A[6][4];
	int min = 100;
	int m;
	int n;
	int max = 0;
	int i, j;
	for ( i = 0; i < 6; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			A[i][j] = 1 + rand() % 20;
			printf("%d ", A[i][j]);
			if (A[i][j]<min)
			{
				m = A[i][j];
				if (m>max)
				{
					n = m;
				}
			}
		}
		printf("\n");
	}
	printf("Максимальный среди минимальных->%d\n", n);
}


void task2()
{
//3.Ввести массив, состоящий из 15 - ти элементов(двузначные целые числа)
//Изменить разрядность цифр, образующих элементы исходного массива и, таким образом, сформировать новый массив
//Например, исходный массив : 25 71 84…, новый массив : 52 17 48….
	int A[15];
	int i;
	for ( i = 0; i < 15; i++)
	{
		A[i] = 10 + rand() % 50;
		printf("%d ", A[i]);
	}
	printf("\n--------------------\n");
	for (int i = 0; i < 15; i++)
	{
		A[i] = A[i] % 10 * 10 + A[i] / 10;
		printf("%d ", A[i]);
	}




}


void task3()
{
//5.Дан массив, состоящий из 12 двоичных чисел.Удалить элементы, которые встречаются более двух раз.
	int A[5][5] = { 0 }, count = 0, B[5][5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			A[i][j] = 10 + rand() % 40;
			printf("%d\t", A[i][j]);
		}

		printf("\n\n");
	}
	for (int k = 0; k < 5; k++)
	{
		for (int p = 0; p < 5; p++)
		{
			count = 0;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					if (A[k][p] == A[i][j])
						count++;
				}
			}
			if (count - 1 >= 2)
			{
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 5; j++)
					{
						if (A[k][p] == A[i][j])
							B[i][j] = -1;
					}
				}
			}

		}
	}
	for (int k = 0; k < 5; k++)
	{
		for (int p = 0; p < 5; p++)
		{
			if (B[k][p] == -1)
				A[k][p] = 0;
		}
	}
	printf("\n-----------------\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d\t", B[i][j]);
		}
		printf("\n\n");
	}
}



void task4()
{
//6.Задан целочисленный массив.Вывести индексы тех элементов, значения которых больше, чем у стоящих справа от него
//Определить количество таких чисел
	int A[10];
	int i, max=0, j;
	int m = 0;
	for ( i = 0; i < 10; i++)
	{
		A[i] = 1 + rand() % 20;
		printf("%d ", A[i]);
	}
	printf("\n------------------------\n");
	for (int i = 0; i < 5; ++i)
	{
		for (int j = i + 1; j < 5; ++j)
		{
			if (A[i] == A[j])
				max++;
			printf("%d ", max);
		}
	}
}


void task5()
{
//7.Задан целочисленный массив.Определить, образуют ли значения его элементов арифметическую прогрессию
//Если «да» – вывести разность прогрессии, если «нет» – ответ «не образуют».
	int A[10];
	int z, Raznost,n, i;
	for (i = 0; i < 10; i++)
	{
		A[i] = 1 + rand() % 30;
	}
	

	for (i = 0; i < 10 - 2; i++)
	{
		Raznost = A[i + 1] - A[i];
	    //sort(massive, massive + 10);
z = A[1] - A[0];
for (int i = 2; i < 10; i++)
{
	n = A[i] - A[i - 1];
	if (n != z)
	{
		printf("не образуют\n");
	}
}
break;
	}
	printf("%d\n", Raznost);
}



void task6()
{
	//8.Дан массив вещественных чисел.Определить элемент массива(значение и индекс)
	//который наиболее близок к заданному вещественному числу R.
	int A[10];
	int i, r;
	for (i = 0; i < 10; i++)
	{
		A[i] = 1 + rand() % 20;
	}
	printf("Введите число->");
	scanf_s("%d", &r);
	int min = 0;
	int c = abs(A[min] - r);
	for (i = 1; i < 10; i++) {
		int b = abs(A[i] - r);
		if (b < c)
		{
			min = i;
			c = b;
		}
	}
	printf("наиболее близкое число->%d\n", A[min]);
}


void task7()
{
	//9.Отсортировать по возрастанию элементов последней строки целочисленный двухмерный массив 3×4.
	int A[3][4];
	int i, j, a, b, c;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 1 + rand() % 50;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	for (i = 2; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (a = 2; a < 3; a++)
			{
				for (b = 0; b < 4; b++)
				{
					if (A[a][b] > A[i][j])
					{
						c = A[a][b];
						A[a][b] = A[i][j];
						A[i][j] = c;
					}
				}
			}
		}
	}
	printf("\n----------------------------\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}



void task8()
{
	//10.Дан двухмерный массив 7×7.Найти сумму модулей  отрицательных нечетных элементов
	int A[7][7];
	int i, j, sum = 0 , c = 0;
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			A[i][j] = -5 + rand() % 20;
			printf("%d ", A[i][j]);
			if (A[i][j] % 2 != 0)
			{
				if (A[i][j] < c)
				{
					sum = sum + A[i][j];
                }

			}
			
		}
		printf("\n");
	}
	printf("Сумма отрицательных нечетных чисел->%d\n", sum);
}


void task9()
{
//11.Дан двухмерный массив 5×6.Определить среднее арифметическое положительных элементов каждого столбца.
	int A[5][6];
	int i, j;
	int s=0;
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			A[i][j] = -5 + rand() % 20;
			if (A[i][j])
			{
				s = s + A[i][j];
			}
		}
	}
	s /= 6;
	printf("%d\n", s);
}


void task10()
{
//12.В матрице А(4 - строки, 3 - столбца) поменять местами наибольшие элементы в первом и третьем столбцах.
	int i, j;
	int a[4][3];
	int max1, max3, temp;
	int i1 = 0, i3 = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			a[i][j] = 1 + rand() % 20;
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	max1 = a[0][0];
	max3 = a[0][2];
	for (i = 0; i < 3; i++)
	{
		if (max1 < a[i][0])
		{
			max1 = a[i][0];
			i1 = i;
		}
		if (max3 < a[i][2])
		{
			max3 = a[i][2];
			i3 = i;
		}
	}
	temp = a[i1][0];
	a[i1][0] = a[i3][2];
	a[i3][2] = temp;
	printf("\n----------------------------------\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void task11()
{
//13.Задана квадратная матрица А размером N×N(N <= 10), состоящая из действительных чисел
//Найти произведение наименьших элементов каждого столбца матрицы.
	int A[10][10], p, m; 
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			A[i][j] = 1 + rand() % 50;
		}
	}
	for (i = 0; i < 10; i++) 
	{
		m = A[0][i];
		for (j = 1; j < 10; j++)  
			m = (m > A[j][i]) ? A[j][i] : m;
		if (!i) p = m; 
		else p *= m;
	}
	printf("%d\n", p);
}


void task12()
{
//14.Дан двухмерный массив 7×8.Определить количество нечетных елементов каждого столбца
	int A[7][8];
	int i, j;
	int kol = 0;
	for ( i = 0; i < 7; i++)
	{
		for ( j = 0; j < 8; j++)
		{
			A[i][j] = 0 + rand() % 50;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n------------------------\n");
	for (i = 0; i < 7; ++i) 
	{
		for (j = 0; j < 8; ++j)
		{
			if (A[j][i] % 2 != 0)
				kol++;
		}
		printf("столбец %d->%d\n",i+1, kol);
	}
	printf("\n\n");
}


void task13()
{
//15.Дан массив из n×• m элементов.Найти наибольший элемент массива в каждом столбце
	int A[10][15];
	int i, j, c;
	int max = 0, s = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			A[i][j] = 0 + rand() % 50;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n------------------------\n");
	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 15; ++j)
		{
			if (A[j][i] > max)
				c = s + A[i][j];
		}
		printf("столбец %d->%d\n", i + 1,c );
	}
	printf("\n\n");
}


void task14()
{
//16.Дан квадратный массив из n элементов.Найти сумму элементов последнего столбца
	int A[5][5];
	int i, j;
	int summ = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			A[i][j] = 0 + rand() % 50;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n------------------------\n");
	for (i = 4; i < 5; ++i)
	{
		for (j = 0; j < 5; ++j)
		{
			summ = summ + A[i][j];
		}
	}
	printf("%d\n", summ);



}


int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int task;
	int flag;
start:
	printf("Введите номер задания->");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1: {task1(); }break;
	case 2: {task2(); }break;
	case 3: {task3(); }break;
	case 4: {task4(); }break;
	case 5: {task5(); }break;
	case 6: {task6(); }break;
	case 7: {task7(); }break;
	case 8: {task8(); }break;
	case 9: {task9(); }break;
	case 10: {task10(); }break;
	case 11: {task11(); }break;
	case 12: {task12(); }break;
	case 13: {task13(); }break;
	case 14: {task14(); }break;
	default:
		break;
	}
	printf("Чтобы продолжить нажмите 1->");
	scanf_s("%d", &flag);
	if (flag==1)
	{
		goto start;
	}
	system("pause");
}