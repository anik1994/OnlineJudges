#include<stdio.h>>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(void)
{
    int p;
    double sum=0;

    for(int i=1,j=0;i<=39;i+=2,j++){
            p=pow(2,j);
        sum= sum+((double)i/(double)p);
    }

    printf("%.2lf\n",sum);
    return 0;
}



