#include<stdio.h>>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int ara[15],i,x;

    for(i=0;i<10;i++){
        scanf("%d",&x);
        if(x>0)ara[i]=x;
        else ara[i]=1;
    }
    for(i=0;i<10;i++){
        printf("X[%d] = %d\n",i,ara[i]);
    }
    return 0;
}

