#include<stdio.h>
#include<iostream>
using namespace std;

int main ()
{
    int x, y;

    while(cin>>x>>y){
        int sum=0;
        if(x<y){
            for(int i=x+1;i<y;i++){
                if(i%2==0) continue;
                else {
                    sum=sum+i;
                }
            }
            printf("%d\n", sum);
        }
        else if(x>y){
            for(int i=y+1;i<x;i++){
                if(i%2==0) continue;
                else {
                    sum=sum+i;
                }
            }
            printf("%d\n", sum);
        }
        else printf("%d\n", sum);

    }
    return 0;
}

