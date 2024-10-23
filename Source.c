#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>
int area();
char opred();
void risov();
void main()
{
	setlocale(LC_CTYPE, "RUS");
	system("chcp 1251");
	while (1) {

		int k, a = 5, b = 5, h = 5;
		char simv;
		printf("Что хотите сделать?\n\n 1) рассчитать площадь;\n 2) вывести определение фигуры;\n 3) нарисовать фигуру;\n 4)Выйти.\n");
		scanf("%d", &k);

		switch (k)
		{
		case 1:
			printf("Введите высоту: ");
			scanf("%d", &h);
			printf("Введите ширину верхней стороны: ");
			scanf("%d", &a);
			printf("Введите ширину нижней стороны: ");
			scanf("%d", &b);
			printf("Площадь = %d\n", area(a, b, h)); break;
		case 2:opred(); break;
		case 3:
			printf("Введите символ: ");
			scanf(" %c", &simv);
			printf("Введите высоту: ");
			scanf("%d", &h);
			printf("Введите ширину верхней стороны: ");
			scanf("%d", &a);
			printf("Введите ширину нижней стороны: ");
			scanf("%d", &b);
			risov(h, a, b, simv);
			break;
		//case 4:
		case 4: return 0; 
		}
	}
}
int area(int a, int b, int h) {
	int areaparal;
	areaparal = h * (a + b) / 2;
	return areaparal;
}
char opred() {
	printf("Равнобедренная трапеция — это трапеция, у которой боковые стороны равны.");
}
void risov(int h, int a, int b, char simv) {
	for (int i = 0; i < h; i++) {
		int space = (b - a) / 2 * (h - i) / h;

		for (int j = 0; j < space; j++) {
			printf(" ");
		}

		int cw = a + (b - a) * i / h;
		for (int j = 0; j < cw; j++) {
			printf("%c", simv);
		}
		printf("\n");
	}
	return simv;
}