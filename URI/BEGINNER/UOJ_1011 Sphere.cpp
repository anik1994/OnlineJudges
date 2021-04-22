#include<stdio.h>
#include<iostream>
using namespace std;
#define PI 3.14159

int main()
{
    int R;
    double P;

    cin >>R;

    cout<<"VOLUME"<<' '<<'='<<' ';
    printf("%.3lf\n",((4/3.0*PI*R*R*R)));
}


