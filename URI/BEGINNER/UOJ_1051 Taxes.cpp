#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    double x,p,q,r;

    while(cin>>x){
        if(x<2000.00) cout<<"Isento"<<endl;
        else{
            if(x>4500.00){
                x=x-2000.00;
                p=x-2500.00;
                printf("R$ %.2lf\n",(((1000.00*8.00)/100.00)+((1500.00*18.00)/100.00)+((p*28.00)/100.00)));
            }
            else if(x>3000.01 && x<=4500.00){
                x=x-2000.00;
                p=x-1000.00;
                printf("R$ %.2lf\n",(((1000.00*8.00)/100.00)+((p*18.00)/100.00)));
            }
            else{
                p=x-2000.00;
                printf("R$ %.2lf\n",(((p*8.00)/100.00)));
            }
        }
    }
    return 0;
}
