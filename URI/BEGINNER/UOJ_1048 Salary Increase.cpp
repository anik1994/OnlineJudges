#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    double x, p;

    while(cin>>x){
        if(x>=0.00 && x<=400.00){
            p=x+x*.15;
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",p,p-x);
        }
        else if(x>=400.01 && x<=800.00){
            p=x+x*.12;
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n",p,p-x);
        }
        else if(x>=800.01 && x<=1200.00){
             p=x+x*.10;
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n",p,p-x);
        }
        else if(x>=1200.01 && x<=2000.00){
            p=x+x*.07;
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n",p,p-x);
        }
        else {
            p=x+x*.04;
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n",p,p-x);
        }

    }
    return 0;
}
