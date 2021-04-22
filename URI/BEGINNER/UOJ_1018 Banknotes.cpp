#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int x,n;
    int count100=0, count50=0, count20=0, count10=0, count5=0, count2=0, count1=0;

    while(cin>>x){
        n=x;
        count100=x/100;
        x=x%100;
        count50=x/50;
        x=x%50;
        count20=x/20;
        x=x%20;
        count10=x/10;
        x=x%10;
        count5=x/5;
        x=x%5;
        count2=x/2;
        x=x%2;
        count1=x/1;
        x=x%1;
    printf("%lld\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",n,count100, count50, count20, count10, count5, count2, count1);
    }
}

