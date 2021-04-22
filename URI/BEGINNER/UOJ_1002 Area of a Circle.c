#include <stdio.h>
#define PI 3.14159
int main ()
{
    double R, A;

    while(scanf("%lf",&R)!=EOF){
        A= PI*(R*R);
        printf("A=%.4lf\n",A);
    }
}
