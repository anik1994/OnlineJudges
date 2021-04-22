#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x,y, c=0;
    cin>>x>>y;

    for(int i=1;i<=y;i++){
            printf("%d",i);
            c++;
            if(c<x) printf(" ");
            else if(c==x){
                printf("\n");
                c=0;
            }
        }

    return 0;
}

