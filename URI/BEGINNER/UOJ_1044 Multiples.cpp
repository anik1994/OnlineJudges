#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int a,b;

    while(cin>>a>>b)
    {
        if(a<b){
            if(b%a==0)printf("Sao Multiplos\n");
            else printf("Nao sao Multiplos\n");
        }
        else{
            if(a%b==0)printf("Sao Multiplos\n");
            else printf("Nao sao Multiplos\n");
        }
    }
    return 0;
}
