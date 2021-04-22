#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int c1,u1,c2,u2;
    double p1, p2;

    cin >>c1>>u1>>p1>>c2>>u2>>p2;
    cout<<"VALOR A PAGAR:"<<' '<<"R$"<<' ';
    printf("%.2f\n",((u1*p1)+(u2*p2)));
}

