#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int ara[1010];

int main(void)
{
    int i, x,j;
    cin>>x;
        for(i=0;i<1000;){
            for(j=0;j<x;j++){
                ara[i]=j;
                i++;
            }
        }
    for(int i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,ara[i]);
    }

}

