#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int x,h=0,m=0,s=0;
    cin>>x;
    while(x!=0)
    {
        if(x>=3600)
        {   h=x/3600;
            x=x-(h*3600);
        }
        else if(x<3600 && x>=60)
        {
            m=x/60;
            x=x-(m*60);
        }
        else if(x<60)
        {
            s=x;
            x=x-s;
        }
    }
    printf("%d:%d:%d\n",h,m,s);
}





