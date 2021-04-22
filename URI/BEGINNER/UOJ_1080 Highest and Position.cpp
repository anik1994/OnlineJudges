#include<stdio.h>
#include<iostream>
using namespace std;

int main ()
{
    int ara[110];
    int m=0, p=0, i;

    for(i=1;i<=100;i++){
        scanf("%d",&ara[i]);
        if(ara[i]>m){
            m=ara[i];
            p=i;
        }
    }
    printf("%d\n%d\n", m,p);
    return 0;
}
