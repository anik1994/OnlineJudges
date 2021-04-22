#include<stdio.h>>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int ara[100],x, sum=0;
    ara[0]=0;
    ara[1]=1;
    cin>>x;

    for(int i=0;i<x;i++)
    {
        ara[i+2]=ara[i]+ara[i+1];
    }
    for(int i=0;i<x;i++){
        printf("%d", ara[i]);
        if(i<x-1) printf(" ");
    }
    printf("\n");
    return 0;
}
