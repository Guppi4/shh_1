#include<stdio.h>
#include"myMath.h"



int main()
{
	printf("Please inset a real number:");
	double x;
	scanf(" %lf", &x);

	int x2 = x;//1 f
	double E = Exp(x2);
	double A = add(E, Pow(x, 3));
	double y = sub(A, 2);

	double x3 = mul(x, 3);//2 f
	double x35 = Pow(x, 2);
	double x4 = mul(x35, 2);
	float y2 = add(x3, x4);


	double x11 = Pow(x, 3);//3 f
	double x10 = mul(x11, 4);
	double x12 = div(x10, 5);
	double x13 = mul(x, 2);
	double y3 = sub(x12, x13);

	printf("The value of f(x) = e^x + x^3 - 2 at the %.2f ", x);
	printf("is:%.4f\n", y);
	printf("The value of f(x) = 3x + 2X^2 at the %.2f", x);
	printf(" is:%.4f\n", y2);
	printf("The value of f(x) = (4x^3)/5 -2x at the %.2f", x);
	printf(" is:%.4f", y3);//thfht

	




	return 0;
}
