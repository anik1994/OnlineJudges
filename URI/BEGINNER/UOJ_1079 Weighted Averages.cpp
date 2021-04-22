#include<stdio.h>
#include<iostream>
using namespace std;

int main ()
{
    int n;
    float A, B, C, MEDIA;
    cin>>n;

    while(n--){
        cin >>A >>B>>C;
        MEDIA =((A*2.0)+(B*3.0)+(C*5.0))/(2.0+3.0+5.0);
        printf("%.1f\n",MEDIA);

    }
}

