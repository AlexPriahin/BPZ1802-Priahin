#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h> 
#include "func.h"
int main(void)
{
	int nom, z;
	setlocale(LC_CTYPE, "rus"); 
	printf("Версия, где все функции реализованы циклом FOR\n");
	printf("Меню:\n");
	printf("1. Задание 1\n");
	printf("2. Задание 2\n");
	printf("3. Задание 3\n");
	printf("4. Задание 4\n");
	printf("5. Задание 5\n");
	printf("6. Выход\n");
	z = 0;
	do
	{
		printf("Выберите номер задания: ");
		switch (_getch())
		{
		case '1':
		{
			printf("Задание 1\n ");
			int n;
			float a;
			printf("Введите число n= ");
			scanf("%d", &n);
			a = summ(n);
			printf("Результат: %f\n", a);
			z = 1;
			break;
		}
		case '2':
		{
			printf("Задание 2\n ");
			float a1;
			float eps;
			printf("Введите точность eps= ");
			scanf("%f", &eps);
			a1 = summ2(eps);
			printf("Результат: %4f\n", a1);
			z = 2;
			break;
		}
		case '3':
		{
			printf("Задание 3\n ");
			int n1;
			int k;
			printf("Введите число n= ");
			scanf("%d", &n1);
			printf("Введите число k= ");
			scanf("%d", &k);
			print(n1, k);
			z = 3;
			break;
		}
		case '4':
		{
			printf("Задание 4\n ");
			int i;
			float eps;
			printf("Введите точность eps= ");
			scanf("%f", &eps);
			i = findFirstElement(eps);
			printf("Результат: %d\n", i);
			z = 4;
			break;
		}
		case '5':
		{
			printf("Задание 5\n ");
			int i;
			float eps;
			printf("Введите точность eps= ");
			scanf("%f", &eps);
			i = findFirstNegativeElement(eps);
			printf("Результат: %d\n", i);
			z = 5;
			break;
		}
		case '6':
		{
			printf("Работа программы завершена.\n ");
			z = 6;
			break;
		}
		}
	} while (z != 6);
	system("pause");
	return 0;
}
