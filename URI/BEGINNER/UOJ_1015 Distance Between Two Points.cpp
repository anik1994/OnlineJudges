#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    float x1,x2,y1,y2,p;

    cin>>x1>>y1>>x2>>y2;
    p= sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("%.4lf\n",p);
}

