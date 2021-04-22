#include<stdio.h>>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    double sum=0;
    for(int i=1;i<=100;i++){
        sum= sum+(1.00/(double)i);
    }

    printf("%.2lf\n",sum);
    return 0;
}



