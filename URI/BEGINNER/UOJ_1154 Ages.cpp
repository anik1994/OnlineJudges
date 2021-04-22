#include<stdio.h>>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x,sum=0, c=0;
    double age;
    cin>>x;
    while(x>0){
        sum=sum+x;
        c++;
        cin>>x;

    }
    age= sum/(double)c;
    printf("%.2lf\n",age);
    return 0;
}


