#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void){
    string str;
    int i=1;
    while(1){
        cin>>str;
        if(str=="*") break;
        else if(str=="Hajj"){
                printf("Case %d: Hajj-e-Akbar\n",i);
                i++;
        }
        else if(str=="Umrah") {
                printf("Case %d: Hajj-e-Asghar\n",i);
                i++;
        }
    }

    return 0;
}

