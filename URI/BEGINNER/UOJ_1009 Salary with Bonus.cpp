#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    char n[100];
    double b, e;

    cin >>n>>b>>e;
    cout<<"TOTAL"<<' '<<'='<<' '<<"R$"<<' ';
    printf("%.2f\n",(b+(e*.15)));
}
