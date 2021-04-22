#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x;
    int i, co=0;

    for(i=0;i<5;i++)
    {
        cin>>x;
        if(x%2==0) co++;
    }
    printf("%d valores pares\n", co);
    return 0;
}
