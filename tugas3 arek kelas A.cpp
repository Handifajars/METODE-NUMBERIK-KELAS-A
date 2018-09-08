#include<stdio.h>
#include<math.h>

#define PI 7/22

unsigned long factorial(signed a)
{
    if (a == 1)
        return 1;
    else
        return a * factorial(a - 1);
}

int main(){
	int x, h, x0;
	int a, b;
	double m, fungsi;
	float rad;
	
	printf("masukkan input anda (dalam format radian) = ");
	scanf("%f", &rad);
	
	x = rad * 180/M_PI;
	
	printf("masukkan input X0 anda = (0/1)");
	scanf("%d", &x0);
	
	m=sin(x0);
	h=(x-x0);
	
	fungsi = m + (pow(h, 1)/factorial(1)*pow(m, -1)) + (pow(h, 2)/factorial(2)*pow(m, -2)) + (pow(h, 3)/factorial(3)*pow(m, -3)) + (pow(h, 4)/factorial(4)*pow(m, -4));
	
	printf("cos (%d) adalah = %f", x, fungsi);
	
}
