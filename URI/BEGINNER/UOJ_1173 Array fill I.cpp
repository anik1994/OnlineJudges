#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int ara[10], x;
    cin>>x;
        ara[0]=x;
    for(int i=1;i<10;i++){
        ara[i]=ara[i-1]*2;
    }
    for(int i=0;i<10;i++){
        printf("N[%d] = %d\n",i,ara[i]);
    }

}
