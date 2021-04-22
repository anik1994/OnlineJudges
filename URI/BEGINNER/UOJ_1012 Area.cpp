#include<stdio.h>
#include<iostream>
#define PI 3.14159
using namespace std;
int main()
{
    float A, B, C;

    cin>> A>>B>>C;
    printf("TRIANGULO: %.3lf\n",(.5*A*C));
    printf("CIRCULO: %.3lf\n",PI*C*C);
    printf("TRAPEZIO: %.3lf\n", ((A+B)/2)*C);
    printf("QUADRADO: %.3lf\n", B*B);
    printf("RETANGULO: %.3lf\n", A*B);
    }

