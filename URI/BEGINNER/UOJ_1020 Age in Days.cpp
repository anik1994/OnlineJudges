#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int x,y=0,m=0,d=0;
    cin>>x;
    while(x!=0)
    {
        if(x>=365)
        {   y=x/365;
            x=x-(y*365);
        }
        else if(x<365 && x>=30)
        {
            m=x/30;
            x=x-(m*30);
        }
        else if(x<30)
        {
            d=x;
            x=x-d;
        }
    }
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
}





