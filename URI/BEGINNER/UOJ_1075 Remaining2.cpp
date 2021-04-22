#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x, i;
    cin>>x;
    for(i=1;i<=10000;i++){
        if(i%x==2){
           printf("%d\n",i);
        }
        else continue;
    }

    return 0;
}

