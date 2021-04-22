#include<stdio.h>
#include<iostream>
using namespace std;

int main ()
{
    double i, j;

    for(i=0;i<=2;i+=.2)
    {   for(j=1;j<=3;j++){
            cout<<"I="<<i<<' '<<"J="<<i+j<<endl;
            //printf("I=%lf J=%lf\n", i, i+j);
        }

    }

    return 0;
}

