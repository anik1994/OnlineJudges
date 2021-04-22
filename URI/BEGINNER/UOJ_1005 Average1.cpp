#include<stdio.h>
#include<iostream>
using namespace std;

int main ()
{
    float A, B, MEDIA;

    cin >>A >>B;
    MEDIA =((A*3.5)+(B*7.5))/(3.5+7.5);
    cout<<"MEDIA"<<' '<<'='<<' ';
    printf("%.5f\n",MEDIA);
}
