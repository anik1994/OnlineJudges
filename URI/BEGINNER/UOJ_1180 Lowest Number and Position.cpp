#include <bits/stdc++.h>
using namespace std;
int ara[1010];

int main(void)
{
    int n;
    int m =32767;
    int index;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
        if(ara[i]<m){
            m=ara[i];
            index = i;
        }
    }
    cout<<"Menor valor: "<<m<<"\n";
    cout<<"Posicao: "<<index<<"\n";

    return 0;
}
