#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n, h;
    float t;

    cin >>n>>h>>t;
    cout<<"NUMBER"<<' '<<'='<<' '<<n<<endl;
    cout<<"SALARY"<<' '<<'='<<' '<<"U$"<<' ';
    printf("%.2f\n",h*t);
}
