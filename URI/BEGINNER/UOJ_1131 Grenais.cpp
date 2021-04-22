#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int p, g, i,G=0,I=0,D=0;

    while(p!=2){
        cin>>i>>g;
        if(g>i) G++;
        else if(i>g) I++;
        else D++;

        printf("Novo grenal (1-sim 2-nao)\n");
        cin>>p;
    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", G+I+D, I, G, D);

    if(G>I) printf("Gremio venceu mais\n");
    else if(I>G) printf("Inter venceu mais\n");
    else printf("Nao houve vencedor\n");


    return 0;
}
