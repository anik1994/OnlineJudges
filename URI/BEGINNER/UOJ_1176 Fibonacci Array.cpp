#include<stdio.h>>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin>>t;
    while(t--){
    long long int ara[100];
    int x;
    ara[0]=0;
    ara[1]=1;
    cin>>x;

    for(int i=0;i<x;i++)
    {
        ara[i+2]=ara[i]+ara[i+1];
    }
    printf("Fib(%d) = %lld\n",x,ara[x]);
}
    return 0;
}

