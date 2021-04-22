#include<stdio.h>>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x,z,c=0, sum=0;

    while(cin>>x>>z){

        while(z<=x){
                cin>>z;
        }

        for(int i=x;i<=z;i++){
            sum=sum+i;
            if(sum>z){
                c++;
                break;
            }
            else c++;
        }
        printf("%d\n",c);
        sum=0;
        c=0;
    }
}
