#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    long long p=1;

    cin>>n;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=3;j++){
                p=p*i;
                cout<<p;
                if(j<3) printf(" ");
            }
            printf("\n");
            p=1;
        }


    return 0;
}

