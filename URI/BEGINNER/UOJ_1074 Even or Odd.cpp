#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, x ;

    cin>>n;

    while(n--)
    {
        cin>>x;

        if(x==0) printf("NULL\n");

        else{
        if(x%2==0) printf("EVEN ");
        else printf("ODD ");

        if(x>0) printf("POSITIVE\n");
        else printf("NEGATIVE\n");
        }
    }



    return 0;
}

