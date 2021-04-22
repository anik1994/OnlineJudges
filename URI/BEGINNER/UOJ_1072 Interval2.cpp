#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, x, in=0, out=0;

    cin>>n;

    while(n--)
    {
        cin>>x;

        if(x>=10 && x<=20) in++;
        else out++;
    }

    printf("%d in\n%d out\n", in, out);

    return 0;
}
