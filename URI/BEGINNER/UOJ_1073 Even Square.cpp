#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x, i;
    cin>>x;
    for(i=1;i<=x;i++){
        if(i%2==0){
           printf("%d^%d = %d\n",i,2, i*i);
        }
        else continue;
    }

    return 0;
}
