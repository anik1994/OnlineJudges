#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int m, n, sum=0;

    while(cin>>m>>n)
    {
        if(m==0 || n==0 || m<0 || n<0) break;
        else {
            if(m<n){
                for(int i=m;i<=n;i++){
                   printf("%d ",i);
                   sum=sum+i;
                }
                printf("Sum=%d\n", sum);
                sum=0;
            }
            else{
                for(int i=n;i<=m;i++){
                   printf("%d ",i);
                   sum=sum+i;
                }
                printf("Sum=%d\n", sum);
                sum=0;
            }
        }
    }

    return 0;
}
