#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int ara[100];

int main(void){
    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int n,m=0;
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>ara[j];
            if(ara[j]>m) m=ara[j];
        }
        printf("Case %d: %d\n",i,m);
        m=0;
        ara[55]=0;
    }

    return 0;
}


