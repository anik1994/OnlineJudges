#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main (void)
{
    double x,q;
    int p,m;
    int count100, count50, count20, count10, count5, count2, count1, c50, c25, c10, c5, c1;

    while(cin>>x)
    {
        p=x;
        q=x-p;
        m=q*100;
        count100=p/100;
        p=p%100;
        count50=p/50;
        p=p%50;
        count20=p/20;
        p=p%20;
        count10=p/10;
        p=p%10;
        count5=p/5;
        p=p%5;
        count2=p/2;
        p=p%2;
        count1=p/1;
        p=p%1;
        c50=m/50;
        m=m%50;
        c25=m/25;
        m=m%25;
        c10=m/10;
        m=m%10;
        c5=m/5;
        m=m%5;
        c1=m/1;
        m=m%1;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",count100, count50, count20, count10, count5, count2);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", count1, c50, c25, c10, c5, c1);
    }
    return 0;
}
