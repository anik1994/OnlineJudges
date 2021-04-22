#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    double x;
    int i, co=0;

    for(i=0;i<6;i++)
    {
        cin>>x;
        if(x>0) co++;
    }
    printf("%d valores positivos\n", co);
    return 0;
}
