#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x, y;

    while(cin>>x>>y)
    {
        if(x==y) break;
        else {
            if(x<y){
                printf("Crescente\n");
            }
            else{
                printf("Decrescente\n");
            }
        }
    }

    return 0;
}

