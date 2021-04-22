#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        long long int a,b,c;
        cin>>a>>b>>c;

        if (a<=0 || b<=0 || c<=0)printf("Case %d: Invalid\n",i);
        else if(a+b>c && b+c>a && c+a>b){
            if(a==b && b==c) printf("Case %d: Equilateral\n",i);
            else if(a==b||b==c ||a==c) printf("Case %d: Isosceles\n",i);
            else if(a!=b && b!=c && c!=a) printf("Case %d: Scalene\n",i);
        }

        else{
            printf("Case %d: Invalid\n",i);
        }
    }

    return 0;
}
