#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    double x,a=0;
    int i,c=0;

    for(i=0;i<6;i++)
    {
        cin>>x;
        if(x>0){
            c++;
            a=a+x;
        }
    }
    printf("%d valores positivos\n%.1lf\n", c, (a/(float)c));
    return 0;
}

