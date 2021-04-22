#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    double ara[105];
    
    for(int i=0;i<100;i++){
        scanf("%lf",&ara[i]);
    }
    for(int i=0;i<100;i++){
        if(ara[i]<=10.00){printf("A[%d] = %.1lf\n",i,ara[i]);}
    }

}

