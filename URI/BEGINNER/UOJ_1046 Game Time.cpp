#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x,y;

    while(cin>>x>>y)
    {
        if(x<y) printf("O JOGO DUROU %d HORA(S)\n", y-x);
        else if(x>y) printf("O JOGO DUROU %d HORA(S)\n", ((24-x)+(0+y)));
        else printf("O JOGO DUROU 24 HORA(S)\n");
    }

    return 0;
}
