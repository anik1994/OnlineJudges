#include<stdio.h>
#include<iostream>
using namespace std;

int main ()
{
    int i, j,k, p;

    for(i=1,j=7;i<=9;i+=2,j+=2)
    {   p=j-3;
        for(k=j;k>p;k--){
            printf("I=%d J=%d\n", i, k);
        }

    }

    return 0;
}

