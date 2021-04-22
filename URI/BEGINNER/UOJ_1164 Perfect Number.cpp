#include<stdio.h>>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, sum=0,x;

    cin>>t;

    while(t--){
            cin>>x;
        for(int i = 1; i <x; i++){
                if(x%i == 0) sum=sum+i;
        }
        if(sum==x) printf("%d eh perfeito\n",x);
        else printf("%d nao eh perfeito\n",x);
        sum=0;
    }
    return 0;
}
