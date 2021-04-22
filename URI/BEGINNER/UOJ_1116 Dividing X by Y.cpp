#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    double x, y;
    int n;
    cin>>n;

    while(n--)
    {
        cin>>x>>y;
            if(y==0.00){
                printf("divisao impossivel\n");
            }
            else{
                printf("%.1lf\n", x/y);
            }
    }


    return 0;
}


