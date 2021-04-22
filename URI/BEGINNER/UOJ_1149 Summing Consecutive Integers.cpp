#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x,n, sum=0;

    while(cin>>x>>n)
    {
        while(n<=0){
            cin>>n;
        }

        for(int i=1;i<=n;i++,x++){
            sum=sum+x;
        }
        printf("%d\n",sum);
        sum=0;

    }
    return 0;
}
