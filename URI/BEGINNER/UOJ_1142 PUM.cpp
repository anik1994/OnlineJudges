#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,k=1;

    while(cin>>n)
    {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=3;j++){
                printf("%d ",k);
                k++;
            }
            printf("PUM\n");
            k+=1;
        }
    }

    return 0;
}
