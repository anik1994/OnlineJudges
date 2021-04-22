#include <bits/stdc++.h>
using namespace std;
int par[5];
int impar[5];

int main()
{
    int n,i=0,j=0,k,x;

    for(n=0;n<15;n++){
        cin>>x;
        if(x%2==0){
            par[i]=x;
            i++;
            if(i==5){
                for(k=0;k<5;k++){
                    printf("par[%d] = %d\n",k,par[k]);
                }
                i=0;
            }
        }
        else{
            impar[j]=x;
            j++;
            if(j==5){
                for(k=0;k<5;k++){
                    printf("impar[%d] = %d\n",k,impar[k]);
                }
                j=0;
            }
        }
    }
        if(j<5){
           for(k=0;k<j;k++){
                    printf("impar[%d] = %d\n",k,impar[k]);
                }
        }
        if(i<5){
            for(k=0;k<i;k++){
                    printf("par[%d] = %d\n",k,par[k]);
                }
        }

    return 0;
}
