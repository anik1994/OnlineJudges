#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a, b, c, e, f;

    cin>>a>>b>>c;
    e=(b*b)-(4*a*c);
    f=2*a;
    if(e>0 && f!=0){
        printf("R1 = %.5lf\n", ((b * -1.0) + sqrt(e)) / (2.0 * a));
        printf("R2 = %.5lf\n", ((b * -1.0) - sqrt(e)) / (2.0 * a));
    }
    else {
        printf("Impossivel calcular\n");
    }
}
