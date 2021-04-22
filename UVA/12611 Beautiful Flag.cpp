#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int r;
        cin>>r;
        printf("Case %d:\n",i);
        printf("%d %d\n",((-45*r)/20),((30*r)/20));
        printf("%d %d\n",((55*r)/20),((30*r)/20));
        printf("%d %d\n",((55*r)/20),((-30*r)/20));
        printf("%d %d\n",((-45*r)/20),((-30*r)/20));
    }
 return 0;
}
