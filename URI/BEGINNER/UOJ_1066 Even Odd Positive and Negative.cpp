#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x;
    int i, even=0, odd=0, positive=0, negative=0;

    for(i=0;i<5;i++)
    {
        cin>>x;
        if(x>0) positive++;
        else if(x<0) negative++;

        if(x%2==0) even++;
        else odd++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", even, odd, positive, negative);
    return 0;
}

