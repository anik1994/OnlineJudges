#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    double a, b, c;
    while(cin>>a>>b>>c)
    {
        if(a+b>c && b+c>a && c+a>b){
            printf("Perimetro = %.1lf\n", a+b+c);
        }
        else {
            printf("Area = %.1lf\n", ((a+b)/2.0)*c);
        }
    }
    return 0;
}
