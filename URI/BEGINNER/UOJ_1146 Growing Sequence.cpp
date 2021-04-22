#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x;

    while(cin>>x)
    {
        if(x==0) break;
        else{
        for(int i=1; i<=x;i++){
            printf("%d",i);
            if(i<x) printf(" ");
        }
        printf("\n");
    }
    }
    return 0;
}
