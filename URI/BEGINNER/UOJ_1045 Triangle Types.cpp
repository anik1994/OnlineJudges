#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    double x, y, z, A, B, C;

    while(cin>>x>>y>>z){
       if(x>y && x>z) {
            A=x;
            B=y;
            C=z;
       }
       else if(y>x && y>z) {
            A=y;
            B=x;
            C=z;
       }
       else {
            A=z;
            B=x;
            C=y;
            }

        if(A>=(B+C))printf("NAO FORMA TRIANGULO\n");
        else if(A*A==B*B+C*C)printf("TRIANGULO RETANGULO\n");
        else if(A*A>B*B+C*C)printf("TRIANGULO OBTUSANGULO\n");
        else if(A*A<B*B+C*C)printf("TRIANGULO ACUTANGULO\n");
        if(x==y && x==z && y==z)printf("TRIANGULO EQUILATERO\n");
        else if((x==y && x!=z) || (x==z && x!=y) || (y==z && y!=x))printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}

