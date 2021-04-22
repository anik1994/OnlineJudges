#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    double x, c=0, sum=0,p;



        while(c!=2)
            {   cin>>x;
                if(x>=0.0 && x<=10.0){
                    sum=sum+x;
                    c++;
                }
                else {
                    printf("nota invalida\n");
                }
            }
    printf("media = %.2lf\n",sum/2.0);
    printf("novo calculo (1-sim 2-nao)\n");
        cin>>p;

    while(p!=2){

        if(p==1){
                c=0;
                sum=0;
            while(c!=2)
        {   cin>>x;
            if(x>=0.0 && x<=10.0){
                    sum=sum+x;
                    c++;
            }
            else {
                printf("nota invalida\n");
            }
        }
        printf("media = %.2lf\n",sum/2.0);
        printf("novo calculo (1-sim 2-nao)\n");
            cin>>p;
        }
        else{
            printf("novo calculo (1-sim 2-nao)\n");
            cin>>p;
        }
    }

    return 0;
}






