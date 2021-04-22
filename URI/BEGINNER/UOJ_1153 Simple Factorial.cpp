#include<stdio.h>>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x,fact=1;
    cin>>x;

    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    printf("%d\n",fact);
    return 0;
}

