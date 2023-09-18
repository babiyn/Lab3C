#include<stdio.h>
#include<conio.h>
int main(void) {
	// Advertisement**

	int ch, str[79 + 1];
	int x, y, z;
	float a, b, c;
	double A, B, C;

	printf("\n \t Enter a symbol:");
	scanf_s("%c", &ch, 1);
	printf("\t The symbol is:%c \n", ch);
	printf("\n \t Enter any string:");

	_flushall(); // для усунення порожнього рядка

	scanf_s("%s", str, 79);
	printf("\t The string is:%2s \n", str);
	printf("\t Enter a real number a:");
	scanf_s("%f", &a);
	printf("\t Enter a real number b:");
	scanf_s("%f", &b);
	c = a + b;

	printf("\t The sum %1.2f and %1.2f (as float) is equal:%1.4f \n", a, b, c);
	printf("\t Enter a real number A:");
	scanf_s("%lf", &A);
	printf("\t Enter a real number B:");
	scanf_s("%lf", &B);
	C = A + B;

	printf("\t The sum %1.2f and %1.2f (as double) is equal:%1.4f \n", A, B, C);

}
