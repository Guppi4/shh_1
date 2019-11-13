#include"myMath.h"
#include<stdio.h>
double Exp(int x) {
	double e = 2.71828;
	double ans =0;
	for (int i=0; i < x; i++) {
		ans = e * e;
	}
	return ans;
}
double Pow(double x, int y) {
	double x2 = 1;
	for (int i = 0; i < y; i++) {
		x2 = x2 * x;
    }


	return x2;
}
