#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int ara[22], temp;

    for(int i=0;i<20;i++){
        scanf("%d",&ara[i]);
    }
    for(int i=0, j=19;i<10;i++,j--){
        temp=ara[i];
        ara[i]=ara[j];
        ara[j]=temp;
    }
    for(int i=0;i<20;i++){
        printf("N[%d] = %d\n",i,ara[i]);}
    }




