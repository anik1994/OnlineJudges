#include <bits/stdc++.h>
using namespace std;
double ara[110];

int main(void)
{
    int i;
    double x;
    cin>>x;
        ara[0]=x;
        for(i=1;i<100;i++){
                ara[i]=ara[i-1]/2.00;
        }
    for(int i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,ara[i]);
    }

}

