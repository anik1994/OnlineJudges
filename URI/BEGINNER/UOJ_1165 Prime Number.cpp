#include<stdio.h>>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, flag=0,x;

    cin>>t;

    while(t--){
            cin>>x;
        for(int i = 2; i <x; i++){
                if(x%i == 0) {flag=1; break;}
        }
        if(flag==0) printf("%d eh primo\n",x);
        else printf("%d nao eh primo\n",x);
        flag=0;
    }
    return 0;
}

