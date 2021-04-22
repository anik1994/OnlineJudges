#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x,y,z, ma, mi,m;

    while(cin>>x>>y>>z){
       if(x>y && x>z) {
            ma=x;
       }
       else if(y>x && y>z) {
            ma=y;
       }
       else {
            ma=z;
            }

       if(x<y && x<z) {
            mi=x;
       }
       else if(y<x && y<z) {
            mi=y;
       }
       else {
            mi=z;
       }
       if(x<ma && x>mi) {
            m=x;
       }
       else if(y<ma && y>mi) {
            m=y;
       }
       else {
            m=z;
       }
       cout<<mi<<'\n'<<m<<'\n'<<ma<<'\n'<<'\n'<<x<<'\n'<<y<<'\n'<<z<<endl;
    }

    return 0;
}
