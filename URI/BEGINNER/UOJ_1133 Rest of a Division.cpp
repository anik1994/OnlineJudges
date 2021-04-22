#include<stdio.h>>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x,y,i;
    cin>>x>>y;
    int aux;

    if(y < x){
         aux = x;
         x = y;
         y = aux;
    }
    for(i=x+1;i<y;i++){
        if(i%5==2 || i%5==3) {
                printf("%d\n",i);
        }

    }
    return 0;
}
