#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x, i;

    while(cin>>x){
    for(i=1;i<=x;i++){
        if(i%2==0) continue;
        else printf("%d\n", i);
    }

}
    return 0;
}
