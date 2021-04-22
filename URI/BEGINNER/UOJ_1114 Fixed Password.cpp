#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x;

    while(cin>>x)
    {
        if(x==2002){
            printf("Acesso Permitido\n");
            break;
        }
        else {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}


